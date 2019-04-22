// ifelse_2d.cpp -o ifelse_2d.o
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int r,c; // r = row and c = column
	char ac = '*';
	char bc = '#';
	char cc = '+';
	char dc = '|';
	char thechar = ' ';
	char lst = ('*', '<', '>');
	int val = 0;
	int m[8][8] = {
		{0,0,0,0,0,0,0,0} ,
		{1,0,0,0,0,0,0,0} ,
		{2,0,0,0,0,0,0,0} ,
		{3,0,0,0,0,0,0,0} ,
		{4,0,0,0,0,0,0,0} ,
		{5,0,0,0,0,0,0,0} ,
		{0,0,0,0,0,0,0,0} ,
		{0,0,0,0,0,0,0,0}
	};
	for (r = 0; r < 8; r++) {
		for (c = 0; c < 8; c++){
			thechar = cc;
			val = m[r][c];
			if (val == 3) {
				thechar = ac;
			}
			else if (val == 2) {
				thechar = bc;
			}
			else if (val == 1) {
				thechar = dc;
			}
			else {thechar = cc; }
			cout<<thechar;
		}
		cout<<endl;
	}
	return 0;
}
