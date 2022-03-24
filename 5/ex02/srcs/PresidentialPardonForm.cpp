#include "PresidentialPardonForm.hpp"

// Private/Bypassed
PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	Form("Presidential Pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    Form::operator=(rhs);
    return *this;
}

void PresidentialPardonForm::run() const {

	std::cout << "["<< this->getTarget() <<
	"] has been pardoned by Zaphod Beeblebrox" << std::endl;
}
