#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
	//10 elemanlý diziye 50-100 aralýðýndaki rastgele sayý atayarak, bu sayýlarýn asal olup olmadýklarýný ekrana yazdýran program kodlarýný C++ ile yazýnýz.
	srand(time(NULL));
	int dizi[10],sayac=0;
	for(int i=0;i<10;i++){
		sayac=0;
		dizi[i]=rand()%50+50;
		for(int j=2;j<dizi[i];j++){
			if(dizi[i]%j==0){
				sayac++;
			}
			}
			if(sayac==0){
				cout << dizi[i] << " Asaldir" << endl;
			}
			else{
				cout << dizi[i] << " Asal degil" << endl;
			}
		
	}
	
	
	return 0;
}
