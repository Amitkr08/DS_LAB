#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int m,i,j,k=0,l=0;
    cin>>m;
    int a[m][m];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<m-1;i++){
        for(j=0;j<m;j++){
            l=j+pow(-1,j);
            k+=pow(-1,j)*a[i][j]*a[i+1][l];
        }
    }
     cout<<k;

   return 0;
}