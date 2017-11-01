#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n;
        int a[n],index[1000000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            index[a[i]]=i;
        }
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
            if(index[x])
            cout<<(index[x]+1)<<endl;
            else
            cout<< -1 <<endl;
        }
    }
    return 0;
}
