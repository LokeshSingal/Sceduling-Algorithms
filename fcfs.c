/*
	First Come First Served Algorithms

*/
#include <stdio.h>
#include <stdlib.h>

void main()
{

	char p[10][5];
	int tot=0,wt[10],pt[10],et[10],i,n;
	float avg=0;

	printf("enter no of processes:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter process%d name:\n",i+1);
		scanf("%s",&p[i][5]);
		printf("enter process time");
		scanf("%d",&pt[i]);
	}
 
	wt[0]=0;
	
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+et[i-1];
		tot=tot+wt[i];
	}
	
	avg=(float)tot/n;
	
	printf("p_name\t P_time\t w_time\n");
	
	for(i=0;i<n;i++)
		printf("%s\t%d\t%d\n",p[i],et[i],wt[i]);
	
	printf("total waiting time=%d\n avg waiting time=%f",tot,avg);



}
