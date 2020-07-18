#include<iostream>
using namespace std;
class Circle{
private:
int rad;
public:
void setRad(int r){
rad=r;
}
int getRad(){return rad;}
double Area(){
return 3.142*getRad()*getRad();
}
float Perimeter(){
return 2*3.142*getRad();
}
void display(){
cout<<"Radius ="<<getRad()<<"\n";
cout<<"Area ="<<Area()<<"\n";
cout<<"Perimeter ="<<Perimeter()<<"\n";
}
};
int main(){
int r;
cout<<"Please enter radius:\n";
cin>>r;
Circle C;
C.setRad(r);
C.display();
}

