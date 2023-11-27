#include "PmergeMe.hpp"
#include <list>

int main()
{
	std::list<int> pend;
	pend.push_back(6);
	pend.push_back(1);
	pend.push_back(2);
	pend.push_back(4);
	pend.push_back(7);
	pend.push_back(3);

	pend.push_back(5);

	pend.push_back(10);
	pend.push_back(9);
	pend.push_back(8);
	PmergeMe something(pend);
}
