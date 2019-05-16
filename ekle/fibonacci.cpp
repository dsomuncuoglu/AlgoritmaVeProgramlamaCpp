#include <iostream>
using namespace std;
int fibonacci(int deger);
int main(){
	//Dýþardan girilen terim sayýsýna kadar fibonacci serisini ekrana yazdýran programý C++ kodlarýyla yazýnýz.
	int a;
	cout << "Kac terimli olsun (Fibonacci) sayisi :";
	cin >> a;
	cout << "Sonuc :"<<fibonacci(a);
	
	return 0;
}
int fibonacci(int deger){
	int bir=1,iki=1;
	int uc=0;
	for(int i=0;i<deger;i++){
		uc=bir+iki;
		cout << uc << endl;
		bir=iki;
		iki=uc;
	}
	return uc;
}
