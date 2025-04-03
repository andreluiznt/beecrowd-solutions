#include <iostream>

using namespace std;

int main(void){
    int A, B, C, D, diferenca;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    diferenca = (A*B - C*D);

    cout << "DIFERENCA = " << diferenca << endl;

    return 0;
}