#include <iostream>
using namespace std;

int main() {
    int peso;
    cout << "Ingrese el peso del paquete en kg: ";
    cin >> peso;

    if (peso < 5) {
        cout << "Tendra que pagar 5";
    } else if (peso <= 18) {
        cout << "Tendra que pagar 10";
    } else {
        cout << "Tendra que pagar 15";
    }
   
    return 0;

} 