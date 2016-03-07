#include "Array.h"
#include <iostream>
#include <string>
using namespace std;
Array::Array(int icount)
{
	m_iCount = icount;
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount;i++)
	{
		m_pArr[i] = i;
	}
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
	//m_pArr = arr.m_pArr;// ǳ����,����㣺��������ָ��ͬһ���ڴ�
	m_pArr = new int[m_iCount];// �������Ҫ�Ѵ���ģ�����newһ���ڴ�
	for (int i = 0; i < m_iCount;i++)
	{
		m_pArr[i] = arr.m_pArr[i];
	}
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
void Array::pringArr() {
	for (int i = 0; i < m_iCount;i++)
	{
		cout << m_pArr[i] << endl;
	}
}