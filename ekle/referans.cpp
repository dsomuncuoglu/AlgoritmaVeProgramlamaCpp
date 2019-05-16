#include <iostream>
#include <fstream>
using namespace std;
void dosyaoku(){
	ifstream dosyaoku;
	dosyaoku.open("bilgi.txt",ios::in);
	string okunan;
	int iki=0,uc=0;
	while(!dosyaoku.eof()){
		getline(dosyaoku,okunan);
		if(okunan.size()==2){
			iki++;
		}
		else if(okunan.size()==3){
			uc++;
		}
		
		cout << okunan << endl;
	}
	
	cout <<"iki basamakli :" <<iki<< " tane sayi vardir" << endl;
	cout <<"uc basamakli :" <<uc<< " tane sayi vardir" << endl; 
	dosyaoku.close();
}
void dosyayaz(int a){
	ofstream dosyayaz("bilgi.txt",ios::app);
	cout <<"iki veya uc basamakli sayi giriniz.";
	cin >> a;
	dosyayaz<< a <<endl;
	dosyayaz.close();
}

int main(){
	// Referans ile fonk cagirmak
	int sayi;
	char tekrar;
	do{
	dosyayaz(sayi);
	dosyaoku();
	cout <<"Program devam etsin mi[e]/[h]";
	cin >>tekrar;	
	}while(tekrar=='e');
	
	
	return 0;
}
