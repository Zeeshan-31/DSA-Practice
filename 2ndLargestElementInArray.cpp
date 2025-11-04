#include<bits/stdc++.h>
using namespace std;

// //*Brute Force
// void getElements(int arr[],int n)
// {
//     if(n==0 || n==1)
//         cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
//     sort(arr,arr+n);
//     int small=arr[1];
//     int large=arr[n-2];
//     cout<<"Second smallest is "<<small<<endl;
//     cout<<"Second largest is "<<large<<endl;
// }

// int main(){
//   int arr[] = {2, 5, 4, 16, 75, 3, 9};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   getElements(arr, n);
//   for (int i = 0; i < n;i++){
//     cout << arr[i] << " ";
//   }
// }

// //*Better Approach
// void getElements(int arr[],int n){
//   if(n==0|| n==1)
//     cout << -1 << " " << -1 << endl;
//   int small = INT_MAX, second_small = INT_MAX;
//   int large=INT_MIN,second_large=INT_MIN;
//   for (int i = 0; i < n;i++){
//     small = min(small, arr[i]);
//     large = max(large, arr[i]);
//   }
//   for (int i = 0; i < n; i++){
//     if(arr[i]<second_small && arr[i]!=small){
//       second_small = arr[i];
//     }
//     if(arr[i]>second_large && arr[i]!=large){
//       second_large = arr[i];
//     }
//   }
//   cout << "Second smallest is:" << second_small << endl;
//   cout << "second largest is: " << second_large << endl;
// }

// int main(){
//   int arr[]={1,2,4,6,7,5};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   getElements(arr,n);
//   return 0;
// }

//*optimal approach
void getElements(int arr[],int n){
  if(n<2){
    return;
  }

  int small = INT_MAX;
  int large = INT_MIN;
  int second_small = INT_MAX;
  int second_large = INT_MIN;

  for (int i = 0; i < n;i++){
    if(arr[i]<small){
      second_small = small;
      small = arr[i];
    }
    else if(arr[i]<second_small && arr[i]!=small){
      second_small = arr[i];
    }
    if(arr[i]>large){
      second_large = large;
      large = arr[i];
    }
    else if(arr[i]>second_large &&arr[i]!=large){
      second_large = arr[i];
    }
  }
  cout << "Second smallest is:" << second_small << endl;
  cout << "second largest is: " << second_large << endl;
}

int main(){
  int arr[]={1,2,4,6,7,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  getElements(arr,n);
  return 0;
}
