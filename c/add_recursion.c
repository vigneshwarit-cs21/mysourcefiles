#include<stdio.h>

int y;

int add(int m, int n)
{
    if(n == 0)
        return m;

    y = add(m, n-1) + 1;
    return y;   
}

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int a, b, r;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    r = add(a, b);    
    printf("\n\nSum of two numbers is: %d\n\n", r);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

