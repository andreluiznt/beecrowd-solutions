#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    float nota1, nota2, nota3, nota4;
    float media, notaRecuperacao, mediaFinal;

    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if(media >= 7.0 ){
        cout << "Aluno aprovado." << endl;
    }else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }else if(media < 7.0 && media >= 5.0){
        cout << "Aluno em exame." << endl;
        cin >> notaRecuperacao;
        cout << "Nota do exame: " << fixed << setprecision(1) << notaRecuperacao << endl;
        mediaFinal = (media+notaRecuperacao)/2;
        if(mediaFinal >= 5){
            cout << "Aluno aprovado." << endl;
        }else{
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << fixed << setprecision(1) << mediaFinal << endl;
    }

    return 0;
}