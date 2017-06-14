#include <iostream>
#include <climits>
#include <ctime>

#include "radix_sort.h"
/*
#include <heap_sort.h>
#include <quick_sort.h>
#include <merge_sort.h>
*/

using namespace std;

double radix_sort_time (int arr[]);
/*
double heap_sort_time (int *arr[]);
double quick_sort_time (int *arr[]);
double merge_sort_time (int *arr[]);
*/

int n;
int MAX = 100000000;

int main () {
	
	srand (time(0));

	cout << "Enter number of elements" << '\n';
	cin >> n;
	cout << "Generating random integers\n";
	int *arr = new int[n];
	for (int i = 0; i < n; i ++) {
		arr[i] = rand()%(MAX);
	}
	cout << "Radix sort " << radix_sort_time (arr) << '\n';
	/*
	cout << "Heap sort " << heap_sort_time (arr) << '\n';
	cout << "Quick sort " << quick_sort_time (arr) << '\n';
	cout << "Merge sort " << merge_sort_time (arr) << '\n';
	*/
	
	return 0;
}

double radix_sort_time (int arr[]) {
	double duration;
	
	clock_t start = clock();
	radix_sort sort (arr, n);
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	
	return duration;
}
/*
double heap_sort_time (int *arr[]) {
	double duration;
	
	clock_t start = clock();
	heap_sort sort = new heap_sort (arr);
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	
	return duration;
}

double quick_sort_time (int *arr[]) {
	double duration;
	
	clock_t start = clock();
	quick_sort sort = new quick_sort (arr);
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	
	return duration;
}

double merge_sort_time (int *arr[]) {
	double duration;
	
	clock_t start = clock();
	merge_sort sort = new merge_sort (arr);
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	
	return duration;
}
*/
