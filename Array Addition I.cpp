#include <iostream>
using namespace std;

string ArrayAdditionI(int arr[]) { 

  // code goes here   
  int numElements = sizeof(arr)/sizeof(arr[0]);
  int max = arr[numElements - 1];
  int sum = 0;
  for(int i = 0; i < numElements - 2; i++){
   sum += arr[i];
    if(sum == max){
     return "true"; 
    }
    else{
     return "false"; 
    }
  }
  return "false"; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << ArrayAdditionI(A);
  return 0;
    
}           
