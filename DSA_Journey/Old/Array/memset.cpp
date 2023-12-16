#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // wrong as We can use memset() to set all values as 0 or -1 for integral data types also. 
    // It will not work if we use it to set as other values. The reason is simple, memset works byte by byte.
    // memset(arr, 2, sizeof(arr));

    memset(arr, -1, sizeof(arr)); // right
    memset(arr, 0, sizeof(arr));  // right

    for (int i = 0; i < 10; i++)
    {
        // arr[i]=1;
        cout << arr[i] << " ";
    }

    char str[] = "keshav";
    memset(str, 't', sizeof(str));
    cout << str;
}
