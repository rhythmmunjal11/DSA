#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  
  int pivotIndex = s;
  int pivotElement = arr[s];

 
  int count = 0;
  for(int i=s+1; i<=e; i++) {
    if(arr[i] <= pivotElement) {
      count++;
    }
  }
  

  // here rightIndex varible name means that the pivotElement has reached to its position jha pr vo hona chaiye tha 

  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  int i = s;
  int j = e;

  while( i < pivotIndex && j > pivotIndex) {

    while(arr[i] <= pivotElement) {
      i++;
    }
    while( arr[j] > pivotElement){
      j--;
    }

    if(i < pivotIndex && j > pivotIndex)
      swap(arr[i],arr[j]);


  // or we can do this in this way *********** 

    // if(arr[i] <= pivotElement){
    //   i++;
    // }

    // else if (arr[j] > pivotElement)
    // {
    //   j--;
    // }

    // else{
    //   swap(arr[i++] , arr[j++]);
    // }
    

    
    
  }

  return pivotIndex;

}

void quickSort(int arr[], int s, int e) {
  //base case
  if(s >= e)
    return ;

  
  int p = partition(arr, s, e);

  
  quickSort(arr, s, p-1);

 
  quickSort(arr, p+1, e);

}


int main() {

  // int arr[] = {8,1,3,4,20,50,50,50,50,50,5,1,1,1,1,2,2,2,50,30};
  // int n = 20;

  int arr[] = {6,1,20,30,8,5,60,5};
  int n = 8;

  int s = 0;
  int e = n-1;

  quickSort(arr, s, e);

  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}