#include <iostream>
#include <iomanip>
#include <cmath>

float Delta(double A, double B, double C){

    return (B*B) - 4 * A * C;

};

using namespace std;

int main(void){
    double A, B, C;
    double delta;
    double R1, R2;

    cin >> A >> B >> C;
    delta = Delta(A, B, C);
    
    if(A == 0 || delta < 0){
        cout << "Impossivel calcular" << endl;
    }else{
        R1 = (-B + sqrt(delta)) / (2*A);
        R2 = (-B - sqrt(delta)) / (2*A);
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }

    return 0;
}