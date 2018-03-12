#include<stdio.h>
int main()
{
	int  i,resu;
	char  s1[100],s2[100];
	printf("输入串1:");
	gets(s1);
	printf("\n输入串2:");
	gets(s2);
	i=0;
	while((s1[i]==s2[i])&&(s1[i]!='\0'))
		i++;
	if(s1[i]=='\0'&&s2[i]=='\0')
		resu=0;
	else
		resu=s1[i]-s2[i];
	printf("\n结果:%d.\n",resu);
	return 0;
}