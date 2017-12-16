#include <iostream>
using namespace std;
struct student
{
    string name;
    int m1;
    int m2;
    int m3;
    int avg;
};
int main() {
    int t,n;
    cin>>t;
    while(t){
        cin>>n;
        student stu[n];
        int avg,max=0;
        for(int i=0;i<n;i++){
            cin>>stu[i].name>>stu[i].m1>>stu[i].m2>>stu[i].m3;
            stu[i].avg=(stu[i].m1+stu[i].m2+stu[i].m3)/3;
            if((stu[i].avg)>max)
                max=stu[i].avg;
        }
        for(int k=0;k<n;k++)
            if(max==stu[k].avg)
            cout<<stu[k].name<<" ";
        cout<<max;
        cout<<"\n";
        t--;
    }
	return 0;
}
