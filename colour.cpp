#include <iostream>


using namespace std;
int main()
{
    string colour;
    int number;

    int i=0;
    
    for (int i = 0; i < 3; ++i) {
    cout<<"Input a colour: ";
    cin>>colour;
    if(colour!="green"&&colour!="yellow"&&colour!="orange"&&colour!="blue"&&colour!="purple"&&colour!="red") {
            cout<<"Colour not found"<<endl;
       }
    else {
           cout<<"Input a number: ";
           cin>>number;
            if(colour=="orange"||colour=="green"||colour=="purple"){
                if (number==1){
                  cout<<"green,orange,purple"<<endl;
                }
               else if(number==2){
                cout<<colour<<"!"<<endl;
               }
                else if(number==3) {
                     if (colour=="green"){
                      cout<<"orange"<<endl;
                     }
                     
                  else if(colour=="orange"){

                     cout<<"purple"<<endl;
                  }
                  else{
                     cout<<"green"<<endl;
                  }
                 }         
             }
          else if(colour=="blue"||colour=="yellow"||colour=="red"){
             if(number==1){
              cout<<"yellow,orange,red,purple,blue,green"<<endl;
             }
             else if(number==2){
              cout<<colour<<endl;
             }
             else if(number==3){
                 if (colour=="yellow"){
                  cout<<"red"<<endl;
                 }
                else if(colour=="blue") {
                 cout<<"yellow"<<endl;
                }
                else{
                 cout<<"blue"<<endl;
                }
                 
                }
            }
        }
    }
 }
   

