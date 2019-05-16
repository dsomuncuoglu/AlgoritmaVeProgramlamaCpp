#include <iostream>
#include <fstream>
using namespace std;
int main(){
	fstream dosya;
	dosya.open("kayit.txt",ios::out);
	if(!dosya){
		cout << "Boyle bir dosya bulunamadi...";
		return 0;
	} 
	cout << "Dosya basarili bir sekilde olusturuldu." << endl;
	cout << "Dosya simdi kapatiliyor" << endl;
	dosya.close();
	
	
	return 0;
}
