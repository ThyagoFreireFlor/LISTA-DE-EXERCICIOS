#include <iostream>
#include <cmath>
 using namespace std;
 int main(int argc, char** argv)
 {
	 double	n1, n2, n3, n4, media;
	 
	 cout << "Digite 4 numeros";
	 cin >> n1 >> n2 >> n3 >> n4;
	 
	 media = pow(n1 * n2 * n3 * n4, 1.0/4);
	 
	 cout << "Media geometrica:" << media;
	 
	 return 0;
 }