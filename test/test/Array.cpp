#include "Array.h"
#include <iostream>
#include <string>
using namespace std;
Array::Array(int icount)
{
	m_iCount = icount;
	m_pArr = new int[m_iCount];
	cout << "Array()" << endl;
}


Array::~Array()
{
	delete[]m_pArr;
	m_pArr = NULL;
	cout << "~Array()" << endl;
}

Array::Array(const Array &arr) {
	m_iCount = arr.m_iCount;
	m_pArr = arr.m_pArr;// 浅拷贝,问题点：两个对象指向同一块内存
	cout << "Array(const Array &arr)" << endl;
}

void Array::setCount(int count) {
	m_iCount = count;
}
int Array::getCount() {

	return m_iCount;
}

void Array::printAddr() {
	cout << "m_arr:" << m_pArr << endl;
}