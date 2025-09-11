#include <iostream>
using namespace std;

int main() {
    int ages[5];
    int min = 150;
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
        if (ages[i]<min){
            min = ages[i];
        }
    }
    //your code goes here

    int xd = 11;

    cout << (float)xd/(float)100 << endl;
    
    return 0;
}