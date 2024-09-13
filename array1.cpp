/*
//ADD TWO NUMBERS
#include <iostream>
using namespace std;
int main() {
   int a[3];
   a[0]=7;
   a[1]=5;
   a[2]=a[0] + a[1];
   cout<<"Sum of "<<a[0]<<" and "<<a[1]<<" is "<<a[2];
   return 0;
}
*/






/*
//TO FIND THE LARGEST ELEMENT IN ARRAY
#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  return 0;
}
*/






/*
//CHECK IF ARRAY IS SORTED
#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;

  printf("%s", isSorted(arr, n) ? "True" : "False");

}
*/





/*
//REMOVE DUPLICATE
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}
*/





/*
//LEFT ROTATE AN ARRAY BY 1 PLACE
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n) {
  int temp = arr[0]; 
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp; 
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

}
int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}
*/





/*
//LEFT ROTATE AN ARRAY BY K PLACE
#include <iostream>
using namespace std;

void Reverse(int arr[], int i, int end)
{
  while (i <= end)
  {
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
    i++;
    end--;
  }
}
void Rotateeletoleft(int arr[], int n, int k)
{
  
  Reverse(arr, 0, k - 1);

  Reverse(arr, k, n - 1);
 
  Reverse(arr, 0, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoleft(arr, n, k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
*/






/*
//linear search
#include <iostream>
using namespace std;

int search(int arr[], 
		int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
int main(void)
{
	int arr[] = {2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, n, x);
	(result == -1) ? 
	cout << "Element is not present in array" : 
	cout << "Element is present at index " << 
			result;
	return 0;
}
*/





/*
//find the missing number in an array
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int sum = (N * (N + 1)) / 2;

    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
*/






/*
//Reverse a given array
#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}
*/






/*
//count subarray sum equals k
//Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.
#include <bits/stdc++.h>

using namespace std;

int CountSubarrays(vector<int>& arr, int k) {
    int answer = 0;
    for (int i = 0; i < arr.size(); ++i) {
        int sum = 0;
        for (int end = i; end < arr.size(); ++end) {
            sum += arr[end];
            if (sum == k) {
                ++answer;
            }
        }
    }
    return answer;
}

int main() {
    vector<int> arr = {3, 4, 7, 2, 1, 8, 5};
    int k = 7;
    cout << "Number of subarrays with sum " << k << ": " << CountSubarrays(arr, k) << endl;
    return 0;
}
*/




/*
//Find the number that appears once, and the other numbers twice
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;

       for (int j = 0; j < n; j++) {
        if (arr[j] == num)
           cnt++;
        }
        if (cnt == 1) return num;
    }

    return -1;
}

int main()
{
    vector<int> arr = { 1, 2, 1, 2, 5};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
*/





/*
//majority element
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
    int n = v.size();

    for (int i = 0; i < n; i++) {
       
        int cnt = 0;
        for (int j = 0; j < n; j++) {
      
         if (v[j] == v[i]) {
            cnt++;
            }
        }

        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
*/







