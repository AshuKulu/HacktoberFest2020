//Binary Search Algorithm to check if given key
// is inside array or not

bool binary_search(int a[],int s,int e,int key)
{
    int mid;
    while(s<e)
    {
        mid=(s+e)/2;
        if(a[mid]==key)
        return true;
        else if(a[mid]<key)
        e=mid-1;
        else
        s=mid+1;
    }
    return false;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cout<<"enter length of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"\nenter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"enter key which you want to search :";
    int key;
    cin>>key;
    cout<<"\n";
    if(binary_search(a,0,n-1,key))
      cout<<"Key is Found\n";
    else
    cout<<"Key is not found\n";
	return 0;
}
