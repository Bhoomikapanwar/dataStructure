#include <iostream>
using namespace std;
void fastscan(int &number)      //function to improve running time takes input faster
{

    register int c; //directs compiler to use register for storing c
 
    number = 0;
 
    // extract current character from buffer
    c = getchar_unlocked();   //getchar_unlocked faster than getchar but it is thread unsafe
   
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar_unlocked())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
   }
int main()
{
    int n,q,a,b,c,query;
    //cin>>n>>q;
    fastscan(n);
    fastscan(q);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        fastscan(arr[i]);  //0 or 1 only
    }
    while (q--)
    {
        fastscan(query);
        if(query==0)
        {
            fastscan(a);
            fastscan(b);
            //cout<<arr[b-1];
            if(arr[b-1]==1)
            cout<<"ODD";
            else
            cout<<"EVEN";
            
            cout<<endl;
        }
        else
        {
            fastscan(c);
            //cout<<arr[c-1];
            if(arr[c-1]==1)
            arr[c-1]=0;
            else
            arr[c-1]=1;
        }
    }
    return 0;
}
