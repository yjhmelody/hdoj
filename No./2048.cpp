#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	double b[30]={0,0,1};
	for(i=3;i<=20;i++)
		b[i]=( b[i-1]+b[i-2] )*(i-1);//ǰ��n-1��������ȫû���У���ֻ����һ�����Ժ�͵�n�����еĽ����� 
	scanf("%d",&n);//bͳ�Ƶ���û�鵽����� 
	while(n--)
	{
		scanf("%d",&i);
		for(j=2;j<=i;j++)
			b[i]/=j;
		printf("%.2lf%%\n",b[i]*100);
	}
	return 0;
}
