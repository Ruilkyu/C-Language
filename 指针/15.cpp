#include<stdio.h>
int main()
{
	void avsco(float *,float *);
	void avcour1(char(*)[10],float *);
	void fail2(char course[5][10],int num[],float *pscore,float aver[4]);
	void good(char course[5][10],int num[4],float *pscore,float aver[4]);
	int i,j,*pnum,num[4];
	float score[4][5],aver[4],*pscore,*paver;
	char course[5][10],(*pcourse)[10];
	printf("input course:\n");
	pcourse=course;
	for(i=0;i<5;i++)
		scanf("%s",course[i]);
	printf("input NO. and scores:\n");
	printf("NO.");
	for(i=0;i<5;i++)
		printf("%s",course[i]);
	printf("\n");
	pscore=&score[0][0];
	pnum=&num[0];
	for(i=0;i<4;i++)
	{
		scanf("%d",pnum+i);
		for(j=0;j<5;j++)
			scanf("%f",pscore+5*i+j);
	}
	paver=&aver[0];
	printf("\n\n");
	avsco(pscore,paver);
	avcour1(pcourse,pscore);
	printf("\n\n");
	fail2(pcourse,pnum,pscore,paver);
	printf("\n\n");
	good(pcourse,pnum,pscore,paver);
	return 0;
}


void avsco(float *pscore,float *paver)                        //��ÿ��ѧ����ƽ���ɼ�
{
	int i,j;
	float sum,average;
	for(i=0;i<4;i++)
	{
		sum=0.0;
		for(j=0;j<5;j++)
			sum=sum+(*(pscore+5*i+j));
		average=sum/5;
		*(paver+i)=average;
	}
}


void avcour1(char(*pcourse)[10],float *pscore)               //��1�γ̵�ƽ���ɼ�
{
	int i;
	float sum,average1;
	sum=0.0;
	for(i=0;i<4;i++)
		sum=sum+(*(pscore+5*i));
	average1=sum/4;
	printf("course1:%s average score:%7.2f\n",*pcourse,average1);
}


void fail2(char course[5][10],int num[],float *pscore,float aver[4])  //�����ſβ������ѧ��
{
	int i,j,k,label;
	printf("     =======================student who is fail in two courses============ \n");
	printf("NO.");
	for(i=0;i<5;i++)
		printf("%11s",course[i]);
	printf("   average\n");
	for(i=0;i<4;i++)
	{
		label=0;
		for(j=0;j<5;j++)
			if(*(pscore+5*i+j)<60.0)
				label++;
			if(label>=2)
			{
				printf("%d",num[i]);
				for(k=0;k<5;k++)
					printf("%11.2f",*(pscore+5*i+k));
				printf("%11.2f\n",aver[i]);
			}
	}
}


void  good(char course[5][10],int num[4],float *pscore,float aver[4])  //�ҳɼ�����ѧ��������85�����ϻ�ƽ��90���ϣ�
{
	int i,j,k,n;
	printf("     ======================student whoes score is good===================== \n");
	printf("NO. ");
	for(i=0;i<5;i++)
		printf("%11s",course[i]);
	printf("    average\n");
	for(i=0;i<4;i++)
	{
		n=0;
		for(j=0;j<5;j++)
			if(*(pscore+5*i+j)>85.0)
				n++;
			if((n==5)||(aver[i]>=90))
			{
				printf("%d",num[i]);
				for(k=0;k<5;k++)
					printf("%11.2f",*(pscore+5*i+k));
				printf("%11.2f\n",aver[i]);
			}
	}
}