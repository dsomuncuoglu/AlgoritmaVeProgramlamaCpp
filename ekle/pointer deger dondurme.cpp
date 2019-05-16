#include <iostream>
#include <fstream>
using namespace std;
void dosyaoku();
void dosyayaz();
int *dizigonder(int *a){
	for(int i=0;i<5;i++){
	    cin >> a;
	    static int dizi[i]=a;
	}
	
	return dizi;
}
int main(){
	int *pdizi;
	pdizi=dizigonder();
	for(int i=0;i<10;i++){
		cout << pdizi[i] << endl;
	}
	
	
	return 0;
}
void dosyayaz(){
	ofstream dosyayaz("bilgi.txt",ios::out);
	int sayi;
	cout << "Bir sayi giriniz : ";
	cin >> sayi;
	dosyayaz<<sayi<<endl;
	dosyayaz.close();
}
void dosyaoku(){
	ifstream dosyaoku;
	dosyaoku.open("bilgi.txt",ios::in);
	string okunan;
	while(!dosyaoku.eof()){
         getline(dosyaoku,okunan);
		 cout << okunan << endl;		
    }
    dosyaoku.close();
}                      
