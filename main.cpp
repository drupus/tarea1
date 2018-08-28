#include <iostream>

using namespace std;

#define limite 5
void insertar(char datos[],int tiempo[],int l){
    for(int i = 0; i < (l); i++){
        cout << "inserte el tiempo en el proceso [" << datos[i] << "]: ";
        cin >> tiempo[i];
        cout <<("cls");
    }
}
void fifo(char datos[],int tiempo[], int l){
    int tiempoTotal = 0;
    float tiempoReturn = 0.0f;
    insertar(datos,tiempo, l);
    for(int j = 0;j < l; j++){
        tiempoTotal += tiempo[j];
        tiempoReturn += tiempoTotal;
        cout <<"\n""tiempo de retorno de["<<datos[j]<<"]: "<<tiempoTotal<<"\t";
    }
    tiempoReturn = tiempoReturn / l;
    cout<<"\nEl tiempo de las entradas es: "<<tiempoReturn;
}
int main(){
    cout<<"\t\t\tPrograma fifo"<<endl;
    cout<<"\t\t________________________________\n\n"<<endl;
    char datos[limite] = {'a','b','c','d','e'};
    int tiempo[limite];
    fifo(datos,tiempo,limite);
    cin.get();
    cin.get();
    return 0;
}
