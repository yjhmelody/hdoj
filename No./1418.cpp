#include<stdio.h>
int main()
{
	long long int n,m,i,j,k;
	//n�ǵ������m��ƽ�����,k�����߶θ��� 
	while(~scanf("%d%d",&n,&m)&&(n||m))
	{
		k=n+m-2;
		printf("%lld\n",k);
	}
	//��Ϊ�������������32λ���ֵ 
	// ������������ֵ ��32λ�� 
	return 0;
}
