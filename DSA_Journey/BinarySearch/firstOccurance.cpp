#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int target){
    int start=0;
    int end = size-1;
    int index=-1;
    int mid =start+(end-start)/2;

    while(start<=end){

        if(arr[mid]==target){
            index = mid;
            end = mid-1;
        }

        if(arr[mid]<target){
            start = mid+1;
        }

        if(arr[mid]>target){
            end=mid-1;
        }

        mid = start+(end-start)/2;
    }

    return index;
}

int main(){
    int arr[]={1,2,2,3,3,3,4,5,6,6,6,7,8};
    int size=13;
    int target = 0;

    int index = firstOcc(arr,size,target);
    cout<<"Element's 1st Occurance is at index : "<<index;
}