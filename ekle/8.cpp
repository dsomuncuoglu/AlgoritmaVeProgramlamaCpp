#include <iostream>
int fibonacci(int deger);
using namespace std;
int main(){
	int terim;
	cout <<"Terim sayisini giriniz=";
	cin >> terim;
	cout << "Sonuc="<< fibonacci(terim);
	return 0;
}
int fibonacci(int deger){
	if(deger<=1){
		return deger;
	}
	else{
		return fibonacci(deger-1)+fibonacci(deger-2);
	}
}
