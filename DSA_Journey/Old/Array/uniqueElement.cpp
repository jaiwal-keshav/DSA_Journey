#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{1,2,3,1,3,4,2};
    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans^arr[i];
    }

    cout<<"Unique element present in an array : "<<ans;

}