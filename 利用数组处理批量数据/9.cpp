#include<stdio.h>
#define  N  15
int  main()
{
	int i,n,top,bott,mid,loca,a[N],flag=1,sign;
	char  c;
	printf("输入数据:\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<N)
	{
		scanf("%d",&a[i]);
		if(a[i-1]>=a[i])
			i++;
		else
			printf("重新输入:\n");
	}
	printf("\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
	while(flag)
	{
		printf("输入要查找的数:");
		scanf("%d",&n);
		sign=0;
		top=-1;
		bott=N-1;
		if((n>a[0])||(n<a[N-1]))
			loca=-1;
		while((!sign)&&(top<=bott))
		{
			mid=(bott+top)/2;
			if(n==a[mid])
			{
				loca=mid;
				printf("找到数据%d,它的位置是%d\n",n,loca+1);
				sign=1;
			}
			else if(n<a[mid])
				top=mid+1;
			else
				bott=mid-1;
		}
		if(!sign||loca==-1)
			printf("找不到%d.\n",n);
		printf("是否继续(Y/N)?");
		c=getchar();
		scanf("%c",&c);
		if(c=='N'||c=='n')
			flag=0;
	}
	return 0;
}


