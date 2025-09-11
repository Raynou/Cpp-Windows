#include<iostream>
#include<vector>
#include<set>
using namespace std;
int numOfPairs(vector<int> socks);
int main(){
    int n;
    cin >> n;
    vector<int> socks(n);
    for (int i = 0; i < socks.size(); i++){
        cin >> socks[i];
    }
    int res = numOfPairs(socks);
    cout<<res;
    return 0;
}

int numOfPairs(vector<int> socks){
    int res=0;
    set<int>buckets;
    for(int i=0; i<socks.size(); i++){
        buckets.insert(socks[i]);
    }

    int pairs[buckets.size()] = {0};
    int i = 0;
    for(int elem:buckets){
        for(int j = 0; j<socks.size(); j++){
            if(elem == socks.at(j)){
              pairs[i]++;         
            }
        }
        i++;
    }
   for(int elem:pairs){
        if(elem%2 ==0 && elem != 0){
            res += elem/2;
        }else{
            elem--;
            if(elem != 0){
                res += elem/2;
            }
        }
    }
    return res;   
}
