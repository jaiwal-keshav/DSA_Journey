#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,2,3,3,4,5,6,6,7,8};
    vector<int> brr{1,2,3,3,76,34,32};
    vector<int> crr{};

    int i=0;

    // while(i<arr.size()){
    for(i; i<arr.size(); i++){    
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                crr.push_back(arr[i]);
                // brr[j] = -1; //marking
                break; // for marking use brr[j] or break
            }
        }
    }

    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
}