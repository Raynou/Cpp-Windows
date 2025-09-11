#include<iostream>


int main(){

    int A[2][2] = {
        {2,2},
        {3,3}
    };

    int B[] = {4, 5};

    int R[2] = {0};
    // * Expected output: R[] = {18, 27}

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            R[i] += A[i][j]*B[j];
        }
        
    }
    

    for (int i = 0; i < sizeof(R)/sizeof(R[0]); i++)
    {
        std::cout<<R[i]<<"\n"; 
    }
    
    return 0;
}