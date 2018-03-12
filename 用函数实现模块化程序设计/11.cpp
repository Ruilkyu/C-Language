#include<stdio.h>
#include<string.h>
#define N 10
char str[N];
int main()
{
	void sort(char []);
	int  i,flag;
	for(flag=1;flag==1;)
	{
		printf("ÊäÈë×Ö·û´®:\n");
		scanf("%s",&str);
		if(strlen(str)>N)
			printf("×Ö·û´®Ì«³¤£¬ÇëÖØÊäÈë!");
		else
			flag=0;
	}
	sort(str);
	printf("ÅÅĞòºóµÄ×Ö·û´®:\n");
	for(i=0;i<N;i++)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}


void sort(char str[])
{
	int i,j;
	char k;
	for(j=1;j<N;j++)
		for(i=0;(i<N-j)&&(str[i]!='\n');i++)
			if(str[i]>str[i+1])
			{
				k=str[i];
				str[i]=str[i+1];
				str[i+1]=k;
			}
}
