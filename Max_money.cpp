#include <iostream>
using namespace std;

int main() {
    int t,n,money;
    cin>>t;
    while(t)
    {
    cin>>n>>money;
    if(n%2==0)
    cout<<(n/2)*money;
    else
    cout<<(n/2+1)*money;
    cout<<"\n";
    t--;
    }
	return 0;
}
