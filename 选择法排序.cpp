#include<stdio.h>
int main(void)
{
  int n,i;
  scanf("%d",&n);
  int array[n];
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  int k,p,max,temp;
  for(k=0;k<n-1;k++){
    max = k;
    for(p=k+1;p<n;p++)
      if(array[p]>array[max])max = p;
      temp = array[k];
      array[k] = array[max];
      array[max] = temp;
  }
  int u;
  for(u=0;u<n-1;u++){
    printf("%d ",array[u]);
  }
  printf("%d",array[u]);
  return 0;
}
