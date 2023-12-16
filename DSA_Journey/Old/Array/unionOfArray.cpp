#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> brr{10, 11, 12,3};
    vector<int> crr{};

    for (int i = 0; i < arr.size(); i++)
    {
        crr.push_back(arr[i]);
    }

    for (int i = 0; i < brr.size(); i++)
    {
        crr.push_back(brr[i]);
    }

    cout << "Union of 2 array's are :" << endl;

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
}