#include <iostream>
using namespace std;

string CheckNums(int num1, int num2) { 

  // code goes here   
  // Compare the two numbers to see which is greater
  // Return true if number 1 is smaller than number 2
  // Return false if number 2 is smaller than number 1
  // Return -1 if both numbers are equal
  if(num1 < num2)
    return "true";
  
  if(num2 < num1)
    return "false";
  
  if(num1 == num2)
    return "-1";
}

int main() { 
  
  // keep this function call here
  cout << CheckNums(gets(stdin));
  return 0;
    
}           
