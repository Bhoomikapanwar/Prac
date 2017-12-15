#include <iostream>
using namespace std;

int main() {
    int t,a1,b1,a2,b2,x1,y1,x2,y2;
    cin>>t;
    while(t)
    {
        int flag=1;
        cin>>a1>>b1>>a2>>b2;
        cin>>x1>>y1>>x2>>y2;
        if(x1>a2||a1>x2)
            flag=0;
        else if(b1<y2||y1<b2)
            flag=0;
        if(flag==0)
        cout<<0;
        else
        cout<<1;
        cout<<"\n";
        t--;
    }
	return 0;
}
