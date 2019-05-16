#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void dosyaYaz(string b){
	ofstream dosyayaz("bilgi.txt",ios::app);
	dosyayaz<<b;
	dosyayaz.close();
}
void dosyaoku(){
	ifstream dosyaoku;
	dosyaoku.open("bilgi.txt",ios::in);
	string okunan;
	while(!dosyaoku.eof()){
		getline(dosyaoku,okunan);
		cout <<okunan<<endl;
	}
	dosyaoku.close();
}

int main(){
	ofstream dosyayaz("bilgi.txt",ios::out);
	string a;
    cout <<"Bir kelime giriniz : ";
    getline(cin,a);
    string yakala="qwertyuýopðüasdfghjklþizxcvbnmöç";
    for(int i=0;i<=a.size();i++){
    	for(int j=0;j<yakala.size();j++){
    		
		if(a[i]==yakala[j]){
			cout << a[i];
			dosyayaz<<a[i];
		}
	}
}


dosyaoku();
	
dosyayaz.close();	
	
	return 0;
}
