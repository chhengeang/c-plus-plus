#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		std::string id;
		std::string name;
		char sex;
		int age;
};

class employee : private person {
	private:
		float salary;
	public:
		void input_Data();
		void show_Data();
		float tax_salary();
};

void employee::input_Data(){
	std::cout << "Enter id=";
	std::getline(std::cin, id);
	
	std::cout << "Enter name=";
	std::getline(std::cin, name);
	
	std::cout << "Enter sex=";
	std::cin >> sex;
	
	std::cout << "Enter age=";
	std::cin >> age;
	
	while (true) {
		std::cout << "Enter salary=";
		if (std::cin >> salary) {
			break;
		} else {
			std::cout << "Invalid input, please enter a valid number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

void employee::show_Data(){
	std::cout << id << '\t' << name << '\t' << sex << '\t' << age << '\t' << tax_salary() << std::endl;
}

float employee::tax_salary(){
	if(salary < 550){
		return salary * 0.05;
	} else {
		return salary * 0.07;
	}
}

