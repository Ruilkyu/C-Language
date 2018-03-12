#include<stdio.h>
#define max 1000
int main()
{
	int htoi(char s[]);
	int c,i,flag,flagl;
	char t[max];
	i=0;
	flag=0;
	flagl=1;
	printf("输入一个十六进制数:");
	while((c=getchar())!='\0'&&i<max&&flagl)
	{
		if(c>='0'&&c<='9'||c>='a'&&c<='f'||c>='A'&&c<='F')
		{
			flag=1;
			t[i++]=c;
		}
		else if(flag)
		{
			t[i]='\0';
			printf("十进制数:%d\n",htoi(t));
			printf("continue or not?");
			c=getchar();
			if(c=='N'||c=='n')
				flagl=0;
			else
			{
				flag=0;
				i=0;
				printf("\n输入一个十六进制数:");
			}
		}
	}
	return 0;
}


int htoi(char s[])
{
	int i,n;
	n=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			n=n*16+s[i]-'0';
		if(s[i]>='a'&&s[i]<='f')
			n=n*16+s[i]-'a'+10;
		if(s[i]>='A'&&s[i]<='F')
			n=n*16+s[i]-'A'+10;
	}
	return(n);
}