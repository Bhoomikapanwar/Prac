#include <iostream>
using namespace std;

int main() {
    int t,n,m;
    cin>>t;
    while(t)
    {
        cin>>n>>m;
        int a[n][m];
        int one=-1,row=-1;
        for(int i=0;i<n;i++)
        {
            int initial=1;
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1 && initial==1)
                {
                    initial=0;
                    if(j>one)
                    {
                        one=j;
                        row=i;
                    }
                }
            }
        }
        cout<<row<<"\n";
        t--;
    }
	return 0;
}
