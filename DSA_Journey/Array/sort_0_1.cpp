#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={0,1,0,1,0,0,0,1,1,1,1,};
        int start=0;
        int end=arr.size()-1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]==0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }

        if(start<end){
            swap(arr[i], arr[end]);
            end--;
            
        }
        
    }
    

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
}

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int arr[]={1,1,1,0,0,0,1};
//     int size=7;

//     sort(arr,arr+size);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }