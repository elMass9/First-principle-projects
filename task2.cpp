#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int i=0;
	while(i<3){

	string name;
	cout<<"Enter your name: ";
	getline(cin,name);

	while(name.length()<7)
	{
		name="*"+name;
	}
	cout<<"Howdy: "<<name<<endl;
	i++;
}


	return 0;
}
