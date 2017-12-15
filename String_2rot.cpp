#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int flag=1;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    if(a.length()!=b.length())
	    flag=0;
	    else
	    {
	    int len=a.length();
	    for(int i=0;i<len;i++)
	    {
	        int j=((len-2)+i)%len;
	        if(a[i]==b[j] || a[i]==b[(i+2)%len])
	        {
	            
	        }
	        else
	        {
	        flag=0;
	        break;
	        }
	    }
	    }
	    if(flag==0)
	    cout<<0;
	    else
	    cout<<1;
	    cout<<"\n";
	    t--;
	}
	return 0;
}
