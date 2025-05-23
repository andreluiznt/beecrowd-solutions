#include <iostream>
using namespace std;

int main(void){
    float A, B, C;

    cin >> A >> B >> C;

    if(A < B){
        swap(A, B);
    }
    if(B < C){
        swap(B, C);
        if(B > A){
            swap(A, B);
        }
    }

    if(A >= B + C){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if(A*A == B*B + C*C){
            cout << "TRIANGULO RETANGULO" << endl;
        } else if(A*A > B*B + C*C){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if(A == B && B == C){
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if(A == B || A == C || B == C){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
