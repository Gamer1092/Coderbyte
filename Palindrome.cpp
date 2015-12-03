#include <iostream>
using namespace std;

string Palindrome(string str) { 

  // code goes here   
  string back = "";
  for(int i = str.length() - 1; i >= 0; i--)
    back = back + str[i];
  
  if(back == str)
    return "true";
  
  if(back != str)
    return "false";
  
  return "false"; 
            
}

int main() { 
  
  // keep this function call here
  cout << Palindrome(gets(stdin));
  return 0;
    
}           
