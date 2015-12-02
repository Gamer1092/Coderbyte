#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string DashInsert(string str) { 

  // code goes here   
  // Create a new string that appends each character of the original string
  // to itself, then adds a dash between two consecutive odd numbers
  string answer;
  for(int i = 0; i < str.length(); i++){
    answer += str[i];
    if(str[i] % 2 == 1 && str[i+1] % 2 == 1){
      answer += '-';
    }
  }
  return answer; 
            
}

int main() { 
  
  // keep this function call here
  cout << DashInsert(gets(stdin));
  return 0;
    
}           
