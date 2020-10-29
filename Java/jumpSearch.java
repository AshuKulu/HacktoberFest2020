//Jump search
public class jumpSearch
{

    // Test block
    public static void main(String [ ] args)
    {
        int input[] = { 5, 9, 11,16, 24, 29, 58, 83, 92,99, 155};
        int indexOf = 58;
        int index = jumpSearch(input, indexOf);
        System.out.println("The Index of " + indexOf +" is at index " + index);
    }
    
    public static int jumpSearch(int[] inputArr, int x)
    {
        int n = inputArr.length;
        int step = (int)Math.floor(Math.sqrt(n));
          int prev = 0;
        while (inputArr[Math.min(step, n)-1] < x)
        {
            prev = step;
            step += (int)Math.floor(Math.sqrt(n));
            if (prev >= n)
                return -1;
        }
          while (inputArr[prev] < x)
        {
            prev++;
              if (prev == Math.min(step, n))
                return -1;
        }
        if (inputArr[prev] == x)
            return prev;

        return -1;
    }


}
