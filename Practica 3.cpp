/*Carmen Mayhualida Murguia Felipe 
  22030200059
  Practica 3 Arreglos
*/
#include <iostream>

int arr[0];
using namespace std;

int main() {
    int tam, i, auxiliar, mayor=0;
    double suma=0;
    cout<<"Ingresa el tamaño del arreglo: ";
    cin>> tam;
    for (i=0; i<tam;i++) {
        cout<<"Ingresa el valor de la posicion " <<(i+1)<<":";
        cin >> arr[i];
        if(arr[i]>mayor){
            mayor=arr[i];
        }
    }
    cout <<endl;
    cout<<"Arreglo normal";
    for (i=0; i<tam;i++) {
        cout<<endl<<"Elemento " <<(i+1)<<":"<<arr[i];
    }
    for (i=0; i<tam/2;i++) {
        auxiliar= arr[i];
        arr[i]= arr[tam-1-i];
        arr[tam-1-i]= auxiliar;
    }
    cout <<endl;
    cout <<endl;
    cout<<"Arreglo invertido";
    for (i=0; i<tam;i++) {
        cout<<endl<<"Elemento " <<(i+1)<<":"<<arr[i];
    }
    for (i = 0; i < tam; i++) {
        suma+=arr[i];
    }
    cout<<endl<<endl<<"La media es: "<<suma*1.0/tam<<endl;
    cout<<endl<<endl<<"El numero mayor de este arreglo es: "<<mayor;
    return 0;
}
