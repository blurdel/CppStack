#include <iostream>
#include <stdexcept>
using namespace std;

#include "Stack.h"


int main() {

	try {

		Stack<int> iStack;
		Stack<string> sStack;

		iStack.push(7);
		cout << iStack.top() << endl;

		sStack.push("world!");
		sStack.push("hello");
		cout << sStack.top() << std::endl;
		sStack.pop();
		cout << sStack.top() << std::endl;
		sStack.pop();
		sStack.pop(); // exception

	} catch (exception const &ex) {
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}

}
