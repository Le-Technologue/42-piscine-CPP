#include "RobotomyRequestForm.hpp"

// Private/Bypassed
RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("Robotomy Request", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    Form::operator=(rhs);
    return *this;
}

void RobotomyRequestForm::run() const {

	static int	random_factor = 0;

	std::cout << "** drilling noises **" << std::endl;
	if (random_factor++ % 2)
	{
		std::cout << "["<< this->getTarget() <<
		"] was successfully robotomized" << std::endl;
	}
	else
	{
		std::cout << "["<< this->getTarget() <<
		"] hasn't been robotomized properly" << std::endl;
	}
}
