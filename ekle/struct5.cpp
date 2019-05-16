#include <iostream>
#include <string.h>

using namespace std;
struct yapi{
	int sayi1;
	double sayi2;
	char katar[6];
}p;
int main(){
	p.sayi1=20;
	cout << p.sayi1 << endl;
	p.sayi2=2;
	cout << p.sayi2 << endl;
	strcpy(p.katar,"Selam");
	cout << p.katar << endl;	
	
	
	return 0;
}
