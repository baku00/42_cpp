#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_name(name)
{
	if (grade > Config::MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < Config::MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other): _name(other._name)
{
	if (this != &other)
		this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void				Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < Config::MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void				Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > Config::MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void				Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
