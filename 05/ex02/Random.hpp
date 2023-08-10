#ifndef RANDOM_HPP
# define RANDOM_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Random {
	private:
		Random();

	public:
		static int	getRandomInt(int min, int max);
		static int	getRandomInt(int max);
};

#endif