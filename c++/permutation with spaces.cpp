///using the input output method
//How to identify whether it is a recursion problem or not?
//CHOICES & DECISION:whether or not to include spaces before every character
//Eg:Here in ABC we have two positions to make choices , whether to include space before B and C
#include<bits/stdc++.h>
using namespace std;
void permutation(string ip, string op,vector<string>&vec)
{
    if(ip.length()==0)
    {
        vec.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    permutation(ip,op1,vec);
    permutation(ip,op2,vec);
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ip="";
        cin>>ip;
        if(ip.length()==0)
            cout<<"()";
        else
        {
            string op="";
            op.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            vector<string>vec;
            permutation(ip,op,vec);
            for(auto it=vec.begin();it!=vec.end();it++)
            {
                op=*it;
                cout<<"(";
                cout<<op;
                cout<<")";
            }
        }
        cout<<endl;
    }
    	return 0;
}
