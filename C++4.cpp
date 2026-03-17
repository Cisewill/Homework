#include <iostream>
using namespace std;

int main(){
	
	float w = 25.0;
	float h = 15.0;
	
	float p1 = ( w + h ) * 2 ;
	cout << "Perimeter is " << p1 << endl ;
	
	float p2 = w + h * 2 ;
	cout <<"Wrong perimeter is " << p2 << endl ;
	
	return 0 ;
}
