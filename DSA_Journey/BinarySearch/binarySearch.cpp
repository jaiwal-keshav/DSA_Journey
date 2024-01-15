#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){

    int start=0, end = size-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
          return mid;
        }

        if(arr[mid]>target){
            end = mid-1;
        }

        else{
            start = mid+1;
        }

        mid = start+(end-start)/2;
    }

    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int target = 9;
    int index=binarySearch(arr,size,target);

    if(index==-1){
        cout<<"Element not found";
    }

    else{
        cout<<"Element found at index : "<<index;
    }

}