#ifndef STACK_H_
#define STACK_H_

#include <stdexcept>
#include <vector>


template<class T>
class Stack {
public:
	void push(T const&); // push/add element
	void pop();          // pop/remove element
	T top() const;       // return top element
	bool empty() const;  // return true if empty.

private:
	vector<T> elems; // elements
};


template<class T>
void Stack<T>::push(T const& elem) {
	// append copy of element
	elems.push_back(elem);
}

template<class T>
void Stack<T>::pop() {
	if (elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}
	// remove last element
	elems.pop_back();
}

template<class T>
T Stack<T>::top() const {
	if (elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}
	// return copy of last element
	return elems.back();
}

template<class T>
bool Stack<T>::empty() const {
	return elems.empty();
}


#endif
