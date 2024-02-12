#include <string>
#include <iostream>

void print_string(std::string s)
{
	int len = s.length();
	if (len >= 10)
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << s[i];
		}
		std::cout << ".";
	}
	else
	{
		for (int i = 0; i < 10 - len; i++)
		{
			std::cout << " ";
		}
		std::cout << s;
	}
}

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string phone_num;
		std::string dark_secret;
	public:
		Contact(){

		}
		Contact(std::string _f_name, std::string _l_name, std::string _n_name, std::string _phone_num, std::string _dark_secret)
		{
			f_name = _f_name;
			l_name = _l_name;
			n_name = _n_name;
			phone_num = _phone_num;
			dark_secret = _dark_secret;
		}
		void display_contact(int index)
		{
			std::cout << "         " << index << "|";
			print_string(f_name);
			std::cout << "|";
			print_string(l_name);
			std::cout << "|";
			print_string(n_name);
			std::cout << std::endl;
		}
		void display_full()
		{
			std::cout<< f_name << std::endl;
			std::cout<< l_name << std::endl;
			std::cout<< n_name << std::endl;
			std::cout<< phone_num << std::endl;
			std::cout<< dark_secret << std::endl;
		}
};

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		amount;
	public:
		PhoneBook()
		{
			amount = 0;
		}
		void add(Contact _new)
		{
			contacts[amount % 8] = _new;
			amount++;
		}
		void search()
		{
			int index = 0;
			std::string in;
			for (int i = 0; i < std::min(amount, 8); i++)
			{
				contacts[i].display_contact(i);
			}
			getline(std::cin, in);
			if (in.length() == 1 && isdigit(in[0]))
			{
				index = std::stoi(in);
				if (index < 0 || index >= std::min(amount, 8))
				{
					std::cout << "Stop it. Get some help!" << std::endl;
				}
				else
				{
					contacts[index].display_full();
				}
			}
			else
			{
				std::cout << "Stop it. Get some help!" << std::endl;
			}
		}
};

int main(void)
{
	std::string input;
	PhoneBook pb;
	do
	{
		std::cout << ">";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::string f_name = "";
			do
			{
				std::cout << "First name: ";
				std::getline(std::cin, f_name);
			} while (f_name == "");
			std::string l_name = "";
			do
			{
				std::cout << "Last name: ";
				std::getline(std::cin, l_name);
			} while (l_name == "");
			std::string n_name = "";
			do
			{
				std::cout << "Nickname: ";
				std::getline(std::cin, n_name);
			} while (n_name == "");
			std::string phone_num = "";
			do
			{
				std::cout << "Phone number: ";
				std::getline(std::cin, phone_num);
			} while (phone_num == "");
			std::string dark_secret = "";
			do
			{
				std::cout << "Darkest Secret: ";
				std::getline(std::cin, dark_secret);
			} while (dark_secret == "");
			pb.add(Contact(f_name, l_name, n_name, phone_num, dark_secret));
		}
		else if (input == "SEARCH")
		{
			pb.search();
		}
	}
	while (input != "EXIT");
}