#include <iostream>  
#include <cstdio>  
#include <string>  
#include <cstring>  
#include <algorithm>  
#include <cmath>  
#include <queue>  
#include <vector>  
#include <set>  
#include <stack>  
#include <map>  
#include <climits>  
  
using namespace std;  
  
#define LL long long  
const int INF=0x3f3f3f3f;  
  
int n,k;  
int a[200];  
  
int main()  
{  
    while(~scanf("%d %d",&n,&k))  
    {  
        for(int i=0;i<n;i++) scanf("%d",&a[i]);  
        k=k%n;  
        printf("%d",a[k]);  
        for(int i=k+1;i<n;i++) printf(" %d",a[i]);  
        for(int i=0;i<=k-1;i++) printf(" %d",a[i]);  
        printf("\n");  
    }  
    return 0;  
}  

