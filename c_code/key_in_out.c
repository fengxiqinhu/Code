//输入输出重定向

#include <stdio.h>

void main(void)
{
    int i = 10;
    const int a[10]={1,2,3,4,5,6,7,8};
    int * const p = a;
    p[1]=22;
    printf("%d\n",*(p+1));
    
    while (i--)
    {
       printf("%d\n",a[i]);
    }
    
    getchar();

}