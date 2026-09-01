#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<" por favor ingrese un valor nominal para organizarlo" << endl ;
    cin >>n;

    int denominaciones [10]= {50000,20000,10000,5000,2000,1000,500,200,100,50};
  int faltante = n;

    for (int i = 0; i < 10; i++){
      int cantidad = faltante / denominaciones[i];
        faltante = faltante % denominaciones[i];
      cout<< denominaciones[i] << ":" << cantidad << endl;

    }
    cout << " faltante: " << faltante << endl;
     return 0;
}