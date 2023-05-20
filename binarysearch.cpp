#include <iostream>
using namespace std;

int binarysearch(int arr[] ,int size, int key){
  
  int start=0;
  int end=size-1;
  int mid=start +(end-start)/2;
  
  while(size<=end){
    if(arr[mid]==key){
      return mid;
    }
    if(key>arr[mid]){
      start= mid+1;
    }
    else{
      end= mid-1;
    }
    mid=start +(end-start)/2;
    
  }
  
  return -1;
  
}

int main() {
  int even[6]={3,9,10,13,14,15};
  int odd[5]={1,10,15,17,19};

  int evenIndex=binarysearch(even,6,3);
  cout<<"index is:"<<evenIndex<<endl;

  int oddIndex=binarysearch(odd,5,15);
  cout<<"index is:"<<oddIndex<<endl;

  return 0;
}