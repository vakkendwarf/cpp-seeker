#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

// Kompilator wywala blad
// W momencie zwrocenia zmiennej tekst
// Nie wiem o co chodzi ale
// Gdyby Pan mogl to sprawdzic i mi wyslac powod na maila (vakkendwarf@gmail.com) z jakims wytlumaczeniem
// Bylbym wdzieczny :)

using namespace std;
	
string Skroc(string tekst, int limit, int kursor = 0){
	if (kursor == 0){kursor = limit;}
	if (tekst.length() <= limit){
		if (tekst.substr(tekst.length()-1, tekst.length()) == " "){
			tekst = tekst.substr(0, tekst.length()-1);
		}
		return tekst;
	}else{
		tekst = tekst.substr(0, limit);
		kursor=tekst.length()-1;
		Skroc(tekst, limit, kursor);
	}
	
}

int WinMain (){
	string tekst1 = "Abcdef Ghijk";
	tekst1 = Skroc(tekst1, 7);
	cout << "Tekst1: " << tekst1 << endl;
}


