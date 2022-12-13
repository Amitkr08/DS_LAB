#include <iostream>
using namespace std;

int main()
{

    int i, n, pos;

    int arr[20];
    cout<<"enter the size of array";

    cin>>n;
    cout<<"enter the index";
    cin>>pos;

    for (i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    for (i = 0; i < n; i++)
    {

        cout<<"the value in array is "<< arr[i];
    }
    cout<<"done";
    for (i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {

        cout<<"the value in array is "<< arr[i];
    }

    return 0;
}