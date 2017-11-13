#include<iostream>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
int a[n];
int count[1000000000]={0};
while(t--)
{
int min=1000000000;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    count[a[i]]++;
    if(a[i]<min){
        min=a[i];
    }
}
if(count[min]%2==0)
cout<<"Unlucky/n";
else
cout<<"Lucky";
}
}
