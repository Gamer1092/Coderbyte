#include <iostream>
#include <algorithm>
using namespace std;

string AlphabetSoup(string str) { 

  // code goes here   
  sort(str.begin(), str.end());
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << AlphabetSoup(gets(stdin));
  return 0;
    
}        
