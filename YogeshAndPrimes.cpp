#include <bits/stdc++.h>
using namespace std;

bool isprime(int p)
{
  bool t=1;
  for(int i=2;i<=(p/2);i++)
  {
    if(p%i==0)
    {	t=0;
      break;
    }      
  }
  return t;
}

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int a, b, k,prime,count=0;
    bool t;
    cin>>a>>b>>k;
    
    for(int p=a;p<=b;p++)
    {
      t=isprime(p);
      if(t==1)
      {
        count++;
        if(count==1)
        prime=p;
        if(count==k)
          break;
      }
    }
    
    if(count==k)
    cout<<prime<<endl;
	else
    cout<<-1<<endl;
  }
  return 0;
}
