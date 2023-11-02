#include "easyfind.hpp"
#include <vector>

int main(void)
{
    std::vector<int> list;
    list.push_back(10);
    list.push_back(5);
    std::cout << "found: " << *easyfind(list, 5) << std::endl;
    std::cout << "adress from function: " << &*easyfind(list, 5) << std::endl;
    std::cout << "address in list: " << &list.at(1) << std::endl;
    return (0);
}
