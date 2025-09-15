#include <stdio.h>

    int main(){
    
    int a;
    float b;
    char c;
    
    printf("enter a integer ");
    scanf("%d",&a);
    printf("integer is: %d \n",a);
    
    printf("enter a decimal number ");
    scanf("%f",&b);
    printf("float is: %f \n",b);
    
    //The %c" format string tells scanf to skip any whitespace(spaces, tabs, newlines) before reading the character.
    //Without that space, scanf picks up the leftover newline instead of waiting for actual input.
        
    printf("Enter a char :");
    scanf(" %c",&c);            
    printf("The entered char is : %c",c);


    return 0;
}
