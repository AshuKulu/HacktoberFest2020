#include<iostream>
#include<climits>
using namespace std;
int main(){
int min=INT16_MAX;
int max=INT16_MIN;
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int no;
    cin>>no;
    if(no<min){
     min=no;
    }
    if(no>max){
        max=no;
    }
    
}
cout<<"min:"<<min<<" "<<"max:"<<max;

    return 0;
}