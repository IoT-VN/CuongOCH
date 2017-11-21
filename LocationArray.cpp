#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>


int main(int n,int a[])
{
	
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n;i++)
	{
		printf("nhap gia tri thu %d\n", i+1);
		scanf("%d", &a[i]);
	}
	int min;
	int b[100];
	min=a[0];
	for(int i=0;i<n;i++)
	{
		
		if(a[i]<min)
		{
			min=a[i];
			b[i] = i;
			printf("Vi tri: %d\n",b[i]);
		}
		
	}
	printf("GTNN: %d\n",min);
	return 0;
}
