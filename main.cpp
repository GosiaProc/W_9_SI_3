#include <iostream>
#include <vector>
class Stos {
	std::vector <std::string> wektorek;
	int limit;

	public:
	void push(std::string tekst) {
		if (wektorek.size() < limit) {
			wektorek.push_back(tekst);
		} else {
			std::cout << "Stos sie przepelnil" << std::endl;
		}
	}

	std::string peek() {
		if (wektorek.size() > 0) {
			std::string lastText = wektorek[wektorek.size() - 1];
			
			return lastText;
		} else {
			return " Stos jest pusty ";
		}
	}

	std::string pop() {
		if (wektorek.size() > 0) {
			std::string lastText = wektorek[wektorek.size() - 1];
			wektorek.pop_back();
			return lastText;
		} else {
			return "Stos jest pusty";
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
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	stosik.push(a);
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	stosik.push(a);
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	std::cout << stosik.pop()<<std::endl;
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	std::cout << stosik.pop()<<std::endl;
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	std::cout << stosik.pop()<<std::endl;
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	std::cout << stosik.pop()<<std::endl;
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	std::cout << stosik.pop()<<std::endl;
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;
	std::cout << stosik.pop()<<std::endl;
	std::cout << stosik.peek() << std::endl;
	std::cout << "Wolnych miejsc :" << stosik.freeSpaceCounter() << std::endl;



	
}