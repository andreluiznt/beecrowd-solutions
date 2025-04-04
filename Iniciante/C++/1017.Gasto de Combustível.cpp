#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int tempoHoras, velocidadeKm;
    float combustivel_gasto;

    cin >> tempoHoras;
    cin >> velocidadeKm;

    combustivel_gasto = (tempoHoras*velocidadeKm)/12.0;

    cout << fixed << setprecision(3) << combustivel_gasto << endl;

    return 0;
}