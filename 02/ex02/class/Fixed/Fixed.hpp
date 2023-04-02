#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					value;
		static const int	bits = 16;

	public:
		/**
		 * Constructors
		*/
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int const value);
		Fixed(float const value);

		/**
		 * Destructor
		*/
		~Fixed();

		/**
		 * Copy assignement
		*/
		Fixed			&operator=(const Fixed &fixed);

		/**
		 * Operator comparison
		*/
		bool			operator<(const Fixed &fixed) const;
		bool			operator>(const Fixed &fixed) const;
		bool			operator>=(const Fixed &fixed) const;
		bool			operator<=(const Fixed &fixed) const;
		bool			operator==(const Fixed &fixed) const;
		bool			operator!=(const Fixed &fixed) const;

		/**
		 * Operator arithmetic
		*/
		Fixed			&operator+(const Fixed &fixed);
		Fixed			&operator-(const Fixed &fixed);
		Fixed			&operator*(const Fixed &fixed);
		Fixed			&operator/(const Fixed &fixed);

		/**
		 * Operator incrementation / decrementation
		*/
		Fixed			&operator++();
		Fixed			&operator--();

		/**
		 * Bits manager
		*/
		int				getRawBits() const;
		void			setRawBits(int const raw);

		/**
		 * Converters
		*/
		float			toFloat(void) const;
		int				toInt(void) const;

		/**
		 * Static
		*/
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);

		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif