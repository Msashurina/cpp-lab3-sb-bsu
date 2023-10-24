#include<iostream> 
#include<limits>
using namespace std; 
int main()
{
int k, i = 1, s = 0, n;
cout << " Enter the amount of integers to sum = "; cin >> k;
//Amount of integers
if ( k==0) 	
cout << " The total sum of integers is:0"<< endl;
//the procedure program with selection
else 
{
do {
cout << "Enter integer nr. " << i << ": "; 
cin >> n;
while (1)
{
if(cin.fail())
//If the cin fails then the input buffer is kept in an error state
{
cin.clear();
//clear the error state of the buffer so that further processing of input can take place
cin.ignore (numeric_limits<streamsize>::max(),'\n');
//ignore the rest of the line after the first instance of error that has occurred
//it skips to or moves to the next line
cout<<"WARNING!!! You've entered wrong input.Try again" << endl;
cin>>n;
}
else if(!cin.fail())
break;
//you can continue doing program
}
s += n;
//will count the sum
i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << s;
}
return 0;
}
