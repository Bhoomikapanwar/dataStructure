#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=-1000,sum=0,cur;
        cin>>n;
        int a[n];
        int opt[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<" "<<a[i];
        }
        opt[0]=a[0];
        for(int j=1;j<n;j++)
        {
            for(int i=0;i<j;i++)
            {
                int k=i+1;
                while(k!=j)
                {
                    sum=sum+a[k];
                    k++;
                }
                cur=((j-i)*sum)+opt[i];
                if(cur>max)
                max=cur;
            }
            opt[j]=max;
        }
        cout<<endl<<opt[n-1];
    }
    return 0;
}

