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
	int sum;
	switch(datel.month)
	{
	case 1:sum=datel.day;    break;
	case 2:sum=datel.day+31; break;
	case 3:sum=datel.day+59; break;
	case 4:sum=datel.day+90; break;
	case 5:sum=datel.day+120;break;
	case 6:sum=datel.day+151;break;
	case 7:sum=datel.day+181;break;
	case 8:sum=datel.day+212;break;
	case 9:sum=datel.day+243;break;
	case 10:sum=datel.day+273;break;
	case 11:sum=datel.day+304;break;
	case 12:sum=datel.day+334;break;
	}
	if((datel.year%4==0&&datel.year%100!=0||datel.year%400==0)&&datel.month>=3)
		sum+=1;
	return(sum);
}