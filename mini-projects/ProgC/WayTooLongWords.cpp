#include<iostream>
int main(){ 

    int n;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::string word;
        std::cin >> word;

        int size = word.size();
        

        if(size>10){
            std::cout << word.at(0) + std::to_string(size-2) + word.at(size-1) << "\n";
        }else{
            std::cout<<word<<"\n";
        }

    }
    return 0;
}