

#include <stdio.h>

void main()
{ 
    
    int number;
    int i,j;
    float sum1=0,sum2=0;
    int ch;
    int wtt=0,tatt=0;
    int burst_array[20],wt[20],tat[20];
    
    printf("  --------------- FCFS Scheduling Algorithm Implementation--------------\n\n");
    printf("  Enter the total number of processes:");
    scanf("%d",&number);
    for (i=0;i<number;i++){
        printf("  Enter the burst time of process %d:",i+1);
        scanf("%d",&burst_array[i]);
    }
    
    for(i=0;i<number;i++){
        if(i==0){
            wt[i]=0;
        }
        else{
            for (j=0;j<i;j++){
                wtt+=burst_array[j];
            }
            wt[i]=wtt;
            wtt=0;
        }
    }
        
    for (i=0;i<number;i++){
        for (j=0;j<=i;j++){
            tatt+=burst_array[j];
        }
        tat[i]=tatt;
        tatt=0;
    }
        
    for (i=0;i<number;i++){
           sum1+=wt[i];
            }

    for(i=0;i<number;i++){
            sum2+=tat[i];
        }
        
    printf("\n\n -----------------------------------------------------------------\n");
    printf("\n  Process\t Burst Time\t Waiting Time\t Turn-around Time" );
    for(i=0;i<number;i++)
    {
    printf("\n P%d\t %d\t\t %d\t\t\t%d",i+1,burst_array[i],wt[i],tat[i]);
    }
 
    printf("\n\nAVERAGE WAITING TIME : %f",sum1/number);
    printf("\nAVERAGE TURN AROUND TIME : %f",sum2/number);
    printf("\n\n -----------------------------------------------------------------\n");
        
}




