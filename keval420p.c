#include<stdio.h>
 
 main()
 
 {
 	int r,c,s;
 	
 	
 	for(r=4;r>=1;r--)
 	{
 		for(s=1;s<=r;s++)
 		{
 				printf(" ");
		 }
 		for(c=4;c>r;c--)
 		{
 		if(c==4)
		 printf("*");
		 else
		 printf(" ");
		 }
 		for (c=r;c<=5;c++)
 		{
 				if(c==4)
		 printf("*");
		 else
		 printf(" ");
		 }
		 printf("\n");
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 }
