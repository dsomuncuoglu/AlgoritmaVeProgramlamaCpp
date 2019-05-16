#include <iostream>
using namespace std;
int faktoriyel(int deger);
int main(){
	//Faktoriyel hesabi(rekürsif yapisi)
	int a;
	cout << "Sayi giriniz : ";
	cin >> a;
	cout << "Faktoriyel hesabi : " << faktoriyel(a);
	
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
