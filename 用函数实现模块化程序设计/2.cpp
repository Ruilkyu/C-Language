#include<stdio.h>
#include<math.h>
float x1,x2,disc,p,q;
int main()
{
	void greater(float,float);
	void equal(float,float);
	void smaller(float,float);
	float a,b,c;
	printf("输入a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("方程式:%5.2f*x*x+%5.2f*x+%5.2f=0\n",a,b,c);
	disc=b*b-4*a*c;
	printf("根:\n");
	if(disc>0)
	{
		greater(a,b);
		printf("x1=%f\t\tx2=%f\n",x1,x2);
	}
	else if(disc==0)
	{
		equal(a,b);
		printf("x1=%f\t\tx2=%f\n",x1,x2);
	}
	else
	{                                                  //复根
		smaller(a,b);
		printf("x1=%f+%fi\tx2=%f-%fi\n",p,q,p,q);
	}
	return 0;
}

void greater(float a,float b)
{
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
}
void equal(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void smaller(float a,float b)
{
	p=-b/(2*a);
	q=sqrt(-disc)/(2*a);
}