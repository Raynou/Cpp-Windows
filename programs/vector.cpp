/* Ejericio: espacio dinámico. 
Guarda un número de datos indefinidos dentro de una estructura de datos lineal e imprímelos */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int num;
    bool wishContinue = true;
    while(wishContinue){

        cout << "Ingrese un número: " << endl;
        cin >> num;
        arr.push_back(num);
        char res = 0;
        cout << "Desea continuar? Y/N";
        cin >> res;
        if (res == 'N' || res == 'n'){
            wishContinue = false;
        }
        
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i);
    }
    
    return 0;
}