#include <iostream>
using namespace std;

int main (){
    int dia;

    cout <<"Ingrese numero de 1 al 7";
    cin >> dia;

    if (dia >=1 && dia <=5){
        //Si es un numero >=1 o <=5 mostrar este mensaje
        cout << "Día Laboral" <<endl;
        
    }else if (dia == 6 || dia == 7){
        // si el numero es == 6 o ==7 mostrar el siguiente mensaje
    cout << "Fin de semana" <<endl;

    }


    return 0;
    
    

}