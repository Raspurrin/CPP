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
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	public:
		Fixed();
		Fixed(const int nbr); // Converts int to fixed-point value.
		Fixed(const float nbr); // Converts float to fixed-point value.
		Fixed(const Fixed &rhs);
		Fixed &operator=(const Fixed &rhs);
		// << overload
		~Fixed();
};

#endif
