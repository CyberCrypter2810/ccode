// gbpm_8x8_array.cpp
#include <iostream>
#include <stdio.h>
int gbpm();

int main() {
	gbpm(); // calls the gbpm function
	return 0;
}

int gbpm() {
	int r,c; // r = row and c = column
	int red, green, blue;
	int val = 0;
	int m[8][8] = {
		{8,8,8,1,1,8,8,8},
		{7,7,1,1,1,1,7,7},
		{6,1,0,1,1,0,1,6},
		{7,1,1,1,1,1,1,7},
		{7,1,0,1,1,0,1,7},
		{2,1,1,0,0,1,1,2},
		{2,2,1,1,1,1,2,2},
		{5,5,5,1,1,5,5,5}
	};
	
	red = 0; green = 0; blue = 0;
	for (r = 0; r < 8; r++) {
		for (c = 0; c < 8; c++) {
			val = m[r][c];
			switch (val) {
				case 0:
				red = 0; green = 0; blue = 0; // black
				break;
				case 1:
				red = 255; green = 255; blue = 0; // yellow
				break;
				case 2:
				red = 0; green = 0; blue = 255; // blue
				break;
				case 3:
				red = 255; green = 255; blue = 255; // white
				break;
				default:
				red = 0; green = 0; blue = 255; // blue
				break;
			} // end select and output the colors
			std::cout << "["<<red<<" "<<green<<" "<<blue<< "]";
		}//end c
		std::cout<<"\n";
	}//end r
	return 0;
} //end gbpm() function
