// 1. Write c program in the folllwing seriess 1+2+3.....n

#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The Result is: %d", sum);
}


// 2. Write a C program in the following series  1^2+2^2+3^2+.....n^2
#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum+i*i;
    }
    printf("The Result is: %d", sum);
}

// 3. Write a C program in the following series 1+3+5+....+n
#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("The Result is: %d", sum);
}

// 4. Write a C program in the following series 2+4+6+....+n
#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for(i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("The Result is: %d", sum);
}

// 5. Write a c C program to generate a fibonacci series

#include<stdio.h>
int main(){
int n1=0, n2=1, n3,i, number;
printf("Enter the number of elements: ");
scanf("%d%d, n1, n2");       // Printing 0 and 1
for (i=2; i< number; ++i) // loop starts 2 because 0 and 1 already printed
{
    n3=n1+n2;
    printf("%d", n3);
    n1=n2;
    n2=n3;

}
return 0;
}
// 6. Write a C program to check prime number.

#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter  the number to check prime: ");
    scanf("%d", &n);
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf("Number is not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Number is prime");
    

    return 0;
}

// Another way
// 6. Write a C program to check prime number.

#include <stdio.h>

int main()
{

    int n, i, flag = 0;
    printf("Enter a number to check prime: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}

// 7. Write a c program in the following series 1+2+3+4+...+n using array

#include <stdio.h>
int main()
{
    int i, n, sum = 0, a[10];
    printf("Enter the value of n= ");
    scanf("%d", &n);
    printf("Enter the number of the series= ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("The Result is: %d", sum);
}


//8. Write a C program to check Leap Year.

#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(((year%4 == 0) && (year%100!=0)) || (year%400==0))
    {
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    return 0;
}
// Another way
//8. Write a C program to check  Leap Year..
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }

    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }

    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}























