#include<iostream>
using namespace std;


bool search(int arr[][3], int col, int row,int key){

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};

    int key;
    cout<<"Enter the key you want to search:";
    cin>>key;
    if(search(arr,3,3,key)){
        cout<<"Key is present";
    }
    else
    cout<<"Key is not present";
    
}