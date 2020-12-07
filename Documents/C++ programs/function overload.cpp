#include<iostream>
using namespace std ;
float area (float a ,float b){
	return (a*b );
}
float area (float c ){
	return (3.14 *c*c);
}
int main(){
	int type ;
	cout << "To calculate the area of a  rectangle  Enter : 1 , To calculate the area of a circle enter : 2 ...  !!any other entry will be invalid !! "<<endl ;
	cin>>type ;
	if (type== 1){
		float length ,width ;
	cout<<"Enter length :"<< endl ;
	cin>> length ;
	cout<<"Enter width :"<< endl ;
	cin>> width;
	cout<< "The area of the box is :  "<<area(length,width) <<endl ;
	} else if (type == 2){
		float  radius;
	cout<<"Enter the radius :"<<endl ;
	cin>>radius ;
	cout<<"The area of the circle is :  " <<area (radius)<<endl ;
		
	} else{
		cout<< " Invalid choice !!" <<endl ;
	}
	
	
	return 0 ;
}
