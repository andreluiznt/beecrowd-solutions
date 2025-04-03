#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int item1, item2, quant1, quant2;
    float preco1, preco2, total;

    cin >> item1 >> quant1 >> preco1;
    cin >> item2 >> quant2 >> preco2;

    total = (quant1*preco1) + (quant2*preco2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}