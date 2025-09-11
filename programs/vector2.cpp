#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int number;
    do
    {
        cin >> number;
        arr.push_back(number);
    } while (number<10);
    

    for (int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << " ";
    }
    return 0;
}