#include "MutantStack.hpp"

# define RESET  "\033[0m" 
# define RED    "\033[31m"
# define GREEN  "\033[32m"
# define YELLOW "\033[33m"
# define BLUE   "\033[34m"

int main()
{
/* TEST FROM SUBJECT */
	/* MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	*/

/* MORE TEST */
	std::cout << YELLOW "\nTesting with int\n" RESET << std::endl;
	MutantStack<int> intStack;
	intStack.push(42);
	intStack.push(-1);
	intStack.push(2024);
	intStack.push(0);
	std::cout << BLUE "Iterating using iterator:" RESET << std::endl;
	for (MutantStack<int>::iterator it = intStack.begin(); it != intStack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << YELLOW  "\nTesting with std::string\n" RESET << std::endl;
	MutantStack<std::string> stringStack;
	stringStack.push("This");
	stringStack.push("is");
	stringStack.push("working!");
	std::cout << BLUE "Top element: " RESET << stringStack.top() << std::endl;
	stringStack.pop();
	std::cout << BLUE "Top after pop: " RESET << stringStack.top() << std::endl;
	std::cout << std::endl;
	std::cout << YELLOW "\nTesting with float\n" RESET << std::endl;
	MutantStack<float> floatStack;
	floatStack.push(3.14f);
	floatStack.push(1.618f);
	floatStack.push(2.718f);
	floatStack.push(1.414f);
	std::cout << BLUE "All elements:" RESET << std::endl;
	for (MutantStack<float>::iterator it = floatStack.begin(); it != floatStack.end(); ++it)
		std::cout << (*it) << std::endl;
	std::cout << BLUE "\nIterating backwards:" RESET << std::endl;
	MutantStack<float>::iterator ite = floatStack.end();
	MutantStack<float>::iterator itb = floatStack.begin();
	while (ite != itb)
	{
		--ite;
		std::cout << *ite << std::endl;
	}
	std::cout << YELLOW "\nTesting edge case with empty MutantStack<int>" RESET << std::endl;
	MutantStack<int> emptyStack;
	std::cout << "Is stack empty? " << (emptyStack.empty() ? "Yes" : "No") << std::endl;
	if (!emptyStack.empty()) {
		std::cout << "Unexpected non-empty stack!" << std::endl;
	}
	std::cout << YELLOW "\nTesting copy and assignment (on Stack<int>)" RESET << std::endl;
	MutantStack<int> copiedStack = intStack;
	MutantStack<int> assignedStack;
	assignedStack = intStack;
	std::cout << "Copied stack size: " << copiedStack.size() << std::endl;
	std::cout << "Assigned stack size: " << assignedStack.size() << std::endl;
}