#include<iostream>
using namespace std;
int main()
{
int bin[4]={0,0,0,0};
int r=18;
int f=0;
while(r>0){
int k=r%2;
bin[f]=k;
r=r/2;
f++;
}
cout<<endl;
for(f=3;f>=0;f--){
cout<<bin[f];
}
cout<<endl;
return 0;
}
