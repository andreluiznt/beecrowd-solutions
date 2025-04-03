#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int numero_func, num_horas_trab;
    float salario_hora, salario_mensal;

    cin >> numero_func;
    cin >> num_horas_trab;
    cin >> salario_hora;

    salario_mensal = salario_hora*num_horas_trab;

    cout << "NUMBER = " << numero_func << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario_mensal << endl;

    return 0;
}