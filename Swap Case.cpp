#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

string SwapCase(string str) { 

  // code goes here 
  for(int i = 0; i < str.length(); i++){
    //uppercase becomes lowercase
    if((isalpha(str[i])) && (isupper(str[i]))){
     str[i] = tolower(str[i]); 
    }
    
    //lowercase becomes uppercase
    else if((isalpha(str[i])) && (islower(str[i]))){
      str[i] = toupper(str[i]);
    }
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << SwapCase(gets(stdin));
  return 0;
    
}           
