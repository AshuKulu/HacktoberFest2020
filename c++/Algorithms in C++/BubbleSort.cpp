/*Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. source:wikipedia*/
/* bubble sort repeatedly swaps adjacent elements in one pass and continues it until all elements are sorted*/
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool swap=true;
    int i,j;
    for(int i=0;i<n-1;i++){
        swap = false;
       // cout<<"pass "<<i+1<<endl;
        for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
              int t =arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=t;
              swap = true;
          }
      }
      if(swap==false){
          break;
      }
    }
}
int main(){
    int n;
    cout<<"enter length of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"sorted array is "<<endl;
    bubblesort(a,n); 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }    
    return 0;
}