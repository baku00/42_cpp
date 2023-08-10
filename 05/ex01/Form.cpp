#include "Form.hpp"

Form::Form(std::string const name, int grade_to_sign, int grade_to_execute) :
	_name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign > Config::MIN_GRADE || grade_to_execute > Config::MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (grade_to_sign < Config::MAX_GRADE || grade_to_execute < Config::MAX_GRADE)
		throw Form::GradeTooHighException();
	this->_signed = false;
}

Form::Form(Form const &other): _name(other._name), _grade_to_sign(other._grade_to_sign), _grade_to_execute(other._grade_to_execute)
{
	if (this != &other)
		this->_signed = other._signed;
}

Form::~Form()
{}

Form	&Form::operator=(Form const &other)
{
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

int					Form::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int					Form::getGradeToExecute() const
{
	return (this->_grade_to_execute);
}

int					Form::isSigned() const
{
	return (this->_signed);
}

void				Form::beSigned(Bureaucrat const bureaucrat)
{
	if (this->_grade_to_sign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

const char			*Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char			*Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	out << "Name: " << form.getName() << "\n"
	<< "Grade to sign: " << form.getGradeToSign() << "\n"
	<< "Grade to execute: " << form.getGradeToExecute() << "\n"
	<< "Signed: " << form.isSigned();
	return (out);
}
