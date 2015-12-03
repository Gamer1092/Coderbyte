#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

string SecondGreatLow(int arr[], int size) { 

  // code goes here   
  sort(arr, arr+size);
  stringstream answer;
  int secondLow = 0;
  int secondGreat = 0;
  
  if(size == 2){
    secondLow = arr[0];
    secondGreat = arr[1];
  }
  
  else{
    secondLow = arr[1];
    secondGreat = arr[size-2];
    if(arr[1] == arr[0]){
      secondLow = arr[2];
    }
    if(arr[size-2] == arr[size-1]){
      secondGreat = arr[3];
    }
  }
  answer << secondLow << " " << secondGreat;
  return answer.str(); 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << SecondGreatLow(A, sizeof(A)/sizeof(*A));
  return 0;
    
}           
