#include <stdio.h>
#include "iostream"
#include "cstdlib"
using namespace std;
void update(int *a,int *b) 
{
    *a=(*a)+(*b);
    // b=std::abs(*a-*b);
    *b= abs((a)-(b));
    // *b=(*a-*b);
    
}
 jhvjhvh
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}