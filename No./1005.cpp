#include<iostream>
#include<cstdio>
using namespace std;
/**
    ͬ1021��
    n%7==0,1,2,3,4,5,6;
    49�����
    �����ǰ50���Ĺ���
*/
int main()
{
    int A,B,n;
    while(cin>>A>>B>>n)
    {
        int arr[52] = {0,1,1};
        if(!(A || B || n))
        {
            break;
        }
        int flag = 0;
        int cycle,begin;
        //cout<<arr[1]<<endl;
        //cout<<arr[2]<<endl;
        for(int i = 3;i <= 51;i++)
        {
            arr[i] = (arr[i-1] * A + arr[i-2] * B) % 7;
            //cout<<arr[i]<<endl;
            for(int j = 2;j < i;j++)        //������ҵ�����������ͬ�����ҵ�������
            {
                if((arr[j] == arr[i]) && (arr[j-1] == arr[i-1]))  //��ʼ���ڱ仯
                {
                    cycle = i - j;      //��¼����
                    begin = j - 1;      //��¼���ڿ�ʼ���
                    flag = 1;
                    break;              //û�б�Ҫ����������
                }
            }
            if(flag)
            {
               break;
            }
        }
        //cout<<endl;
        if(begin > n)
        {
            cout<<arr[n]<<endl;
        }
        else
        {

            cout<<arr[begin+(n-begin)%cycle]<<endl;
        }

    }
    return 0;
}
