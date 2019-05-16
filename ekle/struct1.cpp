#include <iostream>
using namespace std;
struct Personel{
	string ad,soyad;
	int kimlik;
	yaz(){
		cout << ad << " " << soyad << " " << kimlik;
	}
};
int main(){
	Personel p;
	p.ad="Deniz";
	p.soyad="Somuncuoglu";
	p.kimlik=105;
	// Yazma fonk
	p.yaz();
		
	
	
	
	return 0;
}
