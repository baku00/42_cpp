template <typename T, typename Container = std::deque<T>>
class IterableStack : public std::stack<T, Container>
{
	public:
		using std::stack<T, Container>::stack; // Inherit constructors

		typename Container::iterator begin() { return this->c.begin(); }
		typename Container::iterator end() { return this->c.end(); }
};
