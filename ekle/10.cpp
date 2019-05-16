#include <iostream>
using namespace std;
int ekok(int sayi1,int sayi2){
	if(sayi2==0){
		return sayi1;
	}
	else{
		return ekok(sayi2,sayi1%sayi2);
	}
}
int main(){
	int n1,n2;
	cout <<"birinci sayiyi girin=";
	cin >> n1;
	cout << "ikinci sayiyi girin=";
	cin >> n2;
	cout << "Ekok:" <<(n1*n2)/ekok(n1,n2);
	
}
