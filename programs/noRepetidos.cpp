#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < num.size(); i++){
        cin >> num[i];
    }
    set<int> noRep;
    for (int i=0; i<num.size(); i++){
        noRep.insert(num[i]);
    }

    for(int elem:noRep){
        cout << elem << " ";
    }
    return 0;
}
