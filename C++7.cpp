#include<iostream>
#include<cctype>
using namespace std;
int main(){
	
	char In;
	
	cout << "Please enter a character:";
	cin >> In;
	
	if(isalpha(In)){
		cout << "'" << In << "' is a letter." << endl;
	}
	
	if( isdigit(In) ){
		cout << "'" << In << "' is a digit." << endl;
	}
	
	if( !isalpha(In) && !isdigit(In) ){
		cout << "'" << In << "' is neither a digit nor a letter." << endl;
	}
	
	return 0;
	
}
