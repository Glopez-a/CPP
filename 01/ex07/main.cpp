# include <iostream>
# include <istream>
# include <string>
# include <iomanip>
# include <fstream>

int ft_strlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

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
    std::string     str1 = argv[2];
    std::fstream    my_file;
    std::ofstream   replace;
    std::string     file_name;
    size_t          index;
    my_file.open(argv[1]);
    if (argc != 4)
        return (ft_error(1));
    else if (!argv[2][0] || !argv[3][0])
        return (ft_error(2));
    else if (!my_file)
        return (ft_error(2));
    file_name = argv[1] + (std::string)".replace";
    replace.open(file_name);
    while (std::getline(my_file, str))
    {
        while (true)
        {
            index = 0;
            index = str.find(argv[2], index);
            if (index == std::string::npos)
                break;
            str.replace(index, ft_strlen(argv[2]), argv[3]);
            index += ft_strlen(argv[3]);
        }
        replace << str << std::endl;
    }
}