#include<iostream>
using namespace std;
int main()
{
int f1=0;
int f2=1;
cout<<f1<<"\t"<<f2<<"\t";
for(int i=0;i<8;i++){
int next= f1+f2;
cout<<next<<"\t";
f1=f2;
f2=next;
}
return 0;
}
