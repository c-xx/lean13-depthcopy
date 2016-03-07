#include "Array.h"
#include <iostream>
#include <string>
using namespace std;
Array::Array()
{
	cout << "Array()" << endl;
}


Array::~Array()
{
	cout << "~Array()" << endl;
}

Array::Array(const Array &arr) {
	m_iCount = arr.m_iCount;
	cout << "Array(const Array &arr)" << endl;
}

void Array::setCount(int count) {
	m_iCount = count;
}
int Array::getCount() {

	return m_iCount;
}