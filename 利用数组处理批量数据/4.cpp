#include<stdio.h>
int main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100};
	int temp1,temp2,n,end,i,j;
	printf("原数组为:\n");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	printf("插入的数据:");
	scanf("%d",&n);
	end=a[9];
	if(n>end)
		a[10]=n;
	else
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>n)
			{
				temp1=a[i];
				a[i]=n;
				for(j=i+1;j<11;j++)
				{
					temp2=a[j];
					a[j]=temp1;
					temp1=temp2;
				}
				break;
			}
		}
	}
	printf("现在的数组为:\n");
	for(i=0;i<11;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}