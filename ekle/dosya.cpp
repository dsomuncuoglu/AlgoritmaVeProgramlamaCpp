#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void dosyaoku(string dosyaAdi){

	ifstream dosyaoku;
	dosyaoku.open(dosyaAdi.c_str());
	string okunan;
	
	while(!dosyaoku.eof()){
		getline(dosyaoku,okunan);
		cout <<okunan << endl;
	}
	dosyaoku.close();
}
void dosyaYaz(int sayi,string dosyaAdi){
	ofstream dosyaYaz(dosyaAdi.c_str(), ios::app);
	dosyaYaz << sayi << endl;
	dosyaYaz.close();
	
}
int main(){
	int sayi;
	string dosyaAdi;

	cout<<"dosya adý giriniz:";
	getline(cin,dosyaAdi);

	cout << "Sayi giriniz : ";
	cin >> sayi;	
	dosyaAdi += ".txt";
	dosyaYaz(sayi,dosyaAdi.c_str());
	dosyaoku(dosyaAdi.c_str());
	
	
	return 0;
}
