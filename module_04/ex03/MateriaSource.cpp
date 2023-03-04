#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria* materia)
{
	std::cout << "learned: " << materia->getType() << std::endl;
	std::cout << "index: " << cur_idx << std::endl;
	std::cout << "pls tell me I'm learnin" << std::endl;
	if (this->cur_idx >= 4)
	{
		std::cout << "My capacity for knowledge has reached it's limit! Oh my poor puny brain. It's all the maths, definitely the maths" << std::endl;
		return;
	}
	knowledge[this->cur_idx] = materia;
	cur_idx++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	size_t	i = 0;

	std::cout << "type: " << type << std::endl;
	while (knowledge[i] && i < 4)
	{
		std::cout << "i: " << i << std::endl;
		if (knowledge[i] && knowledge[i]->getType() == type)
		{
			std::cout << "I cannot spell" << std::endl;
			// std::cout << knowledge[i]->getType() << std::endl;
			return (knowledge[i]->clone());
		}
		std::cout << knowledge[i]->getType() << std::endl;
		i++;
	}
	std::cout << "aaaaaa" << std::endl;
	return (NULL);
}

MateriaSource::MateriaSource(void) :
	cur_idx(0)
{
	// bzero(knowledge, sizeof(AMateria) * 4);
	for (size_t i = 0; i < 4; i++)
		knowledge[i] = NULL;

	std::cout << ON_YELLOW << "MateriaSource's constructor is called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	std::cout << ON_YELLOW << "MateriaSource's copy constructor is called" <<  std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << ON_YELLOW << "MateriaSource's assignment operator is called" << RESET << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << ON_YELLOW << "MateriaSource's destructor is called" << RESET << std::endl;
}
