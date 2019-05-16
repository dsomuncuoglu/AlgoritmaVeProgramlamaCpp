#include <iostream>
#include <string>
using namespace std;
int main(){
	string str="Deniz Somuncuoglu Duzce Universitesi";
	
	string str2=str.substr(3,5); // iz So yazar
	
	size_t pos=str.find("Duzce"); //Duzce kelimesinin pozisyonunu verir
	
	string str3=str.substr(pos); // Aranan kelimeyi ve sonrasini yazar
	
	cout << str2 << " " << 	str3 << endl;     
	
	
	
	return 0;
}
