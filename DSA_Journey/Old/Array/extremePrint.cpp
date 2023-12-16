#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,4,6,7,8,4,9,3,61};

    int size = sizeof(arr)/4;
    int temp = size-1;
    for (int i = 0; i <= size; i++)
    {
        if(i>temp)
        break;

        if(i==temp)
        cout<<arr[i];

        if(i<temp){
        cout<<arr[i]<<" ";
        cout<<arr[temp]<<" ";
        }
        temp--;


    }
    
}