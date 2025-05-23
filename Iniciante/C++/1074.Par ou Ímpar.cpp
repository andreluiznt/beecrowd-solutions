#include <iostream>
using namespace std;

int main(void){
    int n, valores;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> valores;

        if(valores == 0){
            cout << "NULL" << endl;
        }

        if(valores % 2 == 0){
            if(valores > 0){
                cout << "EVEN POSITIVE" << endl;
            }else if(valores < 0){
                cout << "EVEN NEGATIVE" << endl;
            }
        }else{
            if(valores > 0){
                cout << "ODD POSITIVE" << endl;
            }else if(valores < 0){
                cout << "ODD NEGATIVE" << endl;
            }
        }
    }

    return 0;
}