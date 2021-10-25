#include<stdio.h>

  

int main()
{
    int a, b, lcm;
    printf("\n\nEnter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
   // function call
    printf("\n\n LCM of %d and %d is: %d\n\n", a, b, find_lcm(a,b);
    
    return 0;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int find_lcm(int a, int b)  // function definition
{
   return (a / gcd(a, b)) * b;
    
}
