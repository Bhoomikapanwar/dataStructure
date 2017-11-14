#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        int i=n-2;
        int temp=a[n-1];
        while(i>=0)
        {
            a[i+1]=a[i];
            i--;
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
return 0;
}
