#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
  int team[5]={0,0,0,0,0};
  int num;
  fstream inputFile;
  string temp;
  inputFile.open("values.txt");
  //use getline function
  while (getline(inputFile,temp))
  {
    stringstream ss;
    char symbol;
    int bin_0,bin_1,bin_2,bin_3,bin_4;
    ss<<temp;
    ss>>bin_0>>symbol>>bin_1>>symbol>>bin_2>>symbol>>bin_3>>symbol>>bin_4;
    team[0] += bin_0;
    team[1] += bin_1;
    team[2] += bin_2;
    team[3] += bin_3;
    team[4] += bin_4;

  }


for(int count=0;count<5;count++)
{
  cout<<team[count]<<endl;
}

   return 0;

}
