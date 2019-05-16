#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int satir,sutun,sayac=0;
	cout << "Kac satir olsun=";
	cin >> satir;
	cout << "Kac sutun olsun=";
	cin >> sutun;
	int matris[satir][sutun];
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			matris[i][j]=rand()%30+10;
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	for(int k=10;k<40;k++){
		for(int i=0;i<satir;i++){
			for(int j=0;j<sutun;j++){
				if(matris[i][j]==k){
					sayac++;
				}
			}
		}
		if(sayac >0 ){
			cout <<k << ":" << sayac << endl;
		}
		
		sayac=0;
	}
	
	
	return 0;

}
