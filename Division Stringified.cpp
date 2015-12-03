#include <iostream>
#include <sstream>
using namespace std;

string DivisionStringified(int num1, int num2) { 

  // code goes here
  int answer = num1 / num2;
  stringstream quotient;
  quotient << answer;
  
  return quotient.str(); 
            
}

int main() { 
  
  // keep this function call here
  cout << DivisionStringified(gets(stdin));
  return 0;
    
}           
