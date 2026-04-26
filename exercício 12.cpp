#include <iostream>
using namespace std;

int main() {
    double p1, p2, p3, p4, p5;
    double total, pago, troco;

    cout << "Digite o valor do produto 1:";
    cin >> p1;

    cout << "Digite o valor do produto 2:";
    cin >> p2;

    cout << "Digite o valor do produto 3:";
    cin >> p3;

    cout << "Digite o valor do produto 4:";
    cin >> p4;

    cout << "Digite o valor do produto 5:";
    cin >> p5;

    total = p1 + p2 + p3 + p4 + p5;

    cout << "Digite o valor pago:";
    cin >> pago;

    troco = pago - total;

    cout << "Total da compra: " << total;
    cout << "Troco: " << troco;

    return 0;
}