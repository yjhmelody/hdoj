#include<iostream>
using namespace std;
/**
    �Զ����·���
    �������ϼ���
*/
int main()
{
    int C,N,num;
    cin>>C;
    while(C--)
    {
        cin>>N;
        int arr[N][N] = {0};
        for(int i = 0;i < N;i++)
        {
            for(int j = 0;j <= i;j++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i = N-2;i >= 0;i--)
        {
            for(int j = 0;j <= i;j++)
            {
                arr[i][j] += max(arr[i+1][j],arr[i+1][j+1]);
            }
        }
        cout<<arr[0][0]<<endl;
    }
    return 0;
}
