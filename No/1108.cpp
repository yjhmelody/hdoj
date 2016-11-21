#include<iostream>
#include<cstdio>
using namespace std;
/**
շת�����
*/

int Euclidean(int big,int small)
{
    int temp;
    while(small)
    {
        temp = big % small;
        big = small;
        small = temp;
    }
    return big;
}

int main()
{
    int big,small,leastCommonMultiple;
    while(cin>>big>>small)
    {
        leastCommonMultiple = big * small / Euclidean(big,small);
        cout<<leastCommonMultiple<<endl;
    }
    return 0;
}
