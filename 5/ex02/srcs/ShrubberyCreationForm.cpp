#include <fstream>
#include "ShrubberyCreationForm.hpp"

// Private/Bypassed
ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("Shrubbery creation", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {

    Form::operator=(rhs);
    return *this;
}

void ShrubberyCreationForm::run() const {

	std::string dst_path = this->getTarget() + "_shrubbery";
    const static std::string trees =
"               ,@@@@@@@,\n"
"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
"       |o|        | |         | |\n"
"       |.|        | |         | |\n"
"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
    /*
     * This ASCII pic can be found at
     * https://asciiart.website/index.php?art=plants/trees
     */

    std::ofstream ofs(dst_path.c_str());
    if (!ofs.fail())
    {
        ofs << trees << std::endl;
        ofs.close();
    }
}
