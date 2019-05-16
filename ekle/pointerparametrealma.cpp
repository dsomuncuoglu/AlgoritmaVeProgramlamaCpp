#include <iostream>
using namespace std;
double ortalama(int *pdizi,int boyut);
int main(){
	int dizi[]={100,20,300,145,50};
	double ort;
	ort=ortalama(dizi,5);
	cout << "Ortalama : " << ort;
	
	
	
	return 0;
}
double ortalama(int *pdizi,int boyut){
	int i,toplam=0;
	double ort;
	for(i=0;i<boyut;i++){
		toplam+=pdizi[i];
	}
	ort=double(toplam)/boyut;
	return ort;
}
