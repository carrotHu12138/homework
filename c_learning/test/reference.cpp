/*************************************************************************
 * File Name: reference.cpp
 * Author: carrot
 * Mail: vector.2012.10@gmail.com
 * Created Time: 2020年07月26日 星期日 14时29分37秒
 ************************************************************************/

#include<iostream>

using namespace std;

int main() {

	int i;
	double d;

	int& r = i;
	double& s = d;

	i = 5;
	cout << "value of i:" << i << endl;
	cout << "value of i reference:" << r << endl;

	d = 11.7;
	cout << "value of d:" << d << endl;
	cout << "value of d reference:" << s << endl;

	return 0;
}
