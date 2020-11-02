class BubbleSort
{
    //declare parameters
    private int[] array;
    private bool isSorted;

    //constructor
    public BubbleSort(int[] pArray)
    {
        this.array = pArray;
        this.isSorted = false;
    }

    //Getter and setter
    public int[] getArray()
    {
        return this.array;
    }
    public void setArray(int[] pArray)
    {
        this.array = pArray;
        this.isSorted = false;
    }
    public bool getIsSorted()
    {
        return this.isSorted;
    }


    //func
    public void sortArray()
    {

        for (int i = 0; i < array.Length; i++)
        {
            for (int j = 1; j < array.Length; j++)
            {
                //Hop in when right value is smaller than the left one
                if (array[j] < array[j - 1])
                {
                    int tempBigger = array[j - 1];
                    int tempSmaller = array[j];

                    array[j - 1] = tempSmaller;
                    array[j] = tempBigger;
                }
            }
        }
        //To know if this object is sorted
        isSorted = true;
    }
}
