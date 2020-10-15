//Documentation (Print the Maximum, minimum and average from array)
//Package
//Import
//Interface
class MinMaxAvg
{ 
 
  	public static void main(String args[])
  	{
    	int array[] = new int[]{10, 11, 88, 2, 120, 12};
    	int max = getMax(array);
    	System.out.print("Maximum Value is: "+max);
    	int min = getMin(array);
    	System.out.print("\nMinimum Value is: "+min);
    	double avg = getAvg(array);
    	System.out.print("\nAverage Value is: "+avg);
  	}
  	public static int getMax(int[] inputArray)
  	{ 
    	int maxValue = inputArray[0]; 
    	for(int i=0;i <6;i++)
    	{ 
      		if(inputArray[i] > maxValue) 
         		maxValue = inputArray[i]; 
    	} 
    	return maxValue; 
  	}
  	public static int getMin(int[] inputArray)
  	{ 
    	int minValue = inputArray[0]; 
    	for(int i=0;i<6;i++)
    	{ 
      		if(inputArray[i] < minValue)
        		minValue = inputArray[i];  
    	} 
    	return minValue; 
  	}
  	public static double getAvg(int[] inputArray) 
  	{
  		double total = 0;
  		for(int i=0;i<6;i++)
      		total = total + inputArray[i];
      	double avgValue = total / 6.0; 
    	return avgValue; 
  	}
}