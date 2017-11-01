#include <iostream>
using namespace std;

int main()
{
    int n,q,a,b,c,query;
    cin>>n>>q;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];  //0 or 1 only
    }
    while (q--)
    {
        cin>>query;
        if(query==0)
        {
            cin>>a>>b;
            //cout<<arr[b-1];
            if(arr[b-1]==1)
            cout<<"ODD";
            else
            cout<<"EVEN";
            
            cout<<endl;
        }
        else
        {
            cin>>c;
            //cout<<arr[c-1];
            if(arr[c-1]==1)
            arr[c-1]=0;
            else
            arr[c-1]=1;
        }
    }
    return 0;
}
