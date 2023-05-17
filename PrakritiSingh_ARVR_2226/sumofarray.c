#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,sum=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);  
        sum=sum+ar[i];
          }
        printf("%d\n",sum);
        return 0;
    }