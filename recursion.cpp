/*
//count number
#include<bits/stdc++.h>
using namespace std;
int cnt=0;

void print(){
  
   if(cnt ==10 )  return;
   cout<<cnt<<endl;

   cnt++;
   print();

}

int main(){
   
    print();
  return 0;
}
*/






/*
//print name n times using recurssion
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   if(i>n) return;
   cout<<"Amit"<<endl;

   func(i+1,n);

}

int main(){
 
  int n ;
  cin>>n;
  func(1,n);
  return 0;

}
*/








/*
//print 1 to n using recurssion
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   if(i>n) return;
   cout<<i<<endl;

   func(i+1,n);

}
int main(){
  
  int n ;
  cin >>n;
  func(1,n);
  return 0;

}
*/





/*
//print n to 1
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   if(i<1) return;
   cout<<i<<endl;
   
   func(i-1,n);

}

int main(){
  
  int n ;
  cin>>n;
  func(n,n);
  return 0;

}
*/





/*
//sum of first n natural number
//using loop
#include<bits/stdc++.h>
using namespace std;
 void sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
  }
 int main() {
  int n;
cin>>n;
   
   sum(n);
  }
  */



/*
 //using formula
 #include<bits/stdc++.h>
using namespace std;
 void sum(int N) {
    int sum = N * (N + 1) / 2;
    cout<<"The sum of the first "<<N<<" numbers is: "<<sum<<endl;
  }
 int main() {
int n;
cin>>n;
   sum(n);
  }
  */






 //recursive way
 /*
 //parameterized way
 #include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
   
   if(i<1)
   {
       cout<<sum<<endl;
       return;
   }

   func(i-1,sum+i);

}

int main(){
  
  int n ;
  cin>>n;
  func(n,0);
  return 0;

}
*/





/*
//functional way
#include<bits/stdc++.h>
using namespace std;

int func(int n){
   
   if(n == 0)
   {
       return 0;
   }
   return n + func(n-1);

}

int main(){
  
  int n ;
  cin>>n;
  cout<<func(n)<<endl;
  return 0;

}
*/






/*
//factorial of a number

// m1 recursive
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   
   if(n == 0)
   {
       return 1;
   }
   return n * factorial(n-1);

}

int main(){
  
  int n ;
  cin>>n;
  cout<<factorial(n)<<endl;
  return 0;

}
*/



/*
//m2 iterative
#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
   int X ;
   cin>>X;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
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

void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}
int main() {
   int n=5 ;
  
   int arr[] ={5,4,3,2,1};
   reverseArray(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
}
*/







/*
//check palindrome
#include <iostream>
using namespace std;

bool palindrome(int i, string& s){
  
    if(i>=s.length()/2) return true;
    
    if(s[i]!=s[s.length()-i-1]) return false;
    
    return palindrome(i+1,s);
}

int main() {

	string s ;
  cin>>s;
	cout<<palindrome(0,s);
	cout<<endl;
	return 0;
}
*/