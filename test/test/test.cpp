#include <iostream>
#include <stdlib.h>
#include <string>
#include "Array.h"
using namespace std;



int main(void) {

	Array arr1;
	arr1.setCount(5);
	Array arr2 = arr1;//ǳ�������캯��
	cout << "arr2.getCount()\t" << arr2.getCount() << endl;

	system("pause");
	return 0;
}