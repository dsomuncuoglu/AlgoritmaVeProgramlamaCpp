#include <iostream>
int faktoriyel(int deger);
using namespace std;
int main(){
	int sayi,sonuc;
	cout << "Kaca kadar faktoriyel olsun=";
	cin >> sayi;
	sonuc=faktoriyel(sayi);
	cout << "Sonuc=" << sonuc;
	
	return 0;
}
int faktoriyel(int deger){
	if(deger==1){
		return 1;
	}
	else{
		return deger*faktoriyel(deger-1);
	}
}
