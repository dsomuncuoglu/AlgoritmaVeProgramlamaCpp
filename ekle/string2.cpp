#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char str1[10]="Hello";
	char str2[10]="World";
	char str3[10];
	int len;
	
	// str1 i str3 e kopyalama
	strcpy(str3,str1);
	cout << "strcpy(str3,str1) : " << str3 << endl;
	
	// str1 ile str2 yi birlestirme
	strcat(str1,str2);
	cout << "strcat(str1,str2) : " << str1 << endl;
	
	//str1 in birlestirildikten sonra ki uzunluðu
	len=strlen(str1);
	cout << "strlen(str1) : " << len << endl;
	
	return 0;
}
