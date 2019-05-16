#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
	//Dýþardan girilen satýr ve sutun sayýsýna göre matrise 2 basamaklý sayýlarý rastgele atayan programý C++ kodlarýyla yazýnýz.
    srand(time(NULL));
    int m,n;
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
	
	return 0;
}
