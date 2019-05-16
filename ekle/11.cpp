#include <iostream>
using namespace std;
int ebob(int sayi1,int sayi2){
	if(sayi2!=0){
		return ebob(sayi2,sayi1%sayi2);
	}
	else{
		return sayi1;
	}
}
int main(){
	int n1,n2;
	cout << "Birinci sayiyi giriniz=";
	cin >> n1;
	cout << "ikinci sayiyi giriniz=";
	cin >> n2;
	cout << "Ebob=" << ebob(n1,n2);
}
