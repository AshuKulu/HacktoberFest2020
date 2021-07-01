def bin_search(arr,x):
    lo = 0
    hi = len(arr)
    while(lo<=hi):
        mi = int((lo+hi)/2)
        if(arr[mi]<x):
            lo=mi+1
        elif (arr[mi]>x):
            hi=mi-1
        else:
            break
    return mi


def main():
    arr = [128,15,3656,355,32,1,2546]
    arr.sort()
    x = 355
    print("In The array "+str(x)+" exists at index",bin_search(arr,x))
if _name=="main_":
    main()
