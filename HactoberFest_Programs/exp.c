##include<stdio.h> // include stdio.h library
 
int main(void)
{       
    int base, exponent, result = 1;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    int i = 1;
    
    while(i <= exponent)
    {
        result *= base;
        i++;
    }
    
    printf("%d^%d = %d", base, exponent, result);
    
    return 0; // return 0 to operating system
}
