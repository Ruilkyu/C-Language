#include<stdio.h>
struct ymd
{
	int year;
	int month;
	int day;
}date;
int main()
{
	int days(struct ymd datel);
	printf("input year,month,day:");
	scanf("%d,%d,%d",&date.year,&date.month,&date.day);
	printf("%d/%d is the %dth day in %d.\n",date.month,date.day,days(date),date.year);
	return 0;
}

int days(struct ymd datel)
{
	int i,sum;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	sum=0;
	for(i=1;i<datel.month;i++)
		sum=sum+day[i];
	sum=sum+datel.day;
	if((datel.year%4==0&&datel.year%100!=0||datel.year%400==0)&&datel.month>=3)
		sum=sum+1;
	return(sum);
}
