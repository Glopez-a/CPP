# include <iostream>
# include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *pointer = &brain;
    std::string &reference = brain;

    std::cout << brain << std::endl;
    std::cout << *pointer << std::endl;
    std::cout << reference << std::endl;
}