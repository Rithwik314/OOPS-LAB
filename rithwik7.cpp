#include<iostream>
using namespace std;
inline int cmp(int x,int y,int z)
{
    if(x>y&&x>z)
    return(x);
    else if(y>z)
    return(y);
    else
    return(z);
}
int main()
{
    int a,b,c;
    cout<<"enter three numbers :"<<endl;
    cin>>a>>b>>c;
    cout<<cmp(a,b,c)<<"is larger"<<endl;
    return 0;
}


