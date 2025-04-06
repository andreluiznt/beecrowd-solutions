#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int cod, quantidade;
    float valor;

    cin >> cod >> quantidade;

    if(cod == 1){
        valor = 4.00 * quantidade;
    }else if(cod == 2){
        valor = 4.50 * quantidade;
    }else if(cod == 3){
        valor = 5.00 * quantidade;
    }else if(cod == 4){
        valor = 2.00 * quantidade;
    }else if(cod == 5){
        valor = 1.50 * quantidade;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << valor << endl;


    return 0;
}