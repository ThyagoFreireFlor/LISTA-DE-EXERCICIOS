#include <iostream>
 using namespace std;
 int main(int argc, char** argv)
 {
	 double milhas, km;
	 cout <<"Digite a quantidade de milhas maritimas";
	 cin >> milhas;
	 
	 km = milhas * 1.852; 
	 
	 cout << "Em quilometros: " << km;
	 
	 
	 return 0;
 }