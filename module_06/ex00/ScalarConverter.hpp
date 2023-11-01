#include <iostream>
#include <exception>
#include <limits>

class	ScalarConverter
{
	std::string	toBeConverted;
	double		convertedDouble;

	void	recognisingType();
	void	converting();
	void	pseudoConverting();
	bool	isIntType();
	bool	isPseudoType();
	bool	isCharType();
	bool	isFloatType();
		
	private: 
		ScalarConverter();

	public:
		ScalarConverter(std::string toBeConverted);
		ScalarConverter(const ScalarConverter &ref);
		ScalarConverter &operator=(const ScalarConverter &ref);
		~ScalarConverter();

	class NotRecognisedType : public std::exception 
	{
		public: 
			virtual const char *what () const throw()
			{
				return ("ScalarConverter was used by an unrecognised type\n"
				"It can only be used with a character, numeral, float or pseudo literal");
			}
	};
};
