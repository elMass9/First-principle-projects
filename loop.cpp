#include <iostream>
using namespace std;

int main()
{
  int numfromuser;
  int numcount =0;
  int oddcount =0;
  cout << "Enter an int: ";
  cin >> numfromuser;
  while ( numcount <= numfromuser)
  {
    if(numcount%2!=0)
    oddcount ++;
    numcount++;
  }
    cout<<"Number of Odds: "<<oddcount<<endl;
  return 0;
}
