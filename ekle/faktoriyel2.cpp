#include <iostream>
using namespace std;
int faktoriyel(int deger);
int main(){
	//1. Faktoriyel hesabýný fonksiyon kullanarak yazýnýz.
	int a;
	cout << "Sayi giriniz : ";
	cin >> a;
	cout << "Faktoriyel hesabinin sonucu : " << faktoriyel(a);
	
	
	return 0;
}
int faktoriyel(int deger){
	int sonuc=1;
	for(int i=1;i<=deger;i++){
		sonuc*=i;
	}
	return sonuc;
}
