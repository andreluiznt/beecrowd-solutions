#include <iostream>

using namespace std;

int main(void){
    int v[3];
    int v2[3];
    int menor_ind=0, maior_ind=0, aux=0, posicao;
    bool troca;

    for(int i=0; i<3; i++){
        cin >> v[i];
        v2[i] = v[i]; // o v2[] vai receber os valores do v[i] e armazenar para ser usado como uma cópia mais tarde.
    }


    // iteração que vai ordernar os números em ordem crescente.
    for(int i=0; i<2; i++){
        menor_ind = v[i];
        posicao = i;
        troca = false;

        for(int j=i+1; j<3; j++){
            if(v[j] < menor_ind){
                menor_ind = v[j];
                posicao = j;
                troca = true;
            }
        }

        if(troca){
        aux = v[i];
        v[i] = menor_ind;
        v[posicao] = aux;
        }
    }

    for(int i=0; i<3; i++){
        cout << v[i] << endl;
    }

    cout << "\n";

    for(int i=0; i<3; i++){
        cout << v2[i] << endl; // usando v2[] que foi criado no ínicio.
    }


    return 0;
}