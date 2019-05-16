#include <iostream>
using namespace std;

class Islem{
	public:
		int sayi1,sayi2;
};
class toplama:virtual public Islem{
	public:
		int toplam(int s1,int s2){
			return s1+s2;
		}
};
class cikarma:virtual public Islem{
	public:
		int cikar(int s1,int s2){
			return s1-s2;
		}
};
class Yaz:public toplama,public cikarma{
	public:
		void yazi(){
			cout << "Sayi1 :" << sayi1 << endl;
			cout << "Sayi2 :" << sayi2 << endl;
		}
};
int main(){
	Yaz y;
	y.sayi1=15;
	y.sayi2=10;
	y.yazi();
	cout << "Toplam :" << y.toplam(y.sayi1,y.sayi2) << endl;
	cout << "Cikar :" << y.cikar(y.sayi1,y.sayi2);	
	
	return 0;
}
