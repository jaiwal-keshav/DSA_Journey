#include <iostream>
#include <vector>
using namespace std;

void union1(int arr[], int brr[], vector<int> v1, int sizea, int sizeb)
{

    for (int i = 0; i < sizea; i++)
    {

        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                v1.push_back(arr[i]);
                brr[j]=INT8_MIN;
            }
        }
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 4, 4, 5};
    int brr[] = {6, 7, 4, 4, 10};
    vector<int> v1;
    int sizea = 5;
    int sizeb = 5;

    union1(arr, brr, v1, sizea, sizeb);
}