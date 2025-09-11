#include<iostream>
#include <algorithm>
using namespace std;
int howManyPages(int n, int p);
int main() {
    int n, p;
    cin >> n >> p;
    int res = howManyPages(n,p);
    cout << res;
    return 0;
}

int howManyPages(int n, int p){
    if(p%2!=0) p--;
    return min((p/2), ((n-p)/2));
}
