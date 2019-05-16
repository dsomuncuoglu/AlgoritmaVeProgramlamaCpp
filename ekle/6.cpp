#include <iostream>
int faktoriyel(int deger);
using namespace std;
int main(){
	int sayi,sonuc;
	cout << "Kaca kadar faktoriyel bulsun=";
	cin >> sayi;
	sonuc=faktoriyel(sayi);
	cout << "Sonuc : " << sonuc;
	
	
	return 0;
}
int faktoriyel(int deger){
	int sonuc=1;
	for(int i=1;i<=deger;i++){
		sonuc*=i;
	}
	return sonuc;
}
