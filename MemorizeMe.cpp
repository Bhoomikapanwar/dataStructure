#include <iostream>
using namespace std;

int main()
{
    int n,q,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    {
        count=0;
        cin>>b[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[i])
            {
                count++;
            }
        }
        if(count>0)
        cout<<endl<<count;
        else
        cout<<endl<<"NOT PRESENT";
    }
    return 0;
}
