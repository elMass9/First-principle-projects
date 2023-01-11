#include <iostream>
using namespace std;
int main() {
	////declare your float variable here.\
	
     float myPi;
     float * piPointer = &myPi;
     
	///User Input
	cout<<"Enter a float number:";
	cin>>myPi;


	cout << *piPointer << endl;

	*piPointer+= 10.3;

	cout << *piPointer << endl;

	//declare your pointer here

	
	return 0;
}
