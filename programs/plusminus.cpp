#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double positive, negative, zero;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i]>=1){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }else{
            zero++;
        }
    }

    float ratio_positive, ratio_negative, ratio_zero;
    float den = 1.0 * n;

    ratio_positive = (positive/den);
    ratio_negative = (negative/den);
    ratio_zero = (zero/den);
    
    cout << ratio_positive << endl << ratio_negative<< endl<< ratio_zero<<endl;
    return 0;
}