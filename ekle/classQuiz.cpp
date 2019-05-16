#include <iostream>
using namespace std;
class toplama{
	public:
	double topla(int a,double b){
		return a+b;
	}
};
class cikarma{
	public:
	double cikar(int a,double b){
		return a-b;
	}
};
class Islem: public toplama, public cikarma{
	private:
		int s1;
		double s2;
	public:
		int getS1(){
			return s1;
		}
		double getS2(){
			return s2;
		}
		void sayiGir(int a){
			s1=a;
		}
		void sayiGir(double b){
			s2=b;
		}
};
int main(){
	Islem I;
	int s1;
	double s2;
	cout << "Birinci sayiyi girin =";
	cin >> s1;
	I.sayiGir(s1);
	cout << "Ikinci sayiyi girin =";
	cin >> s2;
	I.sayiGir(s2);
	
	cout <<"Toplama :"<< I.topla(I.getS1(),I.getS2()) << endl;
	cout <<"Cikarma :"<< I.cikar(I.getS1(),I.getS2());
	
	
	
	
	
	
	return 0;
}
