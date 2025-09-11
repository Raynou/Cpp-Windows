#include<iostream>
#include<fstream>
using namespace std;
int main(){

    /*ofstream MyFile;
    MyFile.open("test.txt");

    MyFile << "Hello world!4";

    MyFile.close();*/
    int f=1, i=2;
    while(++i<5) {
        cout << i << endl;
        f*=i;
    }
    cout<<f;
    
    return 0;
}