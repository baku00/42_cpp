#ifndef UTILS_HPP
# define UTILS_HPP
# include <iostream>
# include <cstdlib>

class Utils {
	public:
		static void			clear_screen();
		static std::string	readline(std::string display);
};
#endif