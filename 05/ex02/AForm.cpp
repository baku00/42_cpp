#include "AForm.hpp"

AForm::AForm(std::string const &name, int grade_to_sign, int grade_to_execute) :
	_name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign > Config::MIN_GRADE || grade_to_execute > Config::MIN_GRADE)
		throw AForm::GradeTooLowException();
	else if (grade_to_sign < Config::MAX_GRADE || grade_to_execute < Config::MAX_GRADE)
		throw AForm::GradeTooHighException();
	this->_signed = false;
}

AForm::AForm(AForm const &other): _name(other._name), _grade_to_sign(other._grade_to_sign), _grade_to_execute(other._grade_to_execute)
{
	if (this != &other)
		this->_signed = other._signed;
}

AForm::~AForm()
{}

AForm	&AForm::operator=(AForm const &other)
{
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

std::string const	AForm::getName() const
{
	return (this->_name);
}

int					AForm::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int					AForm::getGradeToExecute() const
{
	return (this->_grade_to_execute);
}

int					AForm::isSigned() const
{
	return (this->_signed);
}

void				AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->_grade_to_sign < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

void				AForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw AForm::NotSignedException();
	else if (this->_grade_to_execute < executor.getGrade())
		throw AForm::GradeTooLowException();
	this->action();
}

const char			*AForm::NotSignedException::what() const throw()
{
	return ("Formulaire isn't signed");
}

const char			*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char			*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &out, AForm const &bureaucrat)
{
	out << "Name: " << bureaucrat.getName() << "\n"
	<< "Grade to sign: " << bureaucrat.getGradeToSign() << "\n"
	<< "Grade to execute: " << bureaucrat.getGradeToExecute() << "\n"
	<< "Signed: " << bureaucrat.isSigned();
	return (out);
}
