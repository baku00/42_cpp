#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(const RPN &rhs)
{
	return (*this);
}

RPN::~RPN() {}

bool	RPN::isInteger(char c)
{
	return (c >= '0' && c <= '9');
}

bool	RPN::isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

double	RPN::makeOperation(char c, double n1, double n2)
{
	if (c == '+')
		return n1 + n2;
	else  if (c == '-')
		return n1 - n2;
	else  if (c == '*')
		return n1 * n2;
	else  if (c == '/')
		return n1 / n2;
	else
		throw "Error";
}

double	RPN::calculate(std::string arg)
{
	std::stack<double> stack;
	double i = 0;

	while (arg[i])
	{
		if (RPN::isInteger(arg[i]))
		{
			if (RPN::isInteger(arg[i + 1]))
				throw "Error";
			stack.push(arg[i] - 48);
		}
		else if (RPN::isOperator(arg[i]))
		{
			if (stack.size() < 2)
				throw "Error";

			double first, second, result;

			second = stack.top();
			stack.pop();
			first = stack.top();
			stack.pop();
			result = RPN::makeOperation(arg[i], first, second);
			stack.push(result);
		}
		else if (arg[i] != ' ')
			throw "Error";
		i++;
	}
	if (stack.size() != 1)
		throw "Error";
	return (stack.top());
}

std::ostream	& operator<<(std::ostream & out, RPN const & instance)
{
	return out;
}