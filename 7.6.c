#include <stdio.h>

int main()
{
  int arr1[3][3],i,j,a,c=0;
  
    printf("take array inputs\n");
for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("enter the number want to search : ");
 scanf("%d", &a);
  for(i=0;i<3;i++)
  {
      
      for(j=0;j<3;j++)
           if(a==arr1[i][j])
	   {
	   c++;
	   }
  }
  

if(c==0)
{
	printf("NOT PRESENT");
}
else
{
	printf("%d presents %d times",a,c);
}
getch();
return 0;
 
}
