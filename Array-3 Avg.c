#include<stdio.h>

main()
{
	int a[10];
	        	        
			int i,n,sum=0,avg;
			printf("How many Input Array (maximum=9) = ");
			scanf("%d",&n);
			printf("Enter Element no. = ");
			for(i=0;i<n;i++)
			{
				printf("a[%d]",i);
				scanf("%d",&a[i]);
			}
			for(i=0;i<n;i++)
			{
				sum=sum+a[i];
				
			}
	        printf("Sum of Arry = %d\n",sum);
	        avg = sum/n;
	        printf("Your Avg. No.= %d",avg);
			 
}
