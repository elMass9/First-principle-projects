#include <iostream>
#include <fstream>
#include<string>
#include <sstream>
using namespace std;

int main()
{
	
	string str;
	int op;
	int end =0;
	int op2;

	string strInt;
	int i=0;
	fstream file("lines.txt");

  int save;

	while (getline(file, str)) 
	{
  		if(str == "stop")
  		{
  			cout<<"File reading stopped"<<endl;
  			break;
  			}
      else if(str.length() >4)
      {
         cout<<"File reading stopped"<<endl;
        break;
      }
  		else
  		{
  			if(i!=0){
  				strInt = str;

				stringstream look(str);
  				look >> op;

  				end =save+op;
          save =op;

  				cout<<end<<endl;
  				i++;
  			}
  			else if(i==0)
  			{
  				strInt = str;
  				stringstream geek(str);
  				geek >> op;
  				end = op;
          save = end;

  				cout<<end<<endl;
  				i++;

  			}
 

  			

  		}

	}
	
fstream file2("lines2.txt");
  op;
 end =0;
 op2=0;
 save = 0;
 i=0;

  while (getline(file2, str)) 
  {
      if(str == "stop")
      {
        cout<<"File reading stopped"<<endl;
        break;
        }
      else if(str.length() >4)
      {
         cout<<"File reading stopped"<<endl;
        break;
      }
      else
      {
        if(i!=0){
          strInt = str;

        stringstream look(str);
          look >> op;

          end =save+op;
          save =op;

          cout<<end<<endl;
          i++;
        }
        else if(i==0)
        {
          strInt = str;
          stringstream geek(str);
          geek >> op;
          end = op;
          save = end;

          cout<<end<<endl;
          i++;

        }
        

      }

  }


return 0;	
}
