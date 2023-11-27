#pragma once

#include <iostream>
#include <list>
#include <set>
#include <string>

class PmergeMe
{
private:
	const std::list<int> mergin(std::list<int> pend);

public:
	template<typename T>
	void	printList(T list, std::string msg);
	PmergeMe(std::list<int> pend);
	~PmergeMe();
};

