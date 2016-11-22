#include<iostream>

using namespace std;
/**
    ���鼯
    ����������ĸ���ͬʱ��
    �����������������ô�Ͳ�����Ҫ��
*/
int find(int x,int *arr)
{
    int parent = x;
    while(arr[parent] != parent)
        parent = arr[parent];
    return parent;
}

bool merge(int x,int y,int *arr)
{
    int finalX,finalY;
    finalX = find(x,arr);
    finalY = find(y,arr);
    if(finalX != finalY)
    {
        arr[finalX] = finalY;
        return false;   ///ԭ������ͬ����Ϊfalse
    }
    return true;
}


int main()
{
    int x,y;
    bool flag = true;
    int arr[100010];
    bool mark[100010];
    while(cin>>x>>y)
    {
        if(x == -1 && y == -1)
            return 0;
        for(int i = 1;i < 100010;i++)
        {
            mark[i] = false;
            arr[i] = i;
        }
        int flag = true;
        while(true)
        {
            if(x == 0 && y == 0)
                break;
            if(merge(x,y,arr))
                flag = false;
            mark[x] = mark[y] = true;
            cin>>x>>y;
        }
        if(!flag)
            cout<<"No"<<endl;
        else
        {
           int count = 0;
           for(int i = 1;i <100010;i++)
           {
               if(mark[i] && arr[i] == i)   ///ͳ�Ƽ��ϵĸ���������1��Ϊyes
                    count++;
           }
           if(count > 1)
                cout<<"No"<<endl;
           else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}







