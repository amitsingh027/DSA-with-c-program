//rectangular star pattern
/*
#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
       
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
    
        cout << endl;
    }
}

int main()
{   
   
    int N ;
cin>>N;
    pattern1(N);

    return 0;
} 
*/


/*//right angled triangled pattern
#include <bits/stdc++.h>
using namespace std;

void pattern2(int N)
{
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{ 
    int N ;
cin>>N;
    pattern2(N);

    return 0;
}
*/
/*
//right angled triangled number pattern
#include <bits/stdc++.h>
using namespace std;

void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout <<j<<" ";
        }
       
        cout << endl;
    }
}
int main()
{   
    int N ;
cin>>N;
    pattern3(N);

    return 0;
}
*/






/*
//1
//22
//333
//4444
#include <bits/stdc++.h>
using namespace std;

void pattern4(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout <<i<<" ";
        }
       
        cout << endl;
    }
}

int main()
{   
    int N ;
cin>>N;
    pattern4(N);

    return 0;
}
*/


/*//print
//**** 
//***
//**
//*
#include <bits/stdc++.h>
using namespace std;

void pattern5(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<"* ";
        }
       
        cout << endl;
    }
}

int main()
{   
    int N ;
cin>>N;
    pattern5(N);

    return 0;
}
*/



/*
//print
//12345
//1234
//123
//12
//1
#include <bits/stdc++.h>
using namespace std;

void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<N-j+1<<" ";
        }
       
        cout << endl;
    }
}

int main()
{   
    int N ;
cin>>N;
    pattern6(N);

    return 0;
}
*/



/*
//print * pyramid
#include <bits/stdc++.h>
using namespace std;

void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}

int main()
{   
    int N ;
    cin>>N;

    pattern7(N);

    return 0;
}
*/



/*
//inverted star pyramid
#include <bits/stdc++.h>
using namespace std;

void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}

int main()
{   
    int N ;
cin>>N;
    pattern8(N);

    return 0;
}
*/






/*
//increasing letter triangle pattern
#include <bits/stdc++.h>
using namespace std;

void pattern9(int N)
{
      for(int i=0;i<N;i++){
          
          for(char ch = 'A'; ch<='A'+i;ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
          
      }
}

int main()
{   
    int N = 5;
    cin>>N;
    pattern9(N);

    return 0;
}
*/






/*
//Reverse letter triangle pattern
#include <bits/stdc++.h>
using namespace std;

void pattern10(int N)
{
      for(int i=0;i<N;i++){
         
          for(char ch = 'A'; ch<='A'+(N-i-1);ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
      }
}
int main()
{   
    int N ;
    cin>>N;
    pattern10(N);

    return 0;
}
*/






/*//Pattern11
//Diamond star pattern
//it is the combination of errect and inverted pyramid

#include <bits/stdc++.h>
using namespace std;

void erect_pyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}

void inverted_pyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}

int main()
{   
    int N ;
    cin>>N;
    erect_pyramid(N);
    inverted_pyramid(N);

    return 0;
}
*/






