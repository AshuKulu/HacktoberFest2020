#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>in(n);
        for(int i=0;i<n-1;i++)
        {
            int x,y;
            cin>>x>>y;
            --y;
            in[y]++;
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
                total++;
        }
        cout<<total-1<<"\n";
    }
        
    return 0;
}