#include<stdio.h>

main()

{
	int a[50],b[50],c[100];
	int i,n;
	printf("Enter Array Size A = ");
	scanf("%d",&n);
	printf("Enter Elements A = \n");
	  
	   for(i=0;i<n;i++)
	   {
	   	 printf("a[%d] = ",i);
	   	 scanf("%d",&a[i]);
	   }
	  
	   for(i=0;i<n;i++)
	   {
	   	 printf("b[%d] = ",i);
	   	 scanf("%d",&b[i]);
	   	 
	   }
	   for(i=0;i<n;i++)
	   {
	   	 c[i]=a[i]+b[i];
	   }
	   	   
	   printf("Sum of Two Array = \n");
	   for(i=0;i<n;i++)
	   {
	   	printf("%d ",c[i]);
	   }
}
