#include<stdio.h>
int main()
{
	int number;
	printf("Enter the Number: ");
	scanf("%d",&number);
	int i,j;
	int prime[number];
	int index=0;
	for(i=1;i<number+1;i++)
	{
		int count=0;
		for(j=1;j<=number;j++)
		{
			if(i%j==0)
			{
				count=count+1;
			}
		}
		
			if(count==2)
			{
			prime[index]=i;
			index=index+1;
			}
	}	
	int ref=0;
	for(i=0;i<=index;i++)
	{
		if(number==prime[i])
		{
		ref++;
		printf("Euler Toient Series is : %d",number-1);
		
		break;
		}
 }
 int ref2=0;
  	int mul1,mul2;
int count3=0,count4=0;
 if(ref==0)
{
 	for(i=1;i<number;i++)
 	{
 		for(j=1;j<number;j++)
 		{
 			if((i*j)==number)
 			{
 				mul1=i;
 				mul2=j;
			 }
		 }
	 }
	for(i=0;i<index;i++)
	{
		if(mul1==prime[i])
		{
			count3++;
		}
		if(mul2==prime[i])
		{
			count4++;
		}
	}
	if(count3==1 && count4==1)
	{
		printf("\nEuler Toient series is : %d",(mul1-1)*(mul2-1));
		ref2++;
	}		
}
if(ref2==0)
{
float num1=number;
	for(i=0;i<index;i++)
	{
		if(number%prime[i]==0)
		{
			num1=num1*(1.0-(1.0/prime[i]));
		}
	}
printf("\n The Eulers Toient Number is %.f",num1);	
}
		
}
