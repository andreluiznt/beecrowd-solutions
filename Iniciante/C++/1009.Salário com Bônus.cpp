#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    char nome[20];
    double salario_fixo, totalVendasPorMes;
    double salario_bonus, salario_total;

    cin >> nome;
    cin >> salario_fixo;
    cin >> totalVendasPorMes;

    salario_bonus = (totalVendasPorMes*15)/100;
    salario_total = salario_fixo+salario_bonus;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salario_total << endl;

    return 0;
}