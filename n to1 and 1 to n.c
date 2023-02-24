#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	
	printf("Enter any Number:");
	scanf("%d",&n);
	printf("Print Numbers Up to %d :\n",n);

	for(i=1;i<=n;i++)
		printf("%d\n", i);
		
    for(i=n;i>=1;i--)
		printf("%d\n", i);
		
    getch();

    return 0;
}