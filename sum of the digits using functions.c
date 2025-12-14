#include <stdio.h>
int palindrome(int n)
{
    int rev=0,temp=n;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return (rev==temp);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}




