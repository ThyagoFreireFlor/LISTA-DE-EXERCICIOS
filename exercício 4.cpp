#include <iostream>
 using namespace std;
 int main(int argc, char** argv)
 {
	 double base, altura, area;
	 cout <<"Digite a base do triangulo";
	 cin >> base;
	 
	 cout<<"Digite a altura do triangulo";
	 cin >> altura;
	 
	 area = (base * altura) /2;
	 cout<<"A area do triangulo e:" << area;
	 return 0;
 }