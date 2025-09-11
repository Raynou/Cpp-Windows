#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++){
        cin >> nums.at(i);
    }

    sort(nums.begin(), nums.end());

    for(int elem:nums){
        cout << elem << " ";
    }
    return 0;
}
