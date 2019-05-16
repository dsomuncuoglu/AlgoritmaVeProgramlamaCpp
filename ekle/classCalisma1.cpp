#include <iostream>
using namespace std;
class banka{
	private:
		string ad,soyad;
		int para;
	public:
//		banka(string a,string s,int p){
//			ad=a;
//			soyad=s;
//			para=p;
//		}
		~banka(){
			cout << "Yikici";
		}
		void setAd(){
			string a;
			cin >> a;
			ad=a;
		}
		void setSoyad(){
			string s;
			cin >> s;
			soyad=s;
		}
		void setPara(){
			int p;
			cin >> p;
			para=p;
		}
		string getAd(){
			return ad;
		}
		string getSoyad(){
			return soyad;
		}
		int getPara(){
			return para;
		}
};
class islem:public banka{
	public:
		int toplam(int a,int b){
			return a + b;
		}
		int cikar(int a,int b){
			return a - b;
		}
		operator+(banka b2){
			int toplam=this->getPara()+b2.getPara();
			return toplam;
		}
};
int main(){
	banka b[2];
	islem isl;
	for(int i=0;i<3;i++){
		cout << i+1 <<"-Ad girin :";
		b[i].setAd();
		cout << i+1 <<"-Soyad girin :";
		b[i].setSoyad();
		cout << i+1 <<"-Para giriniz :";
		b[i].setPara();
		cout << endl;
		
		
	}
	
	cout << "Adi :" << b[0].getAd() << endl << "Soyadi :" << b[0].getSoyad() << endl << "Para Miktari :" << isl.toplam(b[0].getPara(),b[1].getPara()) << endl << endl;
	cout << "Adi :" << b[1].getAd() << endl << "Soyadi :" << b[1].getSoyad() << endl << "Para Miktari :" << isl.cikar(b[1].getPara(),b[2].getPara()) << endl << endl;
	cout << "Adi :" << b[2].getAd() << endl << "Soyadi :" << b[2].getSoyad() << endl << "Para Miktari :" << isl.toplam(b[0].getPara(),b[2].getPara()) << endl << endl;
	
	cout << "Operator toplam :" << b[0].getPara()+b[1].getPara();
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
