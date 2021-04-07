	   
#include <stdio.h>

int main()
{
  int arr1[3][3],i,j;
  
    printf("take array inputs\n");
for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\n\n\n\tEVEN NUMBERS\n");
  for(i=0;i<3;i++){
  for(j=0;j<3;j++)
  {
      if(arr1[i][j]%2==0)
	   {
	   printf("%d ",arr1[i][j]);
	   }

        
  }
}
printf("\n\n\n\tODD NUMBERS\n");
  for(i=0;i<3;i++){
  for(j=0;j<3;j++)
  {
      if(arr1[i][j]%2!=0)
	   {
	   printf("%d ",arr1[i][j]);
	   }

        
  }
}
getch();
return 0;
 
}
