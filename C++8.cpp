#include<iostream>
using namespace std;
int main(){
	
	float sumPos = 0.0 ;
	float sumNeg = 0.0 ;
	float number ;
	
	cout << "Enter floating-pointing numbers(0 ends inputting):";
	
	do{
			cin >> number ;
			
			 if (number > 0){
				sumPos += number;
			   }
			 if (number < 0){
			 	sumNeg += number;
			 }
			
	}while(number != 0);
	
	cout <<"The sum of positive number is " << sumPos << endl;
	cout <<"The sum of negative number is " << sumNeg << endl;
	
	return 0;
}
