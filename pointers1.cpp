//pointers1.cpp
//g++ pointers1.cpp -o pointer1.o

#include <iostream>
using namespace std;

int main() {
	int one, two;
	int * thepointer;
	thepointer = &one;
	*thepointer = 1111;
	thepointer = &two;
	*thepointer = 2222;
	cout << "one is " << one << " " << &one << " \n";
	cout << "two is " << two << " " << &two << " \n";
	cout << "thepointer " << thepointer << " " << &thepointer << " \n";
	return 0;
}
