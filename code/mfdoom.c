# include<stdio.h>

int main() {
    
    
    int age;

    printf("DOOM, enter your age");
    scanf("%d", &age);
    printf("Age is : %d", age);
    
    
    int a,b;

    printf("Enter value of 'a' ");
    scanf("%d", &a);

    printf("Enter value of 'b' ");
    scanf("%d", &b);

    printf("Sum is : %d", a + b);
    /* think of a → the house
    &a → the house address
    scanf → the delivery guy
    user input → the parcel */

    return 0;
}

/*  ------------NOTES------------

   '%d' indicates integer and '&age' is memory address for it
   '%f' for float/decimal values     
   '%c' for characters like '$#@'
   'scanf' is for input

*/
