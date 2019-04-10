// g++ sinperiodamp.cpp -o sinperiodamp.o
#include <iostream>
#include <cmath>
using namespace std;

double r4(double var) // r4 rounds a decimal to 4 decimals
{
	double value;
	if (var < 0){
		value = (int)(var * 10000 - 0.0005);
	}
	else {
		value = (int)(var * 10000 + 0.0005);
	}
	return (double)value / 10000;
}


int main (){
	double PI=3.14159265;
	double a,p,t, rad, sr, aspr;
	// theta in terms of degrees
	//t(theta) rad(radian) sr(sin result)
	//aspr(amplitude * sin (period*t))
	cout << "\n INPUT A AMPLITUDE : ";
	cin >> a;
	cout << "\n INPUT A PERIOD : ";
	cin >> p;
	cout << "\n theta \tsin(t) \t a*sin(pt) \n";
	for ( t=0 ; t<=360 ; t = t + 15 )
	{
		rad = t * (PI / 180);
		sr = sin(rad);
		aspr = a*sin(p*rad);
		cout << t << "\t" << r4(sr) << "\t\t" << r4(aspr) << "\t" << "\n";
	}
	return 0;
}	
