#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    float A, B, C, area, perimetro;

    cin >> A >> B >> C;

    if((A+B) > C && (A+C) > B && (B+C) > A){
        perimetro = A+B+C;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }else{
        area = ((A+B)*C)/2;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }

    return 0;
}