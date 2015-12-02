#include <iostream>
#include <cctype>
using namespace std;

string SimpleSymbols(string str) { 

  // code goes here  
  for(int i = 0; i < str.length(); i++){
    if(isalpha(str[i])){
      if((str[i-1] == '+') && (str[i+1] == '+')){
       return "true"; 
      }
      
      else{
       return "false"; 
      }
    }
  }
  return "false"; 
            
}

int main() { 
  
  // keep this function call here
  cout << SimpleSymbols(gets(stdin));
  return 0;
    
}           
