#include<iostream>
using namespace std;

int main(){

    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};

    // int sum=0;
    for(int i=0; i<3; i++){
        int ans=0;
        for(int j=0; j<3; j++){
            ans=arr[i][j]+ans;
        }
        cout<<ans<<endl;
    }
}