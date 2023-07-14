#include<stdio.h>

main()
{
	int a[10];//{10,20,30,40,50,60,80,90,15,54,65};
	        //0  1  2  3  4  5  6  7  8  9  10
	        
			int i,n;
	        printf("Enter How Many Value input in Array (maximum=9) = ");
	        scanf("%d",&n);
	        printf("Enter Array Elements = ");
	        
	        for(i=0;i<=n;i++)
	        {
	        	printf("a[%d] = ",i);
	        	scanf("%d",&a[i]);
			}
			 for(i=0;i<=n;i++)
			 {
			 	printf("%d\n",a[i]);
			 }
			 
}
