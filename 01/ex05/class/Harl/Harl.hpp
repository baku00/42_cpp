#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	private:
		void		debug();
		void		info();
		void		warning();
		void		error();
		std::string	function[4];
		void 		(Harl::*ptr[4])(void);

	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif