#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
	// 4. Sorudaki matriste kaç tane tek, kaç tane çift sayý olduðunu bularak ekrana yazdýran programý C++ kodlarýyla yazýnýz.

    srand(time(NULL));
    int m,n,sayac=0,sayac1=0,sayac2=0;
    cout << "Kac satirli olsun :";
    cin >> m;
    cout << "Kac sutunlu olsun :";
    cin >> n;
    int matris[m][n];
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		matris[i][j]=rand()%99+1;
    		cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	for(int k=1;k<99;k++){
		sayac=0;
		sayac1=0;
		sayac2=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(matris[i][j]==k){
					sayac++;
					if(matris[i][j]%2==0){
						sayac1++;
					}
					else
					sayac2++;
				}
			}
		}
		if(sayac==!0){
			cout << k << " sayisi " << sayac << " adet var" << " --------" << " Cift :" << sayac1 << " Tek :" << sayac2 << endl;
		}
		
	}
	
	return 0;
}
