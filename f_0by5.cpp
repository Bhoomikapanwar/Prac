int convertFive(int n)
{
int nno=0,temp,num=0;
while(n>0){
    temp=n%10;
    if(temp==0)
    nno=nno*10+5;
    else
    nno=nno*10+temp;
    n=n/10;
}
while(nno>0){
    temp=nno%10;
    num=num*10+temp;
    nno=nno/10;
}
return num;
}
