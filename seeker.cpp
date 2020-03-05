#include <iostream>

using namespace std;

int szukaj(int tab[], int seek){
	int len = sizeof(tab);
	
	if (len == 0) {
		return -1;
	}
	
	cout << "Len: " << len << endl;
	
	int left = -1; // orig: left = 0
	int right = len; // orig: right = len - 1
	
	while (left<right-1){ // orig: left < right
		int median = (left + right) / 2;
		if(tab[median] < seek) {
			left = median; // orig: right = median - 1
		} else {
			right = median; // orig: left = median
		}
	}
	
	cout << "tab[right]: " << tab[right] << endl;
	
	if (tab[right] == seek) {
		return right;
	}
	
	return -1;

}

int main(){
	
	// nieparzysta tablica
	int tab1 [9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int seek = 5; // result of func should be 4
	int seek_index = szukaj(tab1, seek);
	cout << seek_index << endl;
	seek = 4; // result of func should be 3
	seek_index = szukaj(tab1, seek);
	cout << seek_index << endl;
	seek = 3; // result of func should be 2
	seek_index = szukaj(tab1, seek);
	cout << seek_index << endl;
	seek = 1; // result of func should be 0
	seek_index = szukaj(tab1, seek);
	cout << seek_index << endl;
	seek = 9; // result of func should be 8
	seek_index = szukaj(tab1, seek);
	cout << seek_index << endl;
	
	// parzysta tablica
	int tab2 [4] = {1, 2, 3, 4};
	seek = 2; // result of func should be 1
	seek_index = szukaj(tab2, seek);
	cout << seek_index << endl;
	seek = 4; // result of func should be 3
	seek_index = szukaj(tab2, seek);
	cout << seek_index << endl;
	
	// poza tablica (lewo)
	seek = 0; // result of func should be -1
	seek_index = szukaj(tab2, seek);
	cout << seek_index << endl;
	
	// poza tablica (prawo)
	seek = 5; // result of func should be -1
	seek_index = szukaj(tab2, seek);
	cout << seek_index << endl;
	
	

}

// 4 modyfikacje
