#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
struct yapi{
	int sayi;
	char katar[10];
	
}k,*p;

int main(){
	p=&k;
	k.sayi=10;
	p->sayi=20;
	strcpy(p->katar,"selam");
	cout << k.sayi << endl;
	cout << p->sayi << endl;
	cout << p->katar << endl;
	cout << k.katar << endl;
	
	
	
	return 0;
}
