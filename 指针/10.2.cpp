#include<stdio.h>
int main()
{
	void change(int *p);
    int a[5][5],*p,i,j;
	printf("input matrix:\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		p=&a[0][0];
		change(p);
		printf("Now matrix:\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		return 0;
}


void change(int *p)
{
	int i,j,temp;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
		for(j=i;j<5;j++)
		{
			if(*pmax<*(p+5*i+j))
				pmax=p+5*i+j;
			if(*pmin>*(p+5*i+j))
				pmin=p+5*i+j;
		}
		temp=*(p+12);
		*(p+12)=*pmax;
		*pmax=temp;
		temp=*p;
		*p=*pmin;
		*pmin=temp;
		pmin=p+1;



		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if(i==0&&j==0) continue;
				if(*pmin>*(p+5*i+j))
					pmin=p+5*i+j;
			}
			temp=*pmin;
			*pmin=*(p+4);
			*(p+4)=temp;


			pmin=p+1;
			for(i=0;i<5;i++)
				for(j=0;j<5;j++)
				{
					if((i==0&&j==0)||(i==0&&j==4)) continue;
						if(*pmin>*(p+5*i+j))
							pmin=p+5*i+j;
				}
				temp=*pmin;
				*pmin=*(p+20);
				*(p+20)=temp;


				pmin=p+1;
				for(i=0;i<5;i++)
					for(j=0;j<5;j++)
					{
						if((i==0&&j==0)||(i==0&&j==4)||(i==4)&&j==0) continue;
						if(*pmin>*(p+5*i+j))
							pmin=p+5*i+j;
					}
					temp=*pmin;
					*pmin=*(p+24);
					*(p+24)=temp;
}
