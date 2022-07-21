#include <iostream>
#include <vector>
#include <stdexcept>

class Stos {
	std::vector <std::string> wektorek;
	int limit;

	public:
	void push(std::string tekst) {
		if (wektorek.size() < limit) {
			wektorek.push_back(tekst);
		} else {
			throw std::invalid_argument("Stos sie przepelnil");
		}
	}

	std::string peek() {
		if (wektorek.size() > 0) {
			std::string lastText = wektorek[wektorek.size() - 1];
			
			return lastText;
		} else {
			throw std::invalid_argument("Stos jest pusty nie mozna zrobic peek");
		}
	}

	std::string pop() {
		if (wektorek.size() > 0) {
			std::string lastText = wektorek[wektorek.size() - 1];
			wektorek.pop_back();
			return lastText;
		} else {
			throw std::invalid_argument("Stos jest pusty nie mozna zrobic pop");
		}
	}

	int  freeSpaceCounter() {
		return limit-wektorek.size();
	}

	Stos(int x) {
		limit = x;
	}
};

int main(void) {

	try {

		std::string a = "Tekst 1";
		std::string b = "Tekst 2";

		Stos stosik(4);
		stosik.push(a);
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		stosik.push(a);
		std::cout << stosik.peek() << std::endl;

		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;

		stosik.push(b);
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		stosik.push(a);
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		stosik.push(a);
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;

	}
		catch (std::invalid_argument& e)
		{
			std::cerr<< "wyjatek zlapany  :  " << e.what() << std::endl;
			return -1;
		}
		return 0;
}