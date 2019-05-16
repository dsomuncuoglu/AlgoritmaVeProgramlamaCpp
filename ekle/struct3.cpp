#include <iostream>
using namespace std;
struct personel{
	string ad,soyad;
	int TC;
	void yapiyaz(){
		cout << "Merhaba" << endl;
	}
}p={"ahmet","mehmet",1234};
void yaz(struct personel p1){
	cout << p1.ad << endl;
	cout << p1.soyad << endl;
	cout << p1.TC << endl;
}
int main(){
	cout << p.ad << endl;
	cout << p.soyad << endl;
	cout << p.TC << endl;
    p.yapiyaz();
    
	p.ad="Deniz";
	p.soyad="Somuncuoglu";
	p.TC=123123;
	yaz(p);
	
	return 0;
}
