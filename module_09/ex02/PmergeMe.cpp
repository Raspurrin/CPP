#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::list<int> initialList)
{
	// call only with even numbers and if uneven then do one last sort with that number
	mergin(initialList); // input validation
}

const std::list<int> PmergeMe::mergin(std::list<int> list)
{
	std::list<int> pend;
	std::list<std::pair<int, int> > pairs;
	std::set<int> main;

	int leftOverPend = -1;
	std::cout << "mergin'" << std::endl;
	printList<std::list<int> >(list, "list: ");
	if (list.size() % 2 != 0)
	{
		leftOverPend = list.back();
		list.pop_back();
	}
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::list<int>::iterator next = it++;
		pairs.push_back(std::make_pair(*it, *next));
	}
	for (std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if (it->first < it->second)
			std::swap(it->first, it->second);
		main.insert(it->first);
		pend.push_back(it->second);
	}
	if (leftOverPend != -1)
	{
		pend.push_back(leftOverPend);
	}
	std::cout << "after seperating main and pend: " << std::endl;
	printList<std::set<int> >(main, "main: ");
	printList<std::list<int> >(pend, "pend: ");
	
	
	if (pend.size() > 2)
	{
		std::cout << "---------------------" << std::endl;
		
		pend = mergin(pend);
		std::cout << "---------------------" << std::endl;
		std:: cout << "after recursion: " << std::endl;
		printList<std::set<int> >(main, "main: ");
		printList<std::list<int> >(pend, "pend: ");
	}
	
	for (std::list<int>::iterator it = pend.begin(); it != pend.end(); it++)
		main.insert(*it);
	printList<std::set<int> >(main, "added pend to main: ");
	std::list<int> sortedPend(main.begin(), main.end());
	return (sortedPend);
}

template<typename T>
void	PmergeMe::printList(T list, std::string msg)
{
	std::cout << msg;
	for (typename T::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

PmergeMe::~PmergeMe()
{
}
