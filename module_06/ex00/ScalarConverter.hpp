#include <iostream>
#include <exception>
#include <limits>

class	ScalarConverter
{
	private: 
		static std::string toBeConverted;
		static double convertedDouble;

	private:
		static void	converting();
		static void	pseudoConverting();
		static bool	isIntType();
		static bool	isPseudoType();
		static bool	isCharType();
		static bool	isFloatType();
		
	public:
		static void	recognisingType(std::string str);

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
