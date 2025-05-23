#include <iostream>
using namespace std;

int main(void){
    string animal1;
    string animal2;
    string animal3;

    cin >> animal1;
    cin >> animal2;
    cin >> animal3;

    if(animal1 == "vertebrado"){
        if(animal2 == "ave"){
            if(animal3 == "carnivoro"){
                cout << "aguia" << endl;
            }else if(animal3 == "onivoro"){
                cout << "pomba" << endl;
            } 
        }else if(animal2 == "mamifero"){
            if(animal3 == "onivoro"){
                cout << "homem" << endl;
            }else if(animal3 == "herbivoro"){
                cout << "vaca" << endl;
            }
        }
    }

    if(animal1 == "invertebrado"){
        if(animal2 == "inseto"){
            if(animal3 == "hematofago"){
                cout << "pulga" << endl;
            }else if(animal3 == "herbivoro"){
                cout << "lagarta" << endl;
            }
        }else if(animal2 == "anelideo"){
            if(animal3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }else if(animal3 == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }


    return 0;
}