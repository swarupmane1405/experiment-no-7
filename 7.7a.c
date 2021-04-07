#include <stdio.h>

int main()
{
  int arr1[3][3],i,j, arr2[3][3], arr3[3][3];
  
    printf("take array 1 inputs\n");
for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  } 
  printf("take array 2 inputs\n");
for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr2[i][j]);
      }
  } 
 
 printf("\n\n\n\tMATRIX\n");
  for(i=0;i<3;i++)
  {
      
      for(j=0;j<3;j++)
           arr3[i][j]=arr2[i][j]+arr1[i][j];
  }
  printf("\n\n\n\tMATRIX\n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr3[i][j]);
  }
getch();
return 0;
 
}
