#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
  for (int i = 1; i <n;i++){
    if(arr[i]<arr[i-1]){
      return false;
    }
  }
  return true;
}

int main(){
  int arr[]={1,2,4,6,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("%s", isSorted(arr, n) ? "True" : "False");
}