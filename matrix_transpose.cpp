#include<iostream>
using namespace std;
 int main()
 {
     int i,j,n,m;
     int arr[100][100],trs[100][100];
     cout<<"Enter the number of rows and columns of matrix :";
     cin>>n>>m;
     cout<<"Enter the matrix elements  :";
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             cin>>arr[i][j];
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
          trs[j][i]=arr[i][j];
         }
     }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cout<<trs[i][j]<<"  ";
         }
         cout<<"\n"; 
     }
     return 0;
 }
