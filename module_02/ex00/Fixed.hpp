#ifndef FIXED_HPP

# include <iostream>
# include <stdint.h>

class Fixed
{
	private:
		int32_t	value;
		static const int32_t fractional_bits = 8;

	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int32_t	toInt( void ) const;

	public: 
		Fixed &operator=(const Fixed &rhs);
		ostream	&operator<<(ostream& os, const Fixed& fixed);

	public:
		Fixed(const int32_t nbr);
		Fixed(const float nbr);
		Fixed();
		Fixed(const Fixed &rhs);
		~Fixed();
};

#endif