#include<iostream>
#include<cctype>
using namespace std;
int main(){
	
	char In;
	
	cout << "Please enter a character:";
	cin >> In;

	bool letter = isalpha ( In );
	bool digit = isdigit ( In );
	bool other = (!letter && !digit);
	
	if( letter ){
		cout << "'" << In << "' is a letter." << endl;
	}
	
	if( digit ){
		cout << "'" << In << "' is a digit." << endl;
	}
	
	if( other ){
		cout << "'" << In << "' is neither a digit nor a letter." << endl;
	}
	
	return 0;
	
}
