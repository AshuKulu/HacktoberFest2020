// Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced. 
// An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.

class BalancedArray
{
    long minValueToBalance(long a[] ,int n)
    {
        int sum1=0;
        for(int i=0;i<n/2;i++){
            sum1+=a[i];
        }
    int sum2=0;
    for(int i=n/2;i<n;i++){
        sum2+=a[i];
    }
return Math.abs(sum2- sum1);
    }
}
