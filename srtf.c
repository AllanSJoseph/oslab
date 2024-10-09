//Shortest Remaining Time First

#include<stdio.h>

void main(){
  int pid[10],AT[10],BT[10],CT[10],TAT[10],WT[10];
  int n,twt=0,ttat=0,temp;
  float avgwt,avgtat;
  printf("Enter the number of processes:\n");
  scanf("%d",&n);
  printf("Enter the processes below: \n");
  
  for(int i=0; i<n; i++){
    printf("Process %d:\n",i+1);
    printf("Enter the Arrival Time and Burst Time:\n ");
    scanf("%d %d %d",&pid[i],&AT[i],&BT[i]);
  }

  //Sorting Burst Time
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(BT[j] > BT[j+1]){
        temp = BT[j+1];
        BT[j+1] = BT[j];
        BT[j] = temp;
        
        temp = AT[j+1];
        AT[j+1] = AT[j];
        AT[j] = temp;
        
        temp = pid[j+1];
        pid[j+1] = pid[j];
        pid[j] = temp;
      }
    }
  }
  
printf("Process\tAT\tBT\tCT\tTAT\tWT\n"); 
  for(int i=0; i<n; i++){
     printf("P%d\t%d\t%d\n",i+1,AT[i],BT[i]);
    //printf("P%d\t%d\t%d\t%d\t%d\t%d\n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
  }

}
