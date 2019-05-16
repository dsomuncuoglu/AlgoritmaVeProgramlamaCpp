#include <iostream>
using namespace std;
void dikdortgenciz(int a,int b);
int main(){
	int k1,k2;
	cout << "Dikdortgenin birinci kenari ne olsun?" << endl;
	cin >> k1;
	cout << "Dikdortgenin ikinci kenari ne olsun?" << endl;
	cin >>k2;
    dikdortgenciz(k1,k2);	
	
	return 0;
}
void dikdortgenciz(int a,int b){
	for(int i=1;i<=a;i++){
		cout <<"*\t";
	}
	cout << endl;
	for(int i=1;i<=b;i++){
		cout <<"*";
		for(int i=2;i<=a;i++){
			cout <<"\t";
		}
		cout << "*" << endl;
	}
	for(int i=1;i<=a;i++){
		cout << "*\t";
	}
	
}
