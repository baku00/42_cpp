#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

template<typename T>
typename T::iterator easyfind(T container, int n)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		if (*it == n)
			return it;
	return container.end();
}

#endif