#include "Tests.h"
#include "UI.h"
#include <iostream>
#include "Sort_Method.h"

int main() {
	Tests t;
	t.TestActions();
	t.test_AutoInMemoryRepository();
	t.TestController();

	std::cout << "Tests Over\n";

	std::string instructions = "\nChoose Sort Method\n0 - Exit\n1 - Standard Library Sort\n2 - BubbleSort\n";
	std::cout << instructions;

	std::cout << "\nChoose option:\nYour option: ";
	int input; std::cin >> input;
	if (input == 0)
		exit(0);
	else if (input == 1)
		t.TestUI_SEMINAR5(Sort_Method_Type::Library_Sort);
	else if (input == 2)
		t.TestUI_SEMINAR5(Sort_Method_Type::Bubble_Sort);
}