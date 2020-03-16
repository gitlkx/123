#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int i,j,sum=0;                    
    int a[4][4];                    
    for(i=1;i<=4;i++)
        for(j=1;j<=4;j++)
            scanf("%d",&a[i][j]);       
    for(i=1;i<=4;i++)
        for(j=1;j<=i;j++)
        sum+=a[i][j];                   
    printf("%d",sum);                   
    return 0;
} 
