#include<iostream>
using namespace std ;
int sum ( int First_no, int Second_no){
	return First_no + Second_no ;
}
int main(){
	int first_no = 0;
	int second_no = 0;
	cin >> first_no;
	cin >> second_no;
	cout << sum(first_no ,second_no);
	return 0 ;
}
