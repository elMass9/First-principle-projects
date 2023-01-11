#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	
	float x;
	cout<<"Enter a value of x: ";
	cin>>x;

	float answer= cos(pow(x,2))/(5+2*cos(x)) + sin(pow(x,2))/(5*M_PI) + tan(x)/(cos(x)+sin(x));

	cout<<"The answer is: "<<setprecision(6)<<answer<<endl;
	
	return 0;
}
