#include<iostream>
using namespace std;

void transpose(int arr[3][3], int col, int row,int arr2[3][3]){
    

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr2[i][j]=arr[j][i];
        }
    }
}

void print(int arr2[3][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
}

int main(){
    int arr[3][3]={{1,2,3,},{1,2,3},{1,2,3}};
    int arr2[3][3];
    print(arr);
    transpose(arr,3,3,arr2);
    print(arr2);
}