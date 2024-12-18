#include<iostream>
using namespace std;
class Shape{
   public: virtual area (){
        cout<<"area of shape is";
    } 
};
class Square :public Shape{ 
 public:   void area(int side){
        cout<<side*side<<endl;
    }
};
class Rectangle: public Shape{
 public:   void area(int l,int b){
        cout<<l*b<<endl;
    }
};
int main(){
    Square s;
    s.area(5);
    Rectangle r;
    r.area(5,6);
    return 0;
}