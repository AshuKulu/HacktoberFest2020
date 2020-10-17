s="abcabccccccccbccccddddbb"




a=[[0]*len(s) for i in range(len(s))]

dp=[1]*len(s)

for i in range(1,len(s)):
    for j in range(i):
        if s[i]>=s[j]:
            dp[i]=dp[j]+1
            

ind,maxx=0,0

for i in range(len(s)):
    if dp[i]>maxx:
        ind,maxx=i,dp[i]
        
        
ans=s[ind]
maxx-=1
while(ind>-1):
    if maxx==dp[ind]:
        ans=s[ind]+ans
        maxx-=1
    ind-=1
    
print(ans)
    
    
    
    
