#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
    double x1, y1;
    double x2, y2;
    double distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << fixed << setprecision(4) << distancia << endl;

    return 0;
}