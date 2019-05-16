#include <iostream>
using namespace std;
//Kalitim
class Sekil{
	protected:
		int genislik,yukseklik;
	public:
		void setG(int g){
			genislik=g;
		}
		void setY(int y){
			yukseklik=y;
		}
};
class Dikdortgen : public Sekil{
	public:
		int getAlan(){
			return genislik*yukseklik;
		}
};
int main(){
	Dikdortgen d1;
	d1.setG(10);
	d1.setY(15);
	cout << "Alan=" << d1.getAlan();
	
	return 0;
}
