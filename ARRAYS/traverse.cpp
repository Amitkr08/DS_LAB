#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[10];
    int n;
    cout << "Array: ";
 cin>>n;
     cout << "elements of Array: ";
     for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

cout<<"traversed array";
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

 

    return 0;
}