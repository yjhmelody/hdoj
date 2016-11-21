#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

class Array
{
public:
    int catFood;
    int JavaBean;
    double proportion;
};
//void qsort(void*base,size_t num,size_t width,int(__cdecl*compare)(const void*,const void*));
// ��������1 �����������׵�ַ 2 �����д�����Ԫ������ 3 ��Ԫ�ص�ռ�ÿռ��С 4 ָ������ָ��
int cmp(Array &arr1, Array &arr2)
{
    return arr1.proportion > arr2.proportion;
}

int main()
{
    int M,N;//M pounds , N lines
    while(cin>>M>>N)
    {
        double sum = 0;
        double proportion;
        if(M == -1 && N == -1)
            break;
        Array *arr = new Array[N];

        for(int i = 0;i < N;i++)
        {
            cin>>arr[i].JavaBean>>arr[i].catFood;
            arr[i].proportion = arr[i].JavaBean / 1.0 / arr[i].catFood;
        }
        sort(arr,arr+N,cmp);
        for(int i = 0;i < N && M;i++)       //����catFood �ر������
        {
            if(M >= arr[i].catFood)
            {
                M -= arr[i].catFood;
                sum += arr[i].JavaBean;
            }
            else
            {
                sum += M * arr[i].proportion;
                M = 0;
            }
        }
        printf("%.3lf\n",sum);
    }
    return 0;
}
