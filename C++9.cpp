#include<iostream>
using namespace std;

int main(){
	
	int n ;
	double grade , sum , average;
	int pass = 0;
	int fail = 0;
	
	cout << "Enter the number of students: ";
	cin >> n ;
	
	for(int i = 1; i <= 5; i++){
		cout << "Enter the grade of student " << i << "(0-100)£º";
		cin >> grade;
		
		if (grade < 0 || grade > 100){
			cout << "The grade you entered is invalid!It must be in [0,100]."<< endl;
			i --;
			continue;
		}
		
		sum += grade;
		
		if (grade >= 60 && grade <= 100){
			pass ++;
		}
		
		if (grade >=0 && grade <= 59){
		 	fail ++;
		 }
	}
			
	average = sum / n ;
	
	cout << "Average: "	<< average << endl;
	cout << "Level Pass(60-100): " << pass << endl;
	cout << "Level Fail(0-59): " << fail << endl;
	
	return 0;
}
