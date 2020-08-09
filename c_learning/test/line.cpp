/*************************************************************************
	* File Name: line.cpp
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2020年07月26日 星期日 14时45分01秒
 ************************************************************************/
#include<iostream>

using namespace std;

class Line {
	public:
		int getLength(void);
		Line(int len);
		Line(const Line &obj);
		~Line();
	private:
		int *ptr;
		
};

Line::Line(int len) {
	cout << "Object is begin created" << endl;
	ptr = new int;
	*ptr = len;

}

Line::Line(const Line &obj){
	cout << "Copy constructor" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

Line::~Line(void) {

	cout << "Object is being deleted" << endl;
	delete ptr;
}

int Line::getLength(void){
	return *ptr;
}

void display(Line obj) {
	cout << "line's size:" << obj.getLength() << endl;
}


int main() {

	Line line(20);

	display(line);

	return 0;
}
