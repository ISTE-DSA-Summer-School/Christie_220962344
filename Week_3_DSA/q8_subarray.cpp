// C++ program to print largest contiguous array sum
#include <iostream>
using namespace std;


int main()
{
    int max_sum,sub_sum, m;
    cout<<"Enter the length of the array: ";
    cin>>m;
	int a[m];
    cout<<"Enter elements in the array";
    for(int i = 0;i<m;i++){
        cin>>a[i];
    }
    for(int i = 0;i<m;i++){
        max_sum = max_sum + a[i];
    }
    for (int i = 0; i < m; i++) {
		sub_sum = sub_sum + a[i];
		if (max_sum < sub_sum)
			max_sum = sub_sum;

		if (sub_sum < 0)
			sub_sum = 0;
	}
	
	cout << "Maximum sum is " << max_sum;
	return 0;
}
