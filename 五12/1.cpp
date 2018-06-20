#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    a[0] = 1;
    for(i = 0;i<n;i++)
    {
        a[i+1] = 2*(a[i]+1);        
    }
    printf("%d\n",a[n-1]);

    return 0;
}