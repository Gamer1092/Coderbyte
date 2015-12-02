#include <iostream>
using namespace std;

int WordCount(string str) { 

  // code goes here
  int words = 1;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == ' ')
      words += 1;
  }
  return words; 
            
}

int main() { 
  
  // keep this function call here
  cout << WordCount(gets(stdin));
  return 0;
    
}           
