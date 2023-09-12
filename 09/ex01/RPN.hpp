#ifndef SPAN_HPP
# define SPAN_HPP
# include <string>
# include <stack>
# include <iostream>
# include <sstream>
# include <stdlib.h>

class RPN {
	private:
		RPN();
		RPN(const RPN &src);
		~RPN();
		RPN &operator=(const RPN &rhs);

	public:
		static double calculate(std::string arg);
		static bool isInteger(char c);
		static bool isOperator(char c);
		static double makeOperation(char c, double n1, double n2);
};

std::ostream	& operator<<(std::ostream & out, RPN const & instance);

#endif
