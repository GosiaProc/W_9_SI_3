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
			throw std::overflow_error("Stos sie przepelnil");
		}
	}

	std::string peek() {
		if (wektorek.size() > 0) {
			std::string lastText = wektorek[wektorek.size() - 1];
			
			return lastText;
		} else {
			throw std::underflow_error("Stos jest pusty nie mozna zrobic peek");
		}
	}

	std::string pop() {
		if (wektorek.size() > 0) {
			std::string lastText = wektorek[wektorek.size() - 1];
			wektorek.pop_back();
			return lastText;
		} else {
			throw std::underflow_error("Stos jest pusty nie mozna zrobic pop");
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
		stosik.push(b);
		stosik.push(a);
		stosik.push(b);
		stosik.push(a);
		std::cout << stosik.pop() << std::endl;
		std::cout << stosik.peek() << std::endl;
		std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;

	}
		catch (std::underflow_error& e)
		{
			std::cerr<< "wyjatek zlapany  :  " << e.what() << std::endl;
			return -1;
		}
		catch (std::overflow_error& e)
		{
			std::cerr << "wyjatek zlapany  :  " << e.what() << std::endl;
			return -1;
		}
		return 0;
}