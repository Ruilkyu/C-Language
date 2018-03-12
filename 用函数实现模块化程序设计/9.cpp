#include<stdio.h>
int letter,digit,space,others;
int main()
{
	void count(char[]);
	char text[80];
	printf("ÊäÈë×Ö·û´®:\n");
	gets(text);
	printf("×Ö·û´®:");
	puts(text);
	letter=0;
	digit=0;
	space=0;
	others=0;
	count(text);
	printf("\n×ÖÄ¸:%d\nÊı×Ö:%d\n¿Õ¸ñ:%d\nÆäËü:%d\n",letter,digit,space,others);
	return 0;
}

void count(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
			letter++;
		else if(str[i]>='0'&&str[i]<='9')
			digit++;
		else if(str[i]==32)
			space++;
		else
			others++;
}
