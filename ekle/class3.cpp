#include <iostream>
using namespace std;
class dikdortgen{
	private:
		double uzunluk,genislik,yukseklik;
	public:	
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
	
	d1.setU(8);
	d1.setG(7);
	d1.setY(6);
	
	d2.setU(10);
	d2.setG(9);
	d2.setY(8);
	
	cout << "D1 Hacimi : "<< d1.getHacim() << endl;
	
	cout << "D2 Hacimi : " << d2.getHacim();
	
	
	
	return 0;
}
