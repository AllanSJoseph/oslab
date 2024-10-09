#include<stdio.h>

void main(){
  //No of processes is 5 for now
  
  int AT[10],BT[10],CT[10],TAT[10],WT[10];
  int n,twt=0,ttat=0;
  float avgwt,avgtat;
  printf("Enter the number of processes:\n");
  scanf("%d",&n);
  printf("Enter the processes below: \n");
  
  for(int i=0; i<n; i++){
    printf("Process %d:\n",i+1);
    printf("Enter the Arrival Time and Burst Time:\n ");
    scanf("%d %d",&AT[i],&BT[i]);
  }
 
 for(int i=0;i<n;i++){
   if(i==0){
     CT[i] = BT[i];
     TAT[i] = CT[i] - AT[i];
     WT[i] = AT[i];
   }else{
     CT[i] = CT[i-1]+BT[i];
     TAT[i] = CT[i] - AT[i];
     WT[i] = TAT[i] - BT[i];
   }
   twt += WT[i];
   ttat += TAT[i];
 }
 
 printf("Process\tAT\tBT\tCT\tTAT\tWT\n"); 
  for(int i=0; i<n; i++){
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
  }
  avgtat = ttat/n;
  avgwt = twt/n;
  printf("\nAverage Turn Around Time: %f",avgtat);
  printf("\nAverage Waiting Time: %f\n",avgwt);
}
