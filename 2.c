#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
    	if(a==b&&b==c&&a==c)
	{
		printf("等边三角形");
	}
		else if(a==b||b==c||a==c)
		{
			printf("等腰三角形");
		}
		else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
		{
			printf("直角三角形");
		}
		else
		{
			printf("普通三角形");
		}
	}
		else
			printf("不是三角形");
		return 0;
}
