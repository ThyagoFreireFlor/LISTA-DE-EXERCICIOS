#include <iostream>
#include <cmath>
 using namespace std;
 int main(int argc, char** argv)
 {
	 double diametro, area;

    cout << "Digite o diametro: ";
    cin >> diametro;
    
    area = M_PI * (diametro * diametro) / 4;

    cout << "Area do circulo: " << area << endl;


	 return 0;
 }