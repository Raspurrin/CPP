#ifndef FIXED_HPP

# include <iostream>
# include <stdint.h>

class Fixed
{
	private:
		int32_t	value;
		static const int32_t fractional_bits = 8;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed();
		Fixed(const Fixed &rhs);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
};

#endif