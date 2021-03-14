# include <iostream>
# include <string>
# include <iomanip>



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
    void    set_contact(int);
    void    ft_display();

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
    std::cin >> this->name;
    std::cout << "Last name: ";
    std::cin >> this->last_name;
    std::cout << "Nickname: ";
    std::cin >> this->nickname;
    std::cout << "Login: ";
    std::cin >> this->login;
    std::cout << "Postal code: ";
    std::cin >> this->postal_code;
    std::cout << "Email: ";
    std::cin >> this->email;
    std::cout << "Phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Birth day: ";
    std::cin >> this->birthday;
    std::cout << "His favourite meal: ";
    std::cin >> this->fav_meal;
    std::cout << "Underwear color: ";
    std::cin >> this->under_color;
    std::cout << "His darkest secret: ";
    std::cin >> this->dark_secret;
    std::cout << "Contact added to your list :)\n" ;   
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

class phonebook
{
private:
    contact contact_list[8];
    int     amount = 0;

public:
    phonebook(/* args */);
    ~phonebook();
    void add_contact();
    void show_agenda();

};

phonebook::phonebook(/* args */)
{
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
    if (this->amount > 0)
    {
        std::cout << "     Index|First name| Last name|  Nickname\n";
        while (i < this->amount)
        {
            this->contact_list[i].ft_display();
            i++;
            std::cout << std::endl;
        }
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