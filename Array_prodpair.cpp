#include <iostream>
using namespace std;
int main()
{
    int t,n,p;
    cin>>t;
    while(t){
        int flag=0;
        cin>>n>>p;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((a[j]*a[k])==p)
                {
                flag=1;
                break;
                }
            }
        }
        if(flag==1)
        cout<<"Yes";
        else 
        cout<<"No";
        cout<<"\n";
        t--;
    }
    return 0;
}
