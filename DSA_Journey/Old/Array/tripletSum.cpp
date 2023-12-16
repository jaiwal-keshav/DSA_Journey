// finding 3 numbers who sum is the target no.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr{1,2,3,4,5,6,7,8,9};
    vector <int> brr{};

    int target = 15;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum==target){
                cout<<"Triplet is : "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
            }
        }
    }
}