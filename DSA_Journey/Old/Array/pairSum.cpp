// Find the pair in an array which give sum as required by target value

#include<iostream>
#include<vector>
using namespace std;

// int main(){

//     vector <int> arr{1,2,3,4,5,6,7,8,9};
//     vector <int> brr{};

//     int target = 0;

//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr.size(); j++){
//         if(i<j){
//             int sum = arr[i]+arr[j];

//             if(sum==target){
//                 brr.push_back(arr[i]);
//                 brr.push_back(arr[j]);
//             }
//         }
//     }
//     }
//     cout<<"Sum-pair is : ";

//     int count=0;
//     for(int i=0; i<brr.size(); i++){
//         if(count%2==0){
//             cout<<endl;
//         }
//         cout<<brr[i]<<" ";
//         count++;

//     }
    
//     if (brr.empty())
//     {
//         cout<<"Pair not found";
//     }
// }

int main(){
    vector <int> arr{1,2,3,4,5,6,7,8,9};
    vector <int> brr{};

    int target = 10;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            int sum = arr[i]+arr[j];
            if(sum==target){
                cout<<"Pair is : "<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
    
}