#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[80];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
} 
    for (int i = 0; i < n-1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        if (mini != i) {
            int temp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = temp;
        }
    } 
    

    cout << "Sorted array: ";
      for (int i = 0; i < n;i++) {
        cout<< arr[i];

    return 0;
}
}









