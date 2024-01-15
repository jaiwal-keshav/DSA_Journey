#include<iostream>
using namespace std;


    int maxNo(int arr[3][3], int row, int col){

        int maxNo=INT8_MIN;
        for(int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if(maxNo<arr[i][j]){
                    maxNo=arr[i][j];
                }
            }
        }
        return maxNo;
    }
int main(){


    int arr[3][3]={{1,2,3},{1,2,3},{1,9,3}};

    int col=3, row=3;

    cout<<"Max no present in an array is :"<<maxNo(arr,col,row);
}

