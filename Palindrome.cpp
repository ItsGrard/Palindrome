#include <iostream>
using namespace std;



int main(){
    
    int n, digit, rev, num;
   	rev = 0;
    cout << "Insert number: " << endl;
    	cin >> num;
    	cout << "num1 " << num<< endl;
  n = num;
    	cout << "num "<< num <<endl;
    	cout << " n is  " << n << endl << endl;
    	do {

    		digit = num%10;
    	//	cout << num<< endl;
    		rev = (rev*10)+digit;
    		n = n/10;
			cout << "digit         " << digit <<"      rev  " << rev <<"    n:  " << n << "      num     " << num << endl;    	
    	}	while (n !=0);
    	
    	
    	if (num == rev)
    		 cout << "is palindrome" << endl;
    	else 
    		cout << "is not" << endl << endl;

    	return 0;
    }

