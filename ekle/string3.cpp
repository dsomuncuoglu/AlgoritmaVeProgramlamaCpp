#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1="Hello";
	string str2="World";
	string str3="";
	int len;
	
	//str1 i str3 e kopyalar
	str3=str1;
	cout << "str3 : " << str3 << endl ;
	
	//str1 ve str2 birlestirir
	str3=str1+str2;
	cout << "str1+str2 : " << str3 << endl;
	
	//Birlesimden sonra ki uzunulugu
	len=str3.size();
	cout << "str3.size() : " << len << endl;
	
	return 0;
}
