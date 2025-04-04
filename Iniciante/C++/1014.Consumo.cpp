#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int distancia_percorrida;
    float combustivel_gasto, consumo_medio;

    cin >> distancia_percorrida;
    cin >> combustivel_gasto;

    consumo_medio = distancia_percorrida/combustivel_gasto;

    cout << fixed << setprecision(3) << consumo_medio << " km/l" << endl;

    return 0;
}