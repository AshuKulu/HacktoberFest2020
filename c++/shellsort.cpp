#include<iostream>
using namespace std;

void shellSort(int arr[], int n){
    int interval=n/2;
    for(interval=n/2;interval>0;interval/=2){
       

       for(int i=interval;i<n;i++){
            int temp=arr[i];

            int j;
            for(j=i;j>=interval && arr[j-interval]>temp;j=j-interval){
                arr[j]=arr[j-interval];
            }
            arr[j]=temp;
       }

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    shellSort(arr, n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}