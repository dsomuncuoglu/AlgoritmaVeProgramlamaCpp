#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void dosyayaz(char cumle1[50]){
	ofstream dosyayaz("bilgi.txt", ios::app);
	cout << "Bir cumle giriniz : ";
	gets(cumle1);
	dosyayaz<< cumle1 << endl;
	dosyayaz.close();
}
void dosyaoku(){
	ifstream dosyaoku();
	dosyaoku.open("bilgi.txt", ios::in);
	string okunan;
	while(!dosyaoku.eof()){
		getline(dosyaoku,okunan);
		cout << okunan << endl;
	}
	dosyaoku.close();
}
int main(){
	int sayac=0;
	char cumle[50];
	char harf;
	dosyayaz(cumle);
	dosyaoku();
	cout << "Aramak istediginiz harfi yazin : ";
	cin >> harf;
	for(int i=0;i<strlen(cumle);i++){
		if(cumle[i]==harf){
			sayac++;
		}
	}
	cout << "Girdiginiz cumle icinde " << harf << " den "<< sayac << " adet var.";
	
	return 0;
}
