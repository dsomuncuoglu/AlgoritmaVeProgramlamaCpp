#include <iostream>
using namespace std;
class Prizma{
	private:
		int uzunluk,genislik,yukseklik;
	public:
		void setU(int u){
			uzunluk=u;
		}
		void setG(int g){
			genislik=g;
		}
		void setY(int y){
			yukseklik=y;
		}
		int getHacim(){
			return uzunluk*genislik*yukseklik;
		}
		Prizma operator+(const Prizma& b){
			Prizma p1;
			p1.uzunluk=this->uzunluk + b.uzunluk;
			p1.genislik=this->genislik + b.genislik;
			p1.yukseklik=this->yukseklik + b.yukseklik;
			return p1;
		}
		bool operator<(Prizma b){
			
			if(this->getHacim() < b.getHacim()){
				cout << "P1 P2 den kucuktur";
				return true;
			}
		}
		bool operator>(Prizma& b){
			if(this->getHacim() > b.getHacim()){
				cout << "P1 P2 den buyuktur";
				return true;
			}
		}
		bool operator==(Prizma& b){
			if(this->getHacim() == b.getHacim()){
				cout << "P1 P2 ye esittir";
				return true;
			}
		}
};






int main(){
	Prizma p1;
	Prizma p2;
	Prizma p3;
	
	p1.setU(1);
	p1.setG(2);
	p1.setY(3);
	
	p2.setU(1);
	p2.setG(5);
	p2.setY(1);
	
	p3=p1+p2;
		
	cout << "Prizma 1 in Hacmi = " << p1.getHacim() << endl;
	cout << "Prizma 2 in Hacmi = " << p2.getHacim() << endl;
	cout << "Prizma 3 in Hacmi = " << p3.getHacim() << endl;
	if(p1>p2){
	}
	else if(p1<p2){
	}
	else if(p1==p2){
	}
	
	
	return 0;
}
