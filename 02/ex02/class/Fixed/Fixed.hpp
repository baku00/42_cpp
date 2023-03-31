#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					value;
		static const int	bits = 16;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		Fixed			&operator=(const Fixed &fixed);
		bool			&operator<(const Fixed &fixed);
		bool			&operator>(const Fixed &fixed);
		bool			&operator>=(const Fixed &fixed);
		bool			&operator<=(const Fixed &fixed);
		bool			&operator==(const Fixed &fixed);
		bool			&operator!=(const Fixed &fixed);
		Fixed			&operator+(const Fixed &fixed);
		Fixed			&operator-(const Fixed &fixed);
		Fixed			&operator*(const Fixed &fixed);
		Fixed			&operator/(const Fixed &fixed);
		Fixed			&operator++();
		Fixed			&operator--();
		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif