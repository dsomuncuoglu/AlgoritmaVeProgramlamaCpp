#include <iostream>
int fibonacci(int n);
using namespace std;
int main(){
	int terim,sayi=0;
	cout << "Terim sayisi giriniz=";
	cin >> terim;
	cout << "Fibonacci Serisi "<<endl;
	for(int i=1;i<=terim;i++){
		cout <<i<<".terim    "<<fibonacci(sayi) << endl;
		sayi++;
	}
	return 0;
}
int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
