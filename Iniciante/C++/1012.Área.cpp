#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
    double A, B, C;
    double triangulo_retangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;

    cin >> A >> B >> C;

    triangulo_retangulo = (A*C)/2.0;
    circulo = pi * pow(C, 2);
    trapezio = ((A+B)*C)/2.0;
    quadrado = B*B;
    retangulo = A*B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo_retangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;

    return 0;
}