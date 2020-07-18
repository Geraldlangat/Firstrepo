#include <iostream>
using namespace std;

class Rectangle{
private:
float length;
float width;
public:
void setLength(float L){
length=L;
}
void setWidth(float W){
width=W;
}
int getLength(){
return length;
}
int getWidth(){
return width;
}
float perimeter(){
return 2*(getLength()+getWidth());
}
float Area(){
return getLength()*getWidth();
}
void display(){
cout<<"Length="<<getLength()<<endl;
cout<<"Width="<<getWidth()<<endl;
cout<<"Area="<<Area()<<endl;
cout<<"Perimeter="<<perimeter()<<endl;
}
};
int main(){
int l;
int w;
/*cout<<"Enter Length:";
cin>>l;
cout<<"Enter Width:";
cin>>w;*/
Rectangle T;
cout<<"Enter Length:";
cin>>l;
cout<<"Enter Width:";
cin>>w;
T.setLength(l);
T.setWidth(w);
T.display();
Rectangle G;
cout<<"Enter Length:";
cin>>l;
cout<<"Enter Width:";
cin>>w;
G.setLength(l);
G.setWidth(w);
G.display();
Rectangle f;
cout<<"Enter Length:";
cin>>l;
cout<<"Enter Width:";
cin>>w;
f.setLength(l);
f.setWidth(w);
f.display();
}


