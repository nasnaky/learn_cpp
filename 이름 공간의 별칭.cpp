//19
#include<iostream>

using namespace std;

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int main19(void) {
	AAA::BBB::CCC::num1 = 10;
	AAA::BBB::CCC::num2 = 20;

	namespace ABC = AAA::BBB::CCC;

	std::cout << ABC::num1 << std::endl;
	std::cout << ABC::num2 << std::endl;

	return 0;
}