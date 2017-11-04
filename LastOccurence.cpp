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
             if (x <= 1000000) //check to ensure we are not accessing array out of bounds as x has constraints to be 1=< x <=10^9 while array is of size 10^6 only 
  	            cout << index[x]+1 << "\n";
  	        else
                cout << "-1" << "\n";
        }
    }
    return 0;
}
