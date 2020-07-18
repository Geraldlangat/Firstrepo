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
Rectangle T;
T.setLength(5);
T.setWidth(4);
T.display();
}


