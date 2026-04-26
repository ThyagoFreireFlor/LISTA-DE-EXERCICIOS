#include <iostream>
 using namespace std;
 int main(int argc, char** argv)
 {
	 double celsius, fahren;
	 cout << "Digite sua temperatura em celsius";
	 cin >> celsius;
	 
	 fahren = (9.0/5) * celsius + 32;
	 
	 cout <<"Sua temperatura em fahrenheit:" << fahren;
	 return 0;
 }