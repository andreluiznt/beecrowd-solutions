#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int qtd=0;
    float cont = 0.0, num;

    for(int i = 0; i < 6; i++){
        cin >> num;
        if(num > 0){
            cont += num;
            qtd++;
        }
    }

    cout << qtd << " valores positivos" << endl;
    cout << setprecision(1) << fixed << (float)cont/qtd << endl;

    return 0;
}