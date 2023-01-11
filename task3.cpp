#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int studentNum;
	int i = 0;

	while(i<2){
	cout<<"Enter your student number: ";
	cin>>studentNum;

	srand(14);
	int random;

	if(studentNum%2==0)
	{
		random = rand()%90 +10;

		cout<<random<<" is ready to take on COS 132!"<<endl;

	}
	else
	{
		cout<<studentNum<<" is really excited for COS 132!"<<endl;
	}
	i++;
}

	return 0;
}
