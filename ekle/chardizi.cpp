#include <iostream>
using namespace std;
int main(){
	char dizi[7]={'S','e','l','a','m','!','\0'};
	cout << "Dizi elemanlari" << endl;
	for(int i=0;i<7;i++){
		cout << "dizi["<<i<<"]:" << dizi[i] << endl;
	}
	cout << "Butun dizi (1.yontem) : ";
	for(int i=0;i<7;i++){
		cout << dizi[i];
	}
	cout <<"\nButun dizi (2.yontem) : ";
	cout << dizi << endl;
	return 0;
}
