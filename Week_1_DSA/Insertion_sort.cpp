#include <iostream>
using namespace std;

int main() {
   int n,j,k;
   cout << "Enter the number of elements in the array : ";
   cin >> n;
   int arr[80];    
   cout << "Enter elements of the array:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
    
   for(int i = 1; i<n; i++) {
      k = arr[i];
      j = i;
      while( arr[j-1]>k&&j>0) {
         arr[j] = arr[j-1];
         j--;
      }
      arr[j] = k;   
   }
   for(int i = 0; i<n; i++) {
      cout << arr[i];
    }
}