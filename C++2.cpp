#include<iostream>
using namespace std;

int main(){
	
    double Speed=60.5;       //km/h	
    int Time=3;     //hours
    
    double Distance_km=Speed*Time;
    const int meter_per_km=1000;
    double Distance_m=Distance_km*meter_per_km;
    
    cout<<"Speed:"<<Speed<<"km/h"<<endl;
    cout<<"Time:"<<Time<<"hour"<<endl;
    cout<<"Distance:"<<Distance_km<<"km"<<endl;
    cout<<"Distance:"<<Distance_m<<"m"<<endl;
    
    return 0;
}
