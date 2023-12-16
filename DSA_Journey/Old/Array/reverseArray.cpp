#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int size = sizeof(arr)/4;

    int start=0, end = size-1;

    // for(int i=0; i<size/2; i++){
    //     swap(arr[i],arr[end]);
    //     end--;
        // start++;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";

    // }

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    
    
}