#include<iostream>
#include<vector>
using namespace std;
void bonAppetit(vector<int>bill, int k, int b);
int main(){
    int n, k;
    cin >> n >> k;
    vector<int>bill(n);

    for (int i = 0; i <bill.size(); i++){
        cin >> bill[i];
    }
    int b;
    cin >> b;
    bonAppetit(bill, k, b);
    return 0;
}

void bonAppetit(vector<int>bill, int k, int b){
    int totalBill=0;
    for (int i = 0; i <bill.size();i++){
        if(i!=k){
            totalBill += bill.at(i);
        }
    }

    totalBill = totalBill/2;
    if(totalBill == b){
        cout << "Bon Appetit";
    }else{
        cout << b - totalBill; 
    }
}
