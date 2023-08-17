#include "Form.hpp"

Form::Form()
   : _name("default"),
	 _gradeToSign(150),
	 _gradeToExecute(150),
	 _isSigned(false)
{

}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

std::string Form::getName() const
{
	return (_name);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

Form::Form(const Form& other) :
	_name(other._name),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute),
	_isSigned(other._isSigned)
{
	
}

Form& Form::operator=(const Form& other)
{
	_name = other._name;
	_gradeToSign = other._gradeToSign;
	_gradeToExecute = other._gradeToExecute;
	_isSigned = other._isSigned;

    return (*this);
}


Form::~Form() 
{

}
