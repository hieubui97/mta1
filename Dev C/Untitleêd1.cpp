#include <stdio.h>
#define MAX 1000
main()
{
int ary[MAX];
int i,n;
printf("Nhap n = ");
scanf("%d",&n);
for(i=0; i<n; i++)    {
	printf("\n Enter value: %d : ", i+1);
	scanf("%d",&ary[i]);
}
for(i=0; i<n; i++) printf("a[%d]=%d\n",i, ary[i]);
}

