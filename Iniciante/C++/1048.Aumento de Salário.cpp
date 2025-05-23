#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    float salario, novoSalario, bonus;

    cin >> salario;

    if(salario >= 0 && salario <= 400){
        novoSalario = ((salario*15)/100)+salario;
        bonus = (salario*15)/100;
        cout << "Novo salario: " << setprecision(2) << fixed << novoSalario << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << bonus << endl;
        cout << "Em percentual: 15 %" << endl;
    }else if(salario > 400 && salario <= 800){
        novoSalario = ((salario*12)/100)+salario;
        bonus = (salario*12)/100;
        cout << "Novo salario: " << setprecision(2) << fixed << novoSalario << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << bonus << endl;
        cout << "Em percentual: 12 %" << endl;
    }else if(salario > 800 && salario <= 1200){
        novoSalario = ((salario*10)/100)+salario;
        bonus = (salario*10)/100;
        cout << "Novo salario: " << setprecision(2) << fixed << novoSalario << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << bonus << endl;
        cout << "Em percentual: 10 %" << endl;
    }else if(salario > 1200 && salario <= 2000){
        novoSalario = ((salario*7)/100)+salario;
        bonus = (salario*7)/100;
        cout << "Novo salario: " << setprecision(2) << fixed << novoSalario << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << bonus << endl;
        cout << "Em percentual: 7 %" << endl;
    }else if(salario > 2000){
        novoSalario = ((salario*4)/100)+salario;
        bonus = (salario*4)/100;
        cout << "Novo salario: " << setprecision(2) << fixed << novoSalario << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << bonus << endl;
        cout << "Em percentual: 4 %" << endl;
    }


    return 0;
}