#include "fibo.h"
// A utility function that returns true if x is perfect square
bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s*s == x);
}

// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
	// n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
	// is a perfect square
	return isPerfectSquare(5*n*n + 4) ||
		isPerfectSquare(5*n*n - 4);
}

int main(){

    cout<<"*************fibonacci series program's running ********"<<endl;
   
    for (int i = 1; i <= 10; i++){
	    isFibonacci(i)? cout << i << " is a Fibonacci Number \n":
					cout << i << " is a not Fibonacci Number \n" ;

    }
    system("pause");
    return 0;
}