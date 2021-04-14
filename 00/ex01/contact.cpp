# include <iostream>
# include <string>
# include <iomanip>
# include <locale>


class contact
{
private:
    int         index;
    std::string name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_code;
    std::string email;
    std::string phone_number;
    std::string birthday;
    std::string fav_meal;
    std::string under_color;
    std::string dark_secret;

public:
    contact(/* args */);
    ~contact();
    void        set_contact(int);
    void        ft_display();
    void        show_contact();
    std::string check_string();
    std::string check_nbr();
    std::string check_date();
    std::string check_email();
};

contact::contact()
{
}

contact::~contact()
{
}

void    contact::set_contact(int i)
{
    this->index = i;
    std::cout << "Name: ";
    this->name = check_string();
    std::cout << "Last name: ";
    this->last_name = check_string();
    std::cout << "Nickname: ";
    this->nickname = check_string();
    std::cout << "Login: ";
    this->login = check_string();
    std::cout << "Postal code: ";
    this->postal_code = check_nbr();
    this->email = check_email();
    std::cout << "Phone number: ";
    this->phone_number = check_nbr();
    std::cout << "Birth day: ";
    this->birthday = check_date();
    std::cout << "His favourite meal: ";
    this->fav_meal = check_string();
    std::cout << "Underwear color: ";
    this->under_color = check_string();
    std::cout << "His darkest secret: ";
    std::getline(std::cin, this->dark_secret);
    
    std::cout << "Contact added to your list :)\n" ;   
}

std::string contact::check_email()
{
    std::string str;
    size_t      i = 0;
    bool        a = true;

    while (a)
    {
        std::cout << "Introduce an email: ";
        getline(std::cin ,str);
        while (str[i])
        {
            if (str[i] == '@')
                a = false;
            i++;
        }
        if (a)
            std::cout << "Thats not a valid email\n";
    }
    return (str);
}

std::string contact::check_date()
{
    std::string str;
    bool    go = true;
    size_t     i = 0;
    while (go)
    {
        std::cout << "Introduce date with the next format: DD/MM/YY\n";
        getline(std::cin ,str);
        if (isdigit(str[0]) && isdigit(str[1]) && str[2] == '/' && isdigit(str[3]) && isdigit(str[4]) && str[2] == '/' && isdigit(str[6]) && isdigit(str[7]) && str[8] == 0)
        {
            i = (size_t)str[1] - 48 + 10 * ((size_t)str[0] - 48);
            if ((i <= 31) && i >= 0)
            {
                i = (size_t)str[4] - 48 + 10 * ((size_t)str[3] - 48);

                if ((i <= 12) && i >= 0)
                    go = false;
            }
        }
        if (go)
            std::cout << "Thats not a valid date\n";
    }
    return (str);
}

std::string contact::check_nbr()
{
    std::string str;
    bool        run = true;

    while (run)
    {
        std::getline(std::cin, str);
        int i = 0;
        while (str[i])
        {
            if (str[i] < '0' || str[i] > '9')
            {
                run = true;
                std::cout << "Thats not a valid number\n";
                break;
            }
            else
                run = false;
            i++;
        }
    }
    return (str);
}


std::string contact::check_string()
{
    std::string str;
    bool        run = true;

    while (run)
    {
        std::getline(std::cin, str);
        int i = 0;
        while (str[i])
        {
            if (str[i] < 'a' || str[i] > 'z')
            {
                run = true;
                std::cout << "Thats not a valid string (try only with alphabet characters)\n";
                break;
            }
            else
                run = false;
            i++;
        }
    }
    return (str);
}

void contact::ft_display()
{
    std::cout << std::setw(10) << this->index << "|";
    if (this->name.length() < 10)
        std::cout << std::setw(10) << this->name << "|";
    else
        std::cout << this->name.substr(0, 9) << ".|";
    if (this->last_name.length() < 10)
        std::cout << std::setw(10) << this->last_name << "|";
    else
        std::cout << this->last_name.substr(0, 9) << ".|";
    if (this->nickname.length() < 10)
        std::cout << std::setw(10) << this->nickname << "|";
    else
        std::cout << this->nickname.substr(0, 9) << ".|";

}

void    contact::show_contact()
{
    if (this->name[0] != 0)
    {        
        std::cout << this->name << std::endl;
        std::cout << this->last_name << std::endl;
        std::cout << this->nickname << std::endl;
        std::cout << this->login << std::endl;
        std::cout << this->postal_code << std::endl;
        std::cout << this->email << std::endl;
        std::cout << this->phone_number << std::endl;
        std::cout << this->birthday << std::endl;
        std::cout << this->fav_meal << std::endl;
        std::cout << this->under_color << std::endl;
        std::cout << this->dark_secret << std::endl;
    }
}


class phonebook
{
private:
    contact contact_list[8];
    int     amount;

public:
    phonebook(/* args */);
    ~phonebook();
    void add_contact();
    void show_agenda();

};

phonebook::phonebook(/* args */)
{
    this->amount = 0;
}

phonebook::~phonebook()
{
}


void phonebook::add_contact()
{
    if (this->amount > 7)
        std::cout << "Not enough space for another contact! try it with an other option" << std::endl;
    else
    {
        this->contact_list[this->amount].set_contact(this->amount);
        this->amount++;
    }
}

void phonebook::show_agenda()
{
    int i = 0;
    int index;

    if (this->amount > 0)
    {
        std::cout << "     Index|First name| Last name|  Nickname|\n";
        std::cout << "----------|----------|----------|----------|\n";
        while (i < this->amount)
        {
            this->contact_list[i].ft_display();
            i++;
            std::cout << std::endl;
        }
        std::cout << "Choose one contact: ";
        std::cin >> index;
        while (std::cin.fail() || index >= this->amount || index < 0)
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Thats not a valid index! Try again...\n";
            std::cout << "Choose one contact: ";
            std::cin >> index;
        }
        this->contact_list[index].show_contact();
    }
    else
        std::cout << "There are no contacts in your list :(\n";
}



int main(void)
{
    std::string option;
    phonebook   my_agenda;

    std::cout << "Hello my fiend, welcome to your phonebook" << std::endl;
    while (true)
    {
        std::cout << "What do u want to do? : ADD, SEARCH, EXIT" << std::endl;
        std::cin >> option;
        if (option == "EXIT")
            exit(0);
        else if (option == "ADD")
            my_agenda.add_contact();
        else if (option == "SEARCH")
            my_agenda.show_agenda();
        else
            std::cout << "Thats not a possible option\n";
    }
}