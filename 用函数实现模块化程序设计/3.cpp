#include<stdio.h>
int main()
{
	int prime(int);
	int n;
	printf("����һ������:");
	scanf("%d",&n);
	if(prime(n))
		printf("%d��һ������.\n",n);
	else
		printf("%d����һ������.\n",n);
	return 0;
}

int prime(int n)
{
	int flag=1,i;
	for(i=2;i<n/2&&flag==1;i++)
		if(n%i==0)
			flag=0;
		return flag;
}