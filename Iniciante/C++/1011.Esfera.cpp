#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    double raio;
    double volume_esfera, pi = 3.14159;

    cin >> raio;

    volume_esfera = (4/3.0)*pi*(raio*raio*raio);

    cout << "VOLUME = " << fixed << setprecision(3) << volume_esfera << endl;

    return 0;
}