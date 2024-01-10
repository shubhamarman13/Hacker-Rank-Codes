/*

In this challenge, you will use a for loop to increment a variable through a range.
 
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;

    for(int i=a;a<=b;a++)
    {
        if (a==1) {
            cout<<"one\n";
        
        }
        else if (a==2) {
            cout<<"two\n";
        
        }
        else if (a==3) {
            cout<<"three\n";
        
        }
        else if (a==4) {
           
            cout<<"four\n";
        }
        else if (a==5) {
            cout<<"five\n";
        
        }
        else if (a==6) {
            cout<<"six\n";
        
        }
        else if (a==7) {
            cout<<"seven\n";
        
        }
        else if (a==8) {
            cout<<"eight\n";
        
        }
        else if (a==9) {
            cout<<"nine\n";
        
        }
        else if (a>9) 
        {
            if (a%2==0) 
            {
            cout<<"even\n";
            }    
            else 
            {
            cout<<"odd\n";
            }
        }
        else {
        cout<<"Wrong input\n";
        }
        
    }
    return 0;
}
