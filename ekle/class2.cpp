#include <iostream>
using namespace std;
class dikdortgen{
	public:
		double uzunluk,genislik,yukseklik;
		
		void setU(double u){
			uzunluk=u;
		}
		void setG(double g){
			genislik=g;
		}
		void setY(double y){
			yukseklik=y;
		}
		double getHacim(){
			return uzunluk*genislik*yukseklik;
		}
};




int main(){
	dikdortgen d1;
	dikdortgen d2;
	
	d1.uzunluk=10;
	d1.genislik=5;
	d1.yukseklik=12;
	
	d2.uzunluk=9;
	d2.genislik=7;
	d2.yukseklik=5;
	
	cout << "D1 Hacimi : "<< d1.getHacim() << endl;
	
	cout << "D2 Hacimi : " << d2.getHacim();
	
	
	
	return 0;
}
