/*************************************************************************
	* File Name: pointer.cpp
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2020年07月26日 星期日 14时19分05秒
 ************************************************************************/
#include<iostream>

using namespace std;

int main() {
	int var = 20;
	int *ip;

	ip = &var;

	cout << "Value of var variable:";
	cout << var << endl;

	cout << "Address stored in ip variable:";
	cout << ip << endl;

	cout << "vallue of *ip variable:";
	cout << *ip << endl;
	return 0;
}
