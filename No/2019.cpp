#include<stdio.h>
int main()
{
	int n,m,k,a[105],i,j;
	while(~scanf("%d%d",&n,&m)&&!(n==0&&m==0)&&n<=100)
	{
		for(i=0;i<n;++i)
			scanf("%d",a+i);
		for(i=0;a[i]<=m;++i)
						;//��¼��m�����ʼ�±� 
		for(j=n-1;j>=i;--j)
			a[j+1]=a[j];			//�Ӻ��濪ʼ ǰһ�����ָ��Ǻ���һ��
		 a[j+1]=m;
		 for(i=0;i<n;i++)
		 printf("%d ",a[i]);
		 printf("%d\n",a[i]);
	}
	return 0;
}
