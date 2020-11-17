#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int no;
        int r, ans=0;
        int p=1;
        cin >> no;
        while (no>0){
            r=no%10;
            ans=ans+r*p;
            p=p*2;
            no=no/10;
        }
       cout<<ans<<endl;     
    }
    
return 0;
}