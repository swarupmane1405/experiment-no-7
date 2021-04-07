#include <stdio.h>

int main()
{
  int arr1[3][3],i,j,small;
  
    printf("take array inputs\n");
for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 small=arr1[0][0];
  for(i=0;i<3;i++)
  {
      
      for(j=0;j<3;j++)
           if(small>arr1[i][j])
	   {
	   small=arr1[i][j];
	   }
  }
  printf("\n\nSMALLEST NUMBER is %d",small);
getch();
return 0;
 
}
