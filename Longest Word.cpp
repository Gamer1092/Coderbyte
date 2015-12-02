#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string LongestWord(string sen) { 

  // code goes here
  int alphaCount = 0;
  int maxLength = 0;
  string word = "";
  string LongestWord = "";
  
  for(int i = 0; i < sen.length(); i++){
    if(isalpha(sen[i])){
      word += sen[i];
      alphaCount++;
    }
    
    else if(sen[i] == ' '){
      alphaCount = word.length();
      if(word.length() > maxLength){
        maxLength = word.length();
        LongestWord = word;
        word = "";
      }
    }
  }
  
  return LongestWord;            
}

int main() { 
  
  // keep this function call here
  cout << LongestWord(gets(stdin));
  return 0;
    
}           
