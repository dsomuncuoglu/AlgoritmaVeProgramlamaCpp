#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
	//4. Sorudaki matriste her deðerden kaçar tane kullanýldýðýný bulan programý C++ kodlarýyla yazýnýz.
    srand(time(NULL));
    int m,n,sayac=0;
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
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(matris[i][j]==k){
					sayac++;
				}
			}
		}
		if(sayac==!0){
			cout << k << " sayisi" << sayac << " adet var" << endl;
		}
		
	}
	
	return 0;
}
