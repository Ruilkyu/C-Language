#include<stdio.h>
int main()
{
	int a[15][15],i,j,k,p,n;
	p=1;
	while(p==1)
	{
		printf("�������n(n=1--15):");
		scanf("%d",&n);
		if((n!=0)&&(n<=15)&&(n%2!=0))
			p=0;                                    //��ֹ����
	}
	for(i=1;i<=n;i++)                               //��ʼ��
		for(j=1;j<=n;j++)
			a[i][j]=0;
		j=n/2+1;                                    //����ħ����
		a[1][j]=1;
		for(k=2;k<=n*n;k++)
		{
			i=i-1;
			j=j+1;
			if((i<1)&&(j>n))                       //��һ�����ڵ�1�У���n��
			{
				i=i+2;
				j=j-1;
			}
			else
			{
				if(i<1)                             //��һ�����ڵ�1��
					i=n;
				if(j>n)                             //��һ�����ڵ�n��
					j=1;
			}
			if(a[i][j]==0)                          //a[i][j]δ����
				a[i][j]=k;
			else
			{
				i=i+2;
				j=j-1;
				a[i][j]=k;
			}
		}
		for(i=1;i<=n;i++)                        //���ħ����
		{
			for(j=1;j<=n;j++)
				printf("%5d",a[i][j]);
			printf("\n");
		}
		return 0;
}
