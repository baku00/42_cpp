#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	private:
		static const int IDEAS_NUMBER = 100;
		std::string ideas[IDEAS_NUMBER];
	
	public:
		Brain();
		Brain(const Brain &brain);
		~Brain();

		void	printIdeas();

		Brain &operator=(const Brain &brain);
};

#endif