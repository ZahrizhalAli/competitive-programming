#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n){
	
	for(int pos = 0; pos < n-1;pos++){
		int min_position = pos;
		
		// find minimum element 
		for(int i = pos; i<n;i++){
			if(arr[i] < arr[min_position]){			// [1,2,3,4,5] -> min_pos = 0 -> 5
				min_position = i;
			}
		}
		swap(arr[pos], arr[min_position]);
	}
}

int main(){

	int arr[] = {-12,-2,6,5,2,3,4,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	selection_sort(arr, n);
	


}

