#include <iostream>
#include <cctype>
using namespace std;

string LetterCapitalize(string str) { 

  // code goes here 
  str[0] = toupper(str[0]); //First Letter in the string always gets capitalized
  for(int i = 1; i < str.length(); i++){
    //If there is a space before a letter then that letter is to be capitalized
    if(isalpha(str[i]) && str[i-1] == ' '){
     str[i] = toupper(str[i]); 
    }
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterCapitalize(gets(stdin));
  return 0;
    
}           
