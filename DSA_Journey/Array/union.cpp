#include<iostream>
#include<vector>
using namespace std;

// void intersection(int arr[],int brr[], vector<int> v1,int sizea,int sizeb){
//     for (int i = 0; i < sizea; i++)
//     {
//         v1.push_back(arr[i]);
//     }

//     for(int i=0; i<sizeb; i++){

//         v1.push_back(brr[i]);
//     }

//     for (int i = 0; i < v1.size(); i++)
//     {
//         cout<<v1[i]<<" ";
//     }
     
// }

// Handling duplicates
void intersection(int arr[],int brr[], vector<int> v1,int sizea,int sizeb){
    for (int i = 0; i < sizea; i++)
    {
        v1.push_back(arr[i]);
    }

    for(int i=0; i<sizeb; i++){
        for (int j = 0; j < sizeb ; j++)
        {
            if (v1[i]!=brr[j])
            {
                v1.push_back(brr[j]);
                arr[i]=INT8_MIN;
            }
        }
        
    }

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i]!=INT8_MIN)
        {
            cout<<v1[i]<<" ";

        }
        
    }
     
}
int main(){
    int arr[]={1,2,3,4,5};
    int brr[]={6,7,8,4,10};
    vector<int> v1;
    int sizea=5;
    int sizeb=5;

    intersection(arr,brr,v1,sizea,sizeb);
}