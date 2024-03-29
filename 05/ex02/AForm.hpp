#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int			const	_grade_to_sign;
		int			const	_grade_to_execute;
		AForm();
		virtual void	action() const = 0;

	public:
		AForm(std::string const &name, int grade_to_sign, int grade_to_execute);
		AForm(AForm const &other);
		virtual ~AForm();

		AForm	&operator=(AForm const &other);

		std::string const	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		int					isSigned() const;

		void				beSigned(Bureaucrat const &bureaucrat);
		void				execute(Bureaucrat const &executor) const;

		class NotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, AForm const &bureaucrat);

#endif