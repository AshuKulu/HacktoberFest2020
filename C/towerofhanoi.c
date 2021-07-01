/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/*
 
 * C program for Tower of Hanoi using Recursion
 
 */
 
#include <stdio.h>
 
  
 
void towers(int, char, char, char);
 
  
 
int main()
 
{
 
    int num;
 
  
 
    printf("Enter the number of disks : ");
 
    scanf("%d", &num);
 
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
 
    towers(num, 'A', 'C', 'B');
 
    return 0;
 
}
 
void towers(int num, char frompeg, char topeg, char auxpeg)
 
{
 
    if (num == 1)
 
    {
 
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
 
        return;
 
    }
 
    towers(num - 1, frompeg, auxpeg, topeg);
 
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
 
    towers(num - 1, auxpeg, topeg, frompeg);
 
}
/*OUTPUT :

Enter the number of disks : 3
The sequence of moves involved in the Tower of Hanoi are :
  
Move disk 1 from peg A to peg C
Move disk 2 from peg A to peg B
Move disk 1 from peg C to peg B
Move disk 3 from peg A to peg C
Move disk 1 from peg B to peg A
Move disk 2 from peg B to peg C
Move disk 1 from peg A to peg C
*/