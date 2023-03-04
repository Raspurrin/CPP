#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (this->cur_idx => 4)
	{
		std::cout << "My capacity for knowledge has reached it's limit! Oh my poor puny brain. It's all the maths, definitely the maths" << std::endl;
		return;
	}
	knowledge[this->cur_idx] = materia;
	cur_idx++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4 && knowledge[i] != NULL; i++)
	{
		if ((*knowledge)->getType() == type)
			return (knowledge[i]);
	}
}

MateriaSource::MateriaSource(void) :
	cur_idx(0)
{
	bzero(knowledge, sizeof(AMateria) * 4);
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
