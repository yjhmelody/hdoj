#include<iostream>
#include<cstdio>
using namespace std;

//���������������� ���������඼��2����2������ �򲻿��ܳ���
// maxNum >= (sum - maxNum) + 2
//ע��int �����
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int num = 0,sum = 0;
        long long int maxNum = 0;
        for(int i = 0 ;i < n;i++)
        {
            scanf("%lld",&num);
            maxNum = maxNum > num ? maxNum : num;
            sum += num;
        }
        if(maxNum >= sum - maxNum + 2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
