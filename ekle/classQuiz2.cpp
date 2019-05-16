#include <iostream>
using namespace std;
class Islem{
	protected:
		int uzunluk,yukseklik;
		double genislik;
	public:
		Islem(int a=0,int b=0,double c=0){
			uzunluk=a;
			yukseklik=b;
			genislik=c;
		}
		
		virtual double alan(){
			cout << "Temel class alan : " << endl;
			return 0;
		}
		void sayiGoster(int a){
			cout << "Sayi1 : " << uzunluk << endl;
		}
		void sayiGoster(double c){
			cout << "Sayi3 : " << genislik << endl;
		}
		
};
class Dikdortgen:public Islem{
	public:
		Dikdortgen(int a=0,int b=0,double c=0):Islem(a,b,c){
			
		}
		double alan(){
			cout << "Dikdortgenin alani : ";
			return uzunluk*yukseklik*genislik;
		}
};
class Ucgen:public Islem{
	public:
		Ucgen(int a=0,int b=0,double c=0):Islem(a,b,c){
			
		}
		double alan(){
			cout << "Ucgenin alani : ";
			return (uzunluk*yukseklik*genislik)/2;
		}
		
};
int main(){
	int a;
	double c;
	Islem *I;
	Dikdortgen d1(10,15,3);
	Ucgen u1(12,13,5.76923);
	d1.sayiGoster(a);
	u1.sayiGoster(c);
	I=&d1;
	cout << I->alan() << endl;
	I=&u1;
	cout << I->alan() << endl;
	
	
	return 0;
}
