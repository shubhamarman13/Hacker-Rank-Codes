
/*
Function Description
Complete the update function in the editor below.
update has the following parameters:
int *a: an integer
int *b: an integer
Returns
The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.

Input Format

Input will contain two integers,  and , separated by a newline.

Sample Input

4
5
Sample Output

9
1
Explanation


*/

#include <stdio.h>
#include "iostream"
#include "cstdlib"
using namespace std;
void update(int *a,int *b) 
{
    int temp;
    *a=(*a + *b);
    // cout<<"\n*****************\n";
    // cout<<*a<<" "<<*b;
    // cout<<"\n*****************\n";
    temp=*a-*b;

    if (temp>*b)
    {
        *b=temp-*b;
    }
    else
    {
        *b=*b-temp;
    }
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}