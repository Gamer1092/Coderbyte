#include <iostream>
using namespace std;

string ABCheck(string str) { 

  // code goes here
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'a' && (str[i+4] == 'b' || str[i-4] == 'b')){
      return "true";
    }
  }
  return "false"; 
            
}

int main() { 
  
  // keep this function call here
  cout << ABCheck(gets(stdin));
  return 0;
    
}           
