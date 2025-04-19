#include<iostream>
using namespace std;
int main()
{
cout<<"new branch"<<endl;
int n;cin>>n;
for(int i=2;i<n;i++)
while(n%i==0)
{
cout<<i<<endl;
n/=i;
}
    return 0;
}