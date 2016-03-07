#pragma once
class Array
{
public:
	Array(int icount);
	Array(const Array &arr);
	~Array();
	void setCount(int count);
	int getCount();
	void printAddr();
	void pringArr();
private:
	int m_iCount;
	int *m_pArr;
};

