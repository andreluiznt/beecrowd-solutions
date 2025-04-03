#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
    double area, raio;
    double pi = 3.14159;

    cin >> raio;

    area = pi * pow(raio, 2);


    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}