#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,i;
    printf("Enter the range to print odd numbers\n");
    scanf("%d%d",&a,&b);
    printf("Odd numbers between %d and %d are\n",a,b);
    i=a;
    do
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
        i++;
    }

    while(i<=b);
    return 0;
}