#include<iostream>
using namespace std ;
int main(){
	int a , b , c ; 
	int sum = 0 ;
	int Product = 0 ;
	cout<< "enter a number"<<endl ;
	cin>>a;
	cout <<"enter a second number"<< endl ;
	cin >> b ;
	cout << " Enter a third number"<< endl ;
	cin>> c ; 
	sum = a +b+ c ;
	Product = a*b*c ;
	cout << sum << " : is the sum of the two numbers" << endl ;
	cout <<"The product of the two numbers is :"<< Product << endl ;
	
	return 0 ;
}

