#include<stdio.h>
int main()
{
	int n,r;
	while(~scanf("%d%d",&n,&r)&&r)
	{
		int i,j,k,t,a[100];
		t=0;
		if(n<0)
		{
			t=1;
			n=-n;
		}
		i=0;
		while(1)
		{
			a[i++]=n%r;//�ؼ����֡����� 
			n=n/r;	//�ȴ������ĩβ���� 
			if(!n)
				break;
		}
		if(t)
			printf("-");
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<10)
				printf("%d",a[j]);
			else
				printf("%c",a[j]+55);
		}
		printf("\n");
	}
	return 0;
}
