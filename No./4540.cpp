#include<stdio.h>
#include<math.h>
int n,a[505][505],k;
int max(a,b)
{
	return a>b?a:b;
}
int min(a,b)
{
	return a>b?b:a;
}
                                        //��1��ʼ
int dds(int energy,int depth,int step1��int step2)//���������   ����   ��ǰ��ȵĵ���λ���±�  ֮ǰ�ĵ���λ���±�
{
	if(depth>n)
		return 0;
	int k=a[depth][step1]-a[depth-1][step2];//���ĵ�����

	return ( min(energy +dds( abs(k) ,depth+1,step1+k,step1),
						dds(abs(a[depth][step1]-a[depth-1][step2]),depth,)));
}
int main()
{
	int i,j;
	while(~scanf("%d%d",&n,&k)&&n&&k)
	{
		for(i=0;i<n;i++)
		for(j=0;j<k;j++)
			scanf("%d",&a[i][j]);

	}
	return 0;
}
