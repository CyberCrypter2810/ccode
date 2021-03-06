// name ahk-quadratic.cpp
// example about structures
// g++ ahk-quadratic.cpp -o ahk.o
#include <iostream>
#include <cmath>
using namespace std;
// y=a(x-h)^2+k
struct quadratic {
	double xstart;
	double xend;
	double aval;
	double hval;
	double kval;
} q;
// method
void printq (quadratic q);

int main() {
	double x,y;
	q.xstart = -10;
	q.xend = 10;
	q.aval = 4.3;
	q.hval = -3;
	q.kval = 5;
	printq(q);
	cout << "x \ty" << endl;
	for (x = q.xstart; x < (q.xend+1); x++) {
		y = q.aval * pow(2 , (x - q.hval)) + q.kval;
		cout << x << "\t" << y << endl;
	} // end for x
	return 0;
}

void printq (quadratic q) {
	cout << "a\th\tk\n";
	cout << q.aval << "\t" << q.hval << "\t" << q.kval << endl;
}
