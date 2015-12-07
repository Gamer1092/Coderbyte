#include <iostream>
#include <algorithm>
using namespace std;

int MeanMode(int arr[], int numElements) { 

  // code goes here
  int sum = 0;
  int max = 1;
  int count = 1;
  int mean;
  int mode;
  
  sort(arr, arr + numElements);
  int first = arr[0];
  sum += first;
  
  for(int i = 1; i < numElements; i++){
    sum += arr[i];
    if(arr[i] == first){
      count += 1;
    }
    else{
      first = arr[i];
    }
    
    if(count > max){
     mode = arr[i]; 
     max = count;
     count = 1;
    } 
  }
  
  mean = sum/numElements;
  if(mean == mode){
    return 1;
  }
  else{
    return 0;
  }
  return 0; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << MeanMode(A, sizeof(A)/sizeof(*A));
  return 0;
    
}           
