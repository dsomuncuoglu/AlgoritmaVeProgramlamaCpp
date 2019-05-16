#include <iostream>
#include <fstream>
void DosyayaYaz();
void DosyaOku();
using namespace std;
int main(){
	
	DosyayaYaz();
    DosyaOku();

	return 0;
	
}
void DosyayaYaz(){
	ofstream dosyayaz("bilgi.txt",ios::app);
	int sayi;
	cout << "Bir sayi giriniz : ";
	cin >> sayi;
	dosyayaz << sayi << endl;
	dosyayaz.close(); 
}
void DosyaOku(){
	ifstream dosyaoku;
	dosyaoku.open("bilgi.txt",ios::in);
	string okunan;
	while(!dosyaoku.eof()){
		getline(dosyaoku,okunan);
		cout << okunan << endl;
	} 
	dosyaoku.close();
}
