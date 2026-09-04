#include <iostream>

using namespace std;

int main() {
    char caracter1 [100];
    char caracter2 [100];

    cout<<"Ingrese la 1 cadena de caracteres " << endl;
        cin >> caracter1;

    cout <<"ingrese la 2 cadena de caracteres " << endl;
    cin >> caracter2;

    bool soniguales = true;
    int i= 0 ;
    while (caracter1[i] != '\0' || caracter2[i] != '\0'){
        if (caracter1[i]!=caracter2[i]){
            soniguales=false;
            break;
        }
        i++;
    }

     if (soniguales){
        cout << "verdadero" << endl;
    }else {
        cout <<"falso"<< endl;
    }
    return 0;

}
