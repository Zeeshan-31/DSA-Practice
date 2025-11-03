#include<iostream>
using namespace std;

void inserted_sort(int arr[], int n){
  for (int i = 0; i < n;i++){
    // int ins = i;
    // for (int j = i-1; j>=0;j--){
    //   if(arr[j]>arr[ins]){
    //     int temp = arr[ins];
    //     arr[ins] = arr[j];
    //     arr[j] = temp;
    //     ins = ins - 1;
    // }
    int j = i - 1;
    while(j>=0 && arr[j] > arr[j+1]){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j + 1] = temp;
      j--;
    }
  }
  }


int main(){
  int n;
  cout << "enter a size of array;" << " ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n;i++) cin >> arr[i];
  inserted_sort(arr, n);
  for (int i = 0; i < n;i++){
    cout << arr[i]<< " ";
  }
  return 0;
}