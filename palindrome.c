#include<stdio.h>
int main()
{
  int n , result = 0, q, rem ;
  printf("Enter any number:");
  scanf("%d",&n);

  if (n<0){
    printf("negative numbers are not palindrome");
    return 0;
  }
  q =n;
  while(q!=0){
    rem = q%10;
    result= result *10+ rem;
    q = q/10;
  }
  if (result == n)
  printf("This number is palindrome");
  else 
  printf("Its not a palindrome");
  return 0;
}
