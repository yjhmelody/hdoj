#include<iostream>
#include<cstdio>
using namespace std;

/**
    ��������
    �ҹ���
    ֱ�ӿ�����
    n%3 == 0,1,2
    �������ֻ��9�����
    ����ԭ��:
    ǰ10�����һ�����ظ�������С�ڵ���9
    (1 2) !0 2 2 1 !0 1 (1 2)
    */
int main()
{
    int n;
    while(cin>>n)
    {
        if(n % 8 == 2 || n % 8 == 6)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
