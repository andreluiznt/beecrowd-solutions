#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
    int a, b, c, maiorAB, maiorAC;

    cin >> a >> b >> c;

    maiorAB = (a+b+abs(a-b))/2;
    maiorAC = (maiorAB+c+abs(maiorAB-c))/2;

    cout << maiorAC << " eh o maior" << endl;


    return 0;
}