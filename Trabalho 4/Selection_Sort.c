#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    #define n 5
    int numeros[n];
    int i;
    srand (time(NULL));

    cout << "Numeros desordenados: " ;

    for(i=0; i<n; i++){
        numeros[i]=rand()%100;
    }

    cout << "|";
    for (i = 0; i < n; i++){
        cout << numeros[i] << "|";
    }

    int k, aux, j;
    for(k=1; k<n; k++){
        aux = numeros[k];
        j = k-1;
        while(j>=0 && numeros[j]>aux){
            numeros[j+1]=numeros[j];
            j=j-1;
        }
        numeros[j+1] = aux;
    }

    cout << "\n" ;
    cout << "numeros ordenados: " ;

    cout << "|";
    for (i = 0; i < n; i++){
        cout << numeros[i] << "|";
    }

    cout << "\n" ;
    return 0;
}
