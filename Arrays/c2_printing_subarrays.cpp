#include<bits/stdc++.h>
using namespace std;

// Solution 1 - O(N^3)
void solutionOne(int arr[], int n){
	// |1,2,3|,4,5
	
	int largest = 0;
	for(int i = 0 ; i < n;i++){
		for(int j = i;j<n;j++){
			int sum = 0;
			for(int k = i;k<=j;k++){
				sum += arr[k];
				cout << arr[k] << " ";
			}
			sum >= largest ? largest = sum : largest;
			cout << endl;
		}
	}
	cout << "Largest sum : " << largest << endl;
}

// Solution 2 - O(N^2)
void solutionTwo(int arr[], int n){
	int prefix[n] = {0};
	prefix[0] = arr[0];
	cout << prefix[0] << " ";
	for(int i = 1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];
		cout << prefix[i] << " ";
	}
	cout << endl;
	
	
	int largest_sum = 0;
	for(int i = 0 ; i < n;i++){
		for(int j = i; j<n;j++){
//			cout << prefix[j] << " " << prefix[i-1] << endl;
			int sum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
			largest_sum = sum > largest_sum ? sum : largest_sum;
		}
	}
	
	cout <<  "Largest sum " << largest_sum << endl;
}

// solution 3 - kadane's algorithm (O(n))

void solutionThree(int arr[], int n){
	int current_sum = 0;
	int largest_sum = 0;
	for(int i = 0 ; i <n;i++){
		current_sum = current_sum + arr[i];
		if(current_sum <0){
			current_sum = 0;
		}
		largest_sum = max(largest_sum ,current_sum);
	}
	
	cout << "Largest Sum "  << largest_sum << endl;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	solutionOne(arr, n);
	solutionTwo(arr, n);
	solutionThree(arr, n);
	
}

