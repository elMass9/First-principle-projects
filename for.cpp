#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	

for (int iteratior = 1; iteratior <3; iteratior++){

	string pair; 
	int iterations = 0;
	cout<<"Enter a pair: ";
	cin>>pair;


	if(pair[0]=='*'||pair[0]=='+'||pair[0]=='-')
	{
		string number ="";
		for(int i=2;i<pair.length();i++)
		{
			number += pair[i];
		}
		stringstream geek(number);
		geek >> iterations;

		int result =iterations;

		for(int j=0;j<iterations;j++)
		{
			if(pair[0]=='+')
				result += iterations;
			else if(pair[0]=='-')
				result -= iterations;
			else
				result = result*iterations;

		}

		cout<<"Result: "<<result<<endl;

	}
	else
	{

		cout<<"Result: "<<iterations<<endl;
	}

	
}


return 0;	
}
