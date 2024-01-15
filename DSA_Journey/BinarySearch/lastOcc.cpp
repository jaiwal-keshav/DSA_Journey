#include <iostream>
using namespace std;

int lastOcc(int arr[], int size, int target){
  int start=0;
  int index=-1;
  int end=size-1;
  int mid=start+(end-start)/2;

  while(start<=end){

    if(arr[mid]==target){
      index = mid;
      start = mid+1;
    }

    if(arr[mid]>target){
      end = mid-1;
    }

    if(arr[mid]<target){
      start = mid+1;
    }

    mid = start+(end-start)/2;
  }

  return index;
}

int main() {
  
  int arr[] = {1,2,3,3,3,3,3,4,4,5,7,8};
  int size=12;
  int target =3;

  int index = lastOcc(arr,size,target);
  cout<<"element found at "<<index;
  return 0;
}