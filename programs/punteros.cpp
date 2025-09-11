/*
    & - La dirección de memoria
    * - Lo que hay adentro de la dirección de memoria
*/
#include<iostream>

int main(){
    int n = 1, *p;

    p = &n;

    std::cout << p << "\n";
    std::cout << *p; 
    return 0;
}