#include<iostream>
using namespace std;

int fun(int arr[], int size){

    int zero = 0;
    int one = 0;
    for(int i=0; i<=size; i++){
        if(arr[i]==0)
            zero++;
        else
            one++;
    }
    // int arr1[] = {zero,one};
    return zero;
}

int main(){
    int arr[] = {0,1,1,1,1,0,0,0,0,1,0,1,0,1,0};

    int size = 15, zero =0, one=0;

    int zero1 = fun(arr,size);
    int one1 = size-zero1;
    cout<<"No. of zero's present in the array are "<<zero1<<" and one's are :"<<one1;

}