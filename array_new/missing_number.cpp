#include <iostream>
using namespace std;
int miss(int a[], int n)
{
    int m=a[n-1];
    int sum1=m*(m+1)/2;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];

    }
cout<< sum1-sum;
}
int main()
{
    int a[]={1,2,4};
    int n=3;
    miss(a,3);
    
}