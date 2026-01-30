#include<stdio.h>
int main()
{
int n, i, isPrime = 1;  // isPrime is a flag variable
printf("Entre a number.\n");
scanf("%d", &n);
if (n==0){        // 0 is neither prime nor composite
    printf("0 is not a prime nor composite.\n");
}else if (n==1){ // 1 is neither prime nor composite
    printf("1 is not prime nor  composite.\n");
}else if(n<0){  // negative numbers are not considered as prime
    printf("Negative numbers are not considered as prime.\n");
} else {
    for (i = 2; i <= n/2; i++){  // check for factors from 2 to n/2 and then increment i
        if (n % i==0) // if n is divisible by any number other than 1 and it self
        {
            isPrime = 0; // set is Prime to 0 (false)
            break;
        }       
    }
    if(isPrime==1) // if  isPrime is still 1 (true)
    printf("%d is a prime number.\n", n);
    else
    printf("%d is not a prime number.\n", n); 
}
return 0;
}
