#include<iostream>
#include<queue>

using namespace std;

class work
{
    public:
    int st;
    int et;
    work(int s,int e)
    {
        this->st=s;
        this->et=e;
    }

    bool operator > (const work &w1) const
    {
        return (this->et>w1.et);
    }

    bool operator < (const work &w1) const
    {
       return (this->et<w1.et);
    }

};

int main(int argc,char** argv)
{
    work a(3,8);
    work b(1,6);
    work c(3,12);
    work d(10,15);
    work e(8,11);
    work f(2,3);
    work g(1,7);
    work h(12,14);
    work i(16,18);

    priority_queue < work ,vector<work>,greater<work> > pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    pq.push(d);
    pq.push(e);
    pq.push(f);
    pq.push(g);
    pq.push(h);
    pq.push(i);
    
    int ans=1;
    work w1=pq.top();
    pq.pop();
    while(pq.size()>0)
    {
        work w2=pq.top();
        pq.pop();
        
        if(w2.st>=w1.et)
        {
            ans++;
            w1=w2;
        }
    }
    cout<<ans<<endl;



}
