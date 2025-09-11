#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[k];
    int count = 0;
    for (int i = 0; i < n; i++){
        int number = 0;
        cin >> number;
        number = number % k;
        int complement = 0;
        if (number == 0){
            complement = k;
        }else{
            complement = number;
        }
        count += a[k-complement];
        a[number]+=1;
    }
    cout << count << endl;       
    return 0;
}