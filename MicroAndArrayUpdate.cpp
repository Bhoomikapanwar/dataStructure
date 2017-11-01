#include <iostream>
using namespace std;

int main()
{
    int N, K, T,min;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        int a[N];
        for(int i=0;i<N;i++)
        {
           cin>>a[i];
        }
        min=a[0];
        for(int i=1;i<N;i++)
        {
            if(a[i]<min)
            min=a[i];
        }
             
        if((K-min)>0)
        cout<<K-min<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}
