#include <iostream>
using namespace std;

int main(void){
    int x, y;
    int n, divisao;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x >> y;
        divisao = x/y;
        cout << divisao;

        if(y == 0){
            cout << "divisao impossivel" << endl;
        }

    }

    return 0;
}