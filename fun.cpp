#include <iostream>
#include <fstream>
#include<string>
#include <sstream>
using namespace std;

string echo(string str)
{
  return str;
}
string echo(string str,int integer)
{
  stringstream ss;
  string result;

  ss<<integer;
  ss>>result;

  if(integer == 0)
  {
    return str+result;
  }
  else if(integer%2==0)
  {
    ss<<integer;
    ss>>result;

    return str+result;
  }

  else
  {
    return result+str;
  }
}
int main()
{
	
	string strin;

	int i=0;
	fstream file("values.txt");


	while (getline(file, strin)) 
	{
  	
      cout<<echo(strin)<<endl;
      cout<<echo(strin,i)<<endl;
      i++;
	}

return 0;	
}
