#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string LetterChanges(string str) { 

  // code goes here   
  // Take each letter and replace it with the letter following it
  // (Note: z becomes a)
  for(int i = 0; i < str.length(); i++){
    if(isalpha(str[i]) && (str[i] != 'z' || str[i] != 'Z')){
      str[i] = str[i] + 1;
    }
    
    else if(isalpha(str[i]) && (str[i] == 'z' || str[i] == 'Z')){
      str[i] = str[i] - 25;
    }
  }
  
  //Then take every vowel in the new string and capitalize it
  for(int j = 0; j < str.length(); j++){
    if(islower(str[j]) && str[j] == 'a'){
      str[j] = toupper(str[j]);
    }
    else if(islower(str[j]) && str[j] == 'e'){
      str[j] = toupper(str[j]);
    }
    else if(islower(str[j]) && str[j] == 'i'){
      str[j] = toupper(str[j]);
    }
    else if(islower(str[j]) && str[j] == 'o'){
      str[j] = toupper(str[j]);
    }
    else if(islower(str[j]) && str[j] == 'u'){
      str[j] = toupper(str[j]);
    }
  }
  
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterChanges(gets(stdin));
  return 0;
    
}           
