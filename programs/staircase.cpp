#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int j = n-1;
        while(j>i){
            cout << " ";
            j--;
        }
        for (int i = 0; i <= j; i++){
            cout << "#";
        }
        cout << endl;
    }
}