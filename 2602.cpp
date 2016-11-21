#include<iostream>
#include<cstring>
using namespace std;

/**
    01��������
    ��̬�滮
    ״̬ת�Ʒ���
    f[i][v]=max{f[i-1][v],f[i-1][v-capcity[i]]+value[i]};

    01�����Ǵ��������ʱ����㣬
    f[i]ֻ��Ҫ֪��f[i-1]�����
*/

int main()
{
    int T;
    cin>>T;
    int N,V;
    int capacity[1005];
    int value[1005];
    int sum[1005];  //�����±��������

    while(T--)
    {
        cin>>N>>V;
        memset(sum,0,sizeof(sum));
        for(int i = 0;i < N;i++)
        {
            cin>>value[i];
        }
        for(int i = 0;i < N;i++)
        {
            cin>>capacity[i];
        }
        for(int i = 0;i < N;i++)    ///N����Ʒ
            for(int j = V;j >= capacity[i];j--)
                sum[j] = max(sum[j],sum[ j - capacity[i] ]+ value[i]);
        cout<<sum[V]<<endl;
    }
    return 0;
}
