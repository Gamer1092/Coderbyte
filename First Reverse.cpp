#include <stdio.h>
using namespace std;

string FirstReverse(string str) { 

  // code goes here   
  // Using a for loop, append the original string to the new reversed string
  // starting from the back
  string reversedString = "";
  for(int i = str.length() - 1; i >= 0; i--)
    reversedString += str[i];
  return reversedString; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
}           
