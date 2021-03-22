# include <iostream>
# include <istream>
# include <string>
# include <iomanip>
# include <fstream>

int ft_error(int i)
{
    if (i == 1)
        std::cout << "Thats not a valid input: 3 arguments needed..\n";
    else if (i == 2)
        std::cout << "Thats not a valid input: empty strings aren't valid\n";
    else if (i == 3)
        std::cout << "Thats not a valid input: thats not a valid file\n";
    return (1);
}

int main(int argc, char **argv)
{
    std::string     str;
    std::fstream    my_file;
    my_file.open(argv[1]);
    if (argc != 4)
        return (ft_error(1));
    else if (!argv[2][0] || !argv[3][0])
        return (ft_error(2));
    else if (!my_file)
        return (ft_error(2));
    std::getline(my_file, str);
    std::cout << str << std::endl;
    my_file << "hola que tal";
}