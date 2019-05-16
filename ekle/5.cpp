#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char str[20];
	int sayac=0;
	cout << "Bir string girin=";
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='m'){
			sayac++;
    	}
	}        
	cout <<"'m' karakter sayisi :" << sayac;
	
	return 0;
}
