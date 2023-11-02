#include "Array.hpp"

int	main(void)
{
    Array<int> emptyArray;
    Array<std::string> stringArray(2);
    stringArray[0] = "hi";
    stringArray[1] = "yo";
    std::cout << "stringarray[1]: " << stringArray[1] << std::endl;
    Array<std::string> stringArrayCopy(stringArray);
    std::cout << "stringarrayCopy[1]: " << stringArray[1] << std::endl;
    std::cout << "Default Array Size: " << emptyArray.size() << std::endl;
    std::cout << "---------------------------" << std::endl;
    Array<int> intArray(3);
    intArray[0] = 4;
    intArray[1] = 6;
    intArray[2] = 42;
    std::cout << "intArray[2]: " << intArray[2] << std::endl;
    std::cout << "intArray size: " << intArray.size() << std::endl;
    emptyArray = intArray;
    std::cout << "emptyArray[2]: " << emptyArray[2] << std::endl;
    std::cout << "emptyArray size: " << emptyArray.size() << std::endl;
    try
    {
        std::cout << "intArray[4]: " << intArray[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
