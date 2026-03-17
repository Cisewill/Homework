#include<iostream>
using namespace std;

int main(){
	
	const int ASCII_Difference = 'a' - 'A' ;
	cout << "The difference of ASCII code is " << ASCII_Difference << endl ;
	
	char original = 'G' ;
	cout << "Original letter is " << original
	<< ", and its ASCII code is " << (int)original << endl ;
	
	char converted = 'g' ;
	cout << "Converted letter is " << converted
	<< ", and its ASCII code is " << (int)converted << endl ;
	
	return 0 ;
}
