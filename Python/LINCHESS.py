# cook your dish here
for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    narr=[]
    for i in range(n):
        if k%arr[i]==0:
            narr.append(arr[i])
    if len(narr)==0:
        print(-1)
        continue
    else:
        narr=list(reversed(sorted(narr)))
        print(narr[0])
