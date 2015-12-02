#include <iostream>
#include <sstream>
using namespace std;

string TimeConvert(int num) { 

  // code goes here   
  stringstream display;
  int hour = num/60; //1 hour = 60 minutes
  int minutes = num % 60; //The remainder shows how many minutes have passed the last hour
  display << hour << ":" << minutes;
  string TimeDisplay = display.str();
  return TimeDisplay; 
            
}

int main() { 
  
  // keep this function call here
  cout << TimeConvert(gets(stdin));
  return 0;
    
}           
