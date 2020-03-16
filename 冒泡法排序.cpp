#include<stdio.h>
#include<math.h>
int main(void)
{
	int m,n,i,j,k,x,temp,z;
	scanf("%d %d",&n,&m);
	    int number[n];
        for(i=0;i<n;i++)
	        scanf("%d",&number[i]);
	if(n>m){
    	x=m;
    	if(m==0){
    	  for(i=0;i<n-1;i++)
	        printf("%d ",number[i]);
	        printf("%d",number[i]);
    	  return 0;
    	}
	    for(j=m;j<n;j++){
	        printf("%d ",number[j]);
	    }
	    for(k=0;k<m-1;k++)
         	printf("%d ",number[k]);
        printf("%d",number[k]);
	}
	else {
		z=m%n;
	    for(j=z;j<n-1;j++){
	        printf("%d ",number[j]);
	    }
	    if(z%n==0){
	      printf("%d",number[j]);
	      return 0;
	    }
	    else{
	      printf("%d ",number[j]);
	    }
	    for(k=0;k<z-1;k++)
         	printf("%d ",number[k]);
        printf("%d",number[k]);
	}
	return 0;
	}
	
	
