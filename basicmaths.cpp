/*
//count digits in a number
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    
    int cnt = (int)(log10(n)+1);

    
    return cnt;
}
int main() {
    int N ;
    cin>>N;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
*/


/*
//another method
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    
    int cnt = 0;
while (n>0)
{
    cnt = cnt +1;
    n = n/10;
}

    
    return cnt;
}
int main() {
    int N ;
    cin>>N;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
*/







/*
//reverse a number
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int revNum = 0;
	while(n > 0){
		int ld = n % 10;
		revNum = (revNum * 10) + ld;
	
		n = n / 10;
	}
	
	cout << revNum;
    return 0;
}
*/








/*
//check palindrome     
                            
#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int revNum = 0;
    
    int dup = n;
    
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum) {
        return true;
    } else {
        
        return false;
    }
}


int main() {
    int number ;
    cin>>number;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
*/






/*
//GCD/HCF
                                
#include <bits/stdc++.h>

using namespace std;

int findGcd(int n1, int n2) {
  
    for(int i = min(n1, n2); i > 0; i--) {
      
        if(n1 % i == 0 && n2 % i == 0) {
          
            return i;
        }
    }
    
    return 1;
}


int main() {
    int n1, n2;
    cin>>n1>>n2;
   
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
*/






/*
//Check if a number is Armstrong Number or not
//An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

                                       
#include <bits/stdc++.h> 
using namespace std;

bool isArmstrong(int num) {

    int k = to_string(num).length();
  
    int sum = 0;
    int n = num;

    while(n > 0){
    
        int ld = n % 10;
    
        sum += pow(ld, k); 

        n = n / 10;
    }
    return sum == num ? true : false;
}

int main() {
    int number;
    cin>>number;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
*/

//method 2
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
  int  dup = n;

   int sum = 0;

    while (n > 0) {
        int ld = n % 10;
       sum = sum + (ld*ld*ld);
        n = n / 10;
    }
    if (sum == dup) cout << "is an armstrong number";
    
     else cout << "is not an armstrong number";




    return 0;
}