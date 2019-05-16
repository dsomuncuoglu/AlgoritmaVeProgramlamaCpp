#include <iostream>
using namespace std;
class Depo{
	private:
		int en,boy,yukseklik;
	public:
		Depo(int a=0,int b=0,int h=0){
			en=a;
			boy=b;
			yukseklik=h;
		}
		int hacim;
		void setEn(int a){
			en=a;
		}
		void setBoy(int b){
			boy=b;
		}
		void setYuksek(int h){
			yukseklik=h;
		}
		int getEn(int a){
			return a;
		}
		int getBoy(int b){
			return b;
		}
		int getYuksek(int h){
			return h;
		}
		int getHacim(){
			return en*boy*yukseklik;
		}
		bool operator<(Depo d3){
			if(getHacim()<d3.getHacim()){
				return true;
		}
			else{
				return false;
		}
	}
		bool operator>(Depo d3){
			if(getHacim()>d3.getHacim()){
				return true;
		}
			else{
				return false;
		}
	}
		bool operator==(Depo d3){
			if(getHacim()==d3.getHacim()){
				return true;
		}
			else{
				return false;
		}                            			
	}
};



int main(){
	//Yapici Fonksiyon
	
	Depo D1(5,6,1),D2(1,2,3);
	
	// setFonksiyonlari

/*	D1.setEn(8);
	D1.setBoy(10);
	D1.setYuksek(6);
	
	D2.setEn(8);
	D2.setBoy(6);
	D2.setYuksek(10);
*/	
	cout << "D1 in Hacmi :" << D1.getHacim() << endl;
	cout << "D2 nin Hacmi :" << D2.getHacim() << endl;
	if(D1>D2){
		cout << "D1 D2 den buyuktur."<< endl;
	}
	else if(D1<D2){
		cout << "D1 D2 den kucuktur." << endl;
	}
	else{
		cout << "D1 D2 ye esittir." << endl;
	}
	
	
	
	
	
	
	return 0;
}
