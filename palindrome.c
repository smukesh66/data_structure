#include <stdio.h>
int main()
{
 int n, rev = 0, rem,copy; 
 printf("Enter an integer: ");
 scanf("%d", &n);
 copy=n;
 while (n != 0)
 {
    rem= n % 10;
    rev = rev * 10 + rem;
    n /= 10;
 }
 if(rev==copy)
 {
 printf("palindrome");
 }
 else
 {
    printf("not a palindrome");
 } 
}
