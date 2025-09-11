#include <iostream>
#include <climits>
using namespace std;
int main(){
    long long int arr[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    long long int sum = 0;
    long long int arr_sum[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5; j++){
            if (j!=i){
                sum += arr[j];
            }
        }
        arr_sum[i] = sum;
        sum = 0;
    }

    // Find the max value of the sum_array
    long long int max=0, min=LONG_MAX;
    for(int i=0;i<5;i++){
        if(arr_sum[i]>max){
            max = arr_sum[i];
        }
        if (arr_sum[i]<min){
            min = arr_sum[i];
        }
        
    }
    cout << min << " " <<max;

    return 0;
}
