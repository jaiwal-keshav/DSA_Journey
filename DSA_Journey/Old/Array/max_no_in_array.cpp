#include<iostream>
using namespace std;

int max_no_array(int arr[], int size){
    
    // int max = 0; 
    int max = INT8_MIN; // GOOD Practice

    for(int i = 0; i<=size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int min_no_array(int arr[], int size){
    int min = INT8_MAX;

    for(int i=0; i<=size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;
}

int main(){

    int arr[] = {2,3,5,4,6,7,8,12,89};
    int size = sizeof(arr)/4;

    cout<<"Max element present in an array :"<<max_no_array(arr, size);
    cout<<"\nMin element present in an array :"<<min_no_array(arr, size);
}