#include<iostream>
#include<cstring>
using namespace std;

/**
    ��ȫ��������
    ��̬�滮
    ״̬ת�Ʒ���
    f[i][v]=max{f[i-1][v],f[i-1][v-capcity[i]]+value[i]};

    ��ǰ�����㣬��Ϊ������������ж��ͬһ����Ʒ
*/

int main()
{
    int C;
    cin>>C;
    while(C--)
    {
        int n,m;
        cin>>n>>m;                  ///n�Ǿ���
        int p[505],h[505],c[505];   ///p�Ǽ۸� h������
        memset(c,0,sizeof(c));
        int tempp,temph,tempc;
        int count = 0;
        for(int i = 1; i <= m;i++)
        {
            cin >>tempp>>temph>>tempc;
            int t = 1;
            while(tempc >= t)
            {
                p[count] = tempp * t;
                h[count] = temph * t;
                count++;
                tempc -= t;
                t <<= 1;
            }
            if(tempc > 0)   //�������ʣ�࣬�ٷ�һ��
            {
                p[count] = tempp * tempc;
                h[count] = temph * tempc;
                count++;
            }
        }
        for(int i = 0;i < count;i++)    ///count�����ǲ�ֺ�ĸ���
            for(int j = n;j >= p[i];j--)
                c[j] = max( c[j], c[ j-p[i] ] + h[i] ); ///���������±���0��ʼ  ��������Ǵ�1��ʼ
        cout<<c[n]<<endl;
    }

    return 0;
}
