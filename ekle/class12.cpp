#include <iostream>
using namespace std;
// Sanallastirma (virtual)
class Sekil{
	protected:
		int genislik,yukseklik;
	public:
		Sekil(int a=0,int b=0){
			genislik=a;
			yukseklik=b;
		}
		virtual int alan(){
			cout << "Temel class alan : " << endl;
			return 0;
		}
};
class Dikdortgen:public Sekil{
	public:
		Dikdortgen(int a=0,int b=0):Sekil(a,b){
			
		}
		int alan(){
			cout << "Dikdortgenin alani :";
			return genislik*yukseklik;
		}
		
};
class Ucgen:public Sekil{
	public:
		Ucgen(int a=0,int b=0):Sekil(a,b){
		
		}
		int alan(){
			cout << "Ucgenin alani : ";
			return (genislik*yukseklik)/2;
		}
};
int main(){
	Sekil *Sekil;
	Dikdortgen d1(10,15);
	Ucgen u1(6,12);
	Sekil=&d1;
	cout << Sekil->alan() << endl;
	Sekil=&u1;
	cout << Sekil->alan() ;
	
	return 0;
}
