#include <iostream>
using namespace std;

//your code goes here
template<class T>
T myMax(T a, T b){
    return a>b ? a:b;
}

int main () {
    double x=4.5, y=3.1;
    int a=9, b=7;
    cout << myMax(x, y) << endl;
    cout << myMax(a, b) << endl;
}