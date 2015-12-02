#include <iostream>
using namespace std;

int VowelCount(string str) { 

  // code goes here
  // create a variable that counts the number of vowels in the string
  // then create a for loop that checks each character to see if its a vowels
  int vowels = 0;
  for(int i = 0; i < str.length(); i++){
    if((str[i] == 'a') || (str[i] == 'A')){
     vowels++;
    }
    if((str[i] == 'e') || (str[i] == 'E')){
     vowels++; 
    }
    if((str[i] == 'i') || (str[i] == 'I')){
     vowels++; 
    }
    if((str[i] == 'o') || (str[i] == 'O')){
     vowels++; 
    }
    if((str[i] == 'u') || (str[i] == 'U')){
     vowels++; 
    }
  }
  return vowels; 
            
}

int main() { 
  
  // keep this function call here
  cout << VowelCount(gets(stdin));
  return 0;
    
}           
