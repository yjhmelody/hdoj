#include<stdio.h>
int main()
{
	int n,a[40][40],i,j;
	a[1][1]=1;
	for(i=2;i<=30;i++)//���� 
	{
		
		for(j=2;j<i;j++)//�ڶ����������ڶ��� 
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		a[i][1]=a[i][j]=1;//ÿ�п�ͷ�ͽ�β����1 
	}
	while(~scanf("%d",&n)&&n)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<i;j++)
				printf("%d ",a[i][j]);
			printf("%d\n",a[i][j]);
		}
		printf("\n");
	}
}
