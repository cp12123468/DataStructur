#include <stdio.h>
int main(){
  int a[][4] = {3,16,87,65,4,32,11,108,10,25,12,27};
  int b[3],i,j,l;
  for(i=0;i<=2;i++)
    {
      l = a[i][0];
      for(j=1;j<=3;j++)
        if(a[i][j]>l) l = a[i][j];
        b[i] = l;
    }
    printf("\nnarray a:\n");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=3;j++)
        printf("%5d",a[i][j]);
        printf("\n");

    }
        printf("\nnarray b:\n");
        for(i=0;i<=2;i++)
         printf("%5d",b[i]);
         printf("\n");

  return 0;
}