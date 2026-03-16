#include<iostream>
using namespace std;

const double Pi=3.14159;

int main(){
	
    double radius;
    double circumference,area;
    
    radius=2.5;
    circumference=2*Pi*radius;
    area=Pi*radius*radius;
    
    cout<<"radius:"<<radius<<endl;
    cout<<"circumference:"<<circumference<<endl;
    cout<<"area:"<<area<<endl;
    
    radius=0.5;
    circumference=2*Pi*radius;
    area=Pi*radius*radius;
    
    cout<<"radius:"<<radius<<endl;
    cout<<"circumference:"<<circumference<<endl;
    cout<<"area:"<<area<<endl;
    
    return 0;
}
