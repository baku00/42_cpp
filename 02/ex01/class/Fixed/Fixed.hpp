#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					value;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		Fixed			&operator=(const Fixed &fixed);
		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
		static	Fixed	min(Fixed &n1, Fixed &n2);
		static	Fixed	min(const Fixed &n1, const Fixed &n2);
		static	Fixed	max(Fixed &n1, Fixed &n2);
		static	Fixed	max(const Fixed &n1, const Fixed &n2);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif