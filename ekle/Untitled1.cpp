#include <iostream>
using namespace std;
int dizi1(int dizi[10]){
	int sonuc=0;
	for(int i=0;i<10;i++){
		sonuc+=dizi[i];
	}
	return sonuc/10;
}
int main(){
	//10 tane dizi girilen ve o dizilerin ortalamasýný programa yazan
	int dizic[10];
	cout << "10 tane dizi elemani girin=";
	for(int i=0;i<10;i++){
		cin >> dizi1(dizic[10]);
	}
	cout << dizi1(*dizic[10]);
	
	
	return 0;
}
