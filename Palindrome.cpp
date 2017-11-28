//Gerardo Marin
//My code - NOT working

#include <iostream>
using namespace std;



int main(){
    
    int n, digit, rev, num;
   	rev = 0;
    cout << "Insert number: " << endl;
    	cin >> num;
    	cout << "num1 " << num<< endl;
  n = num;  //Cloning num so I can modify "n"
    	cout << "num "<< num <<endl;  //Just checking what compiler is doing and if its reading everything correctly
    	cout << " n is  " << n << endl << endl; //Checking
    	do {

    		digit = num%10; //Taking last number to create a new one but reversed, problem is, it always takes the last
    		
    		rev = (rev*10)+digit; //Reversing the number
    		n = n/10;		// This is made to exit the loop after number ends
	
		cout << "digit   " << digit <<"  rev  " << rev <<" n:  " << n << " num" << num << endl;    //Checking as well	

	}	while (n !=0);
    	
    	
    	if (num == rev)
		cout << "is palindrome" << endl;
    	else 
    		cout << "is not" << endl;

    	return 0;
    }

