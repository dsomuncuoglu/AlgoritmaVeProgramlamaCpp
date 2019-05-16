#include <iostream>
using namespace std;
int main(){
	int deger,sayac1=0,sayac2=0,sayac3=0;
	int dizi[3];
	for(int i=100;i<999;i++){
		sayac2=0;
		deger=i;
		for(int j=0;j<3;j++){
			dizi[j]=deger%10;
			deger/=10;
		}
		for(int j=0;j<3;j++){
			sayac1=0;
			for(int k=0;k<3;k++){
				if(dizi[j]==dizi[k]){
					sayac1++;
				}
				if(sayac1==2){
					sayac2++;
				}
				if(sayac2==3){
					sayac3++;
				}
			}
		}
	}
	cout <<"Sonuc :"<< sayac3;
	
	
	
	return 0;
}
