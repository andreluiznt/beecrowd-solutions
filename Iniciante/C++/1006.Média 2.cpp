#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    double A, B, C, media;

    cin >> A;
    cin >> B;
    cin >> C;

    media = (A*2+B*3+C*5)/10.0;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;

    return 0;
}