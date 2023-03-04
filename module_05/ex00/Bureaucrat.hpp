#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
	private: 
		const std::string	name;
		int32_t				grade;

	public:
		std::string	getName() {return (name);};
		int32_t		getGrade() {return (grade);};
		void		incGrade();
		void		decGrade();
	
	public:
		Bureaucrat(void);
		Bureaucrat(int32_t grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat(void);
};

#endif
