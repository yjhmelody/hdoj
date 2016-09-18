#include<iostream>
#include<algorithm>
using namespace std;
int  mergesort(int*,int ,int);
void merge(int*,int,int,int);
int mergesort(int a[],int p,int r)//p,r�����½� 
{ 
	if(p>=r)
	return 0;
	int i,j,k,q;//q�ǹ鲢������м�����
	q=(p+r)/2;
	mergesort(a,p,q);
	mergesort(a,q+1,r);//�ݹ�
	merge(a,p,q,r);//������������Ĳ���
	return 1;//�ɹ� 
}
void merge(int a[],int p,int q,int r)//�����ĵݹ����
{									//q�ǹ鲢������м�����
	int n1=q-p+1,n2=r-q;//���������Ԫ�ظ��� 
	int b[10005],c[10005],i,j,k;
	for(i=0;i<n1;++i)
		b[i]=a[p+i];//���ΰ�a������鿽����b������ 
	b[i]=2147483647;
	
	for(i=0;i<n2;++i)
		c[i]=a[q+1+i];//ͬ��
	c[i]=2147483647; 
	i=j=0;	//������ĳ�ʼ���±�����
	for(k=p;k<=r;k++)
	{
		if(b[i]<=c[j])
		{
			a[k]=b[i++];//�߱Ƚϱ�����������������
			
		} 
		else
		{
			a[k]=c[j++];//����˼���Ѿ��������Ϊ1��Ԫ�أ����Թ鲢ʱ������
		
		}
	}
} 
int cmp(const void*a,const void*b)
{
	return *(int*)a - *(int*)b;
}

void shellsort(int a[],int p,int r)
{
	int i,j,k,h=1,len=r-p+1,temp;
	while(h<len/3)
		h=h*3+1;
	while(h>=1)
	{
		for(i=h;i<len;++i)
		{
			temp=a[i+p];
			for(j=i+p;j>=h && a[j-h]>temp;j-=h)
				a[j]=a[j-h];
			a[j]=temp;
		}
		h=(h-1)/3;
	}
}



void heapAdjust(int array[],int i,int length)
{
    int child;
    int temp;
    for(;2*i+1<length;i=child)
    {
        //�ӽ���λ��=2*�������λ�ã�+1
        child=2*i+1;
        //�õ��ӽ���нϴ�Ľ��
        if(child<length-1&&array[child+1]>array[child])
		//�ж��Ƿ�������ӽڵ� �������&&�Ҵ������ѡ���� 
			++child;
        //����ϴ���ӽ����ڸ������ô�ѽϴ���ӽ�������ƶ����滻���ĸ����
        if(array[i]<array[child])
        {
            temp=array[i];
            array[i]=array[child];
            array[child]=temp; 
        }
        else break; //�����˳�ѭ��
    }
}
//�������㷨
void heapsort(int array[],int length)
{
    int i;
    //�������е�ǰ�벿��Ԫ�أ�������֮���һ��Ԫ�������е�����Ԫ��
    //length/2-1�����һ����Ҷ�ڵ㣬�˴�"/"Ϊ����
    for(i=length/2-1;i>=0;--i)
    heapAdjust(array,i,length);
    //�����һ��Ԫ�ؿ�ʼ�����н��е��������ϵ���С�����ķ�Χֱ����һ��Ԫ��
    for(i=length-1;i>0;--i)
    {
        //�ѵ�һ��Ԫ�غ͵�ǰ�����һ��Ԫ�ؽ�����
        //��֤��ǰ�����һ��λ�õ�Ԫ�ض��������ڵ��������֮������
        array[i]=array[0]^array[i];
        array[0]=array[0]^array[i];
        array[i]=array[0]^array[i];
        //������С����heap�ķ�Χ��ÿһ�ε�����ϱ�֤��һ��Ԫ���ǵ�ǰ���е����ֵ
        heapAdjust(array,0,i);
    }
}

int a[1000001];
int main()
{
	int n,m,i,j,k;
	while(~scanf("%d%d",&n,&m)&&n&&m)
	{
		for(i=0;i<n;i++)
			scanf("%d",a+i);
	//	qsort(a,n,sizeof(a[0]),cmp);
	//	shellsort(a,0,n-1);
		heapsort(a,n);
		for(i=n-1;i>n-m;i--)
			printf("%d ",a[i]);
		printf("%d\n",a[i]);
	}
	return 0;
}
