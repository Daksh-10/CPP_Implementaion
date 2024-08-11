#include<iostream>
using namespace std;

int main(){
    int *arr=new int[3];
    arr[0]=34;
    arr[2]=3;
    arr[1]=4;

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}