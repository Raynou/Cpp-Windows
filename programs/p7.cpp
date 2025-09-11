#include<iostream>
using namespace std;
int main(){
    char columna;
    int renglon;

    cin >> columna >> renglon;

    cout << "Salida" << endl;
    if (renglon%2==0&&columna%2!=0){
        cout << "BLANCO";
    }else{
        cout << "NEGRO";
    }
    return 0;
}