#ifndef FIXED_HPP

# include <iostream>
# include <stdint.h>

class Fixed
{
	private:
		int32_t					value;
		static const int32_t	fractional_bits = 8;

	public:
		int		getRawBits(void) const;
		int		getFractionalBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	public:
		static Fixed	&min(Fixed &ref1, Fixed &ref2);
		const static Fixed	&min(const Fixed &ref1, const Fixed &ref2);
		static Fixed	&max(Fixed &ref1, Fixed &ref2);
		const static Fixed	&max(const Fixed &ref1, const Fixed &ref2);

	public:
		// comparison operators
		bool	operator>(const Fixed &rhs);
		bool	operator<(const Fixed &rhs);
		bool	operator>=(const Fixed &rhs);
		bool	operator<=(const Fixed &rhs);
		bool	operator==(const Fixed &rhs);
		bool	operator!=(const Fixed &rhs);

		// arithmetic operators
		Fixed	operator+(const Fixed &rhs);
		Fixed	operator-(const Fixed &rhs);
		Fixed	operator*(const Fixed &rhs);
		Fixed	operator/(const Fixed &rhs);

		// increment/decrement
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	&operator++(int);
		Fixed	&operator--(int);

	public:
		Fixed();
		Fixed(const int nbr); // Converts int to fixed-point value.
		Fixed(const float nbr); // Converts float to fixed-point value.
		Fixed(const Fixed &rhs);
		Fixed	&operator=(const Fixed &rhs);
		~Fixed();
};

std::ostream&	operator<<(std::ostream &stream, Fixed const &fixed);

#endif
