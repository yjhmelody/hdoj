#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n)&&n)
    {
        int i,j,k,count=0,t,a[1001];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)//ð�ݱȽϵ�����
        {
            for(j=0;j<n-1-i;j++)//ĳ�˱ȽϵĴ���
            {
                if(a[j]>a[j+1])
                {
                    count++;//��¼�����Ĵ���
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
