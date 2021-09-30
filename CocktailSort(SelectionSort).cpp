#include <iostream>

using namespace std;


void initialize(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % n + 1;
	}
}

void print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void cocktailSort(int* arr, int n) {

	int start = 0;
	int end = n;
	int min = 0;
	int max = 0;
	
	while (start < end) {
		min = start;
		for (int j = start + 1; j < end; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(arr[start], arr[min]);

		start++;

		max = end - 1;
		for (int j = end - 2; j >= start; j--) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}
		swap(arr[end - 1], arr[max]);

		end--;
	}
}


int main()
{
	int n;
	cin >> n;

	int* array = new int[n];
	initialize(array, n);

	print(array, n);
	cocktailSort(array, n);
	print(array, n);

	return 0;
}
