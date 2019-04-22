// switch_2d.cpp -o switch_2d.o
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int r,c; // r = row and c = column
	string word ="drow";
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
			val = m[r][c];
			//switch
			switch (val) {
				case 1:
					word = "-|-";
					break;
				case 2:
					word = "//-\\";
					break;
				case 3:
					word = "$-$";
					break;
				case 4:
					word = "*&*";
					break;
				default:
					word = "#-#";
					break;
				}
			//end switch
			cout << word;
		}
		cout<<endl;
	}
	return 0;
}
