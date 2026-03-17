#include<iostream>
using namespace std;

int main(){
	int a = 35;
	int b = 6;
	
	int integer = a / b ;
	cout << "a/b (integer result) is " << integer << endl;
	
	double precise =static_cast<double>(a)/b;
	cout <<"a/b (precise result) is " << precise << endl;
	
	return 0;
}
