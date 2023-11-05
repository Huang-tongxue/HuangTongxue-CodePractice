#include<stdio.h>
#include<windows.h>
int main()
{
printf("Welcomr!!\nPlease sign numbers and we will give you the average of them\n(if you want stop sige a nunmber smaller than 0)");
float score,average=0;
int n=0;
scanf("%f",&score);
while(score>=0)
  {
	average=average+score;
	n++;
	scanf("%f",&score);
	
  }
average=average/n;
if(n=0)
printf("Wrong!!");
else

printf("average=%f",average);





//int a,b=1,c=1;
//scanf("%d",&a);
//while(b<=a)
  // {
	//c=c*b;
	//b++;
   //} 
//printf("%d\n",c);






//	int a=1,sum=0;
//	while(a<=100)
//	{
//	
//	sum+=a;
//	a++;
//	}
//	printf("%d\n",sum);
	return 0;
}
