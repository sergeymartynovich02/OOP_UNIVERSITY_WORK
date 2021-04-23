#include <iostream>
#include <string>

class WORKSHOP {
public:
	std::string Name;
	std::string Boss;
	int Quantity;
	WORKSHOP();
	WORKSHOP(std::string NAME, std::string BOSS, int QUANTITY);
	WORKSHOP(const WORKSHOP& a);
	~WORKSHOP();
	std::string getName();
	std::string getBoss();
	int getQuantity();
	void setName(std::string NAME);
	void setBoss(std::string BOSS);
	void setQuantity(int Quantity);
	void view();

};

WORKSHOP::WORKSHOP() {
	Name = "Empty field";
	Boss = "Empty field";
	Quantity = 0;
}
WORKSHOP::WORKSHOP(std::string NAME, std::string BOSS, int QUANTITY) {
	Name = NAME;
	Boss = BOSS;
	Quantity = QUANTITY;
}
WORKSHOP::WORKSHOP(const WORKSHOP& a) {
	Name = a.Name;
	Boss = a.Boss;
	Quantity = a.Quantity;
}
WORKSHOP::~WORKSHOP() {
	std::cout << "Clearing..." << std::endl;
}
std::string WORKSHOP::getName() {
	return std::string();
}

std::string WORKSHOP::getBoss() {
	return Boss;
}

int WORKSHOP::getQuantity() {
	return Quantity;
}
void WORKSHOP::setName(std::string NAME) {
	Name = NAME;
}

void WORKSHOP::setBoss(std::string BOSS) {
	Boss = BOSS;
}

void WORKSHOP::setQuantity(int QUANTITY) {
	Quantity = QUANTITY;
}
void WORKSHOP::view() {
	std::cout << std::endl << "Name: " << Name
		<< std::endl << "Boss: " << Boss
		<< std::endl << "Quantity of workers: " << Quantity
		<< std::endl;
	std::cout << std::endl << "\n" << std::endl;
}



int main() {
	WORKSHOP A("Processing", "Ivanov", 25);
	A.view();
	WORKSHOP B("Packaging", "Petrov", 12);
	B.view();
	WORKSHOP C;
	C.view();

	C.getBoss();
	B.getQuantity();
	A.getName();

	std::cout << std::endl << "Select action number: "
		<< std::endl << "1) Change name " << std::endl << "2) Change boss  "
		<< std::endl << "3) Change quantity of workers " << std::endl << "4) Exit the program " << std::endl;

	int choice;
	std::cin >> choice;
	if (choice >= 1 & choice <= 4) {
		switch (choice) {
		case 1: {
			std::cout << "Enter name" << std::endl;
			std::string Name;
			std::cin >> Name;
			A.setName(Name);
			break;
		};
		case 2: {
			std::cout << "Enter boss" << std::endl;
			std::string Boss;
			std::cin >> Boss;
			A.setBoss(Boss);
			break;
		};
		case 3: {
			std::cout << "Enter quantity of workers" << std::endl;
			int Quantity;
			std::cin >> Quantity;
			A.setQuantity(Quantity);
			break;
		};
		case 4:
			break;
		}
	}
	else {
		std::cout << "Incorrect input!" << std::endl;
	}

	A.view();

	WORKSHOP* F = new WORKSHOP();
	delete F;
}
