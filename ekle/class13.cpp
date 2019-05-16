#include <iostream>
using namespace std;
// Toplama-Cikarma
class toplama{
	public:
		int topla(int s1,int s2){
			return s1+s2;
		}
};
class cikarma{
	public:
		int cikar(int s1,int s2){
			return s1-s2;
		}
};
class islem:public toplama,public cikarma{
	public:
	void yaz(int sayi1,int sayi2){
		cout << "Sayi1 :" << sayi1 << endl;
		cout << "Sayi2 :" << sayi2 << endl;
	}
};
int main(){
	islem i1;
	int s1=10,s2=15;
	i1.yaz(s1,s2);

	cout << "Toplama : " << i1.topla(s1,s2) << endl;
	cout << "Cikarma :" << i1.cikar(s1,s2);
	
	
	return 0;
}
