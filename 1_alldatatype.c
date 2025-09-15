#include <stdio.h>

    int main(){
        
    int a;
    float b;
    char c;
    
    printf("Enter an integer ");
    scanf("%d",&a);
   
    printf("Enter a decimal number ");
    scanf("%f",&b);
    
    //The %c" format string tells scanf to skip any whitespace(spaces, tabs, newlines) before reading the character.
    //Without that space, scanf picks up the leftover newline instead of waiting for actual input.
    printf("Enter a char :");
    scanf(" %c",&c);  
    
    printf("The entered integer is: %d \n",a);
    printf("The entered float is: %f \n",b);
    printf("The entered char is : %c",c);

    return 0;
}
