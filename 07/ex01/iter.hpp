#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void iter(T *a, int length, F function) {
	for (int i = 0; i < length; i++) {
		function(a[i]);
	}
}

#endif
