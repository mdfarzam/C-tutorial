#include<stdio.h>
#include<string.h>
int main() {

    // for fibonacci:
    // 0, 1, 1, 2, 3, 5, 8, 13, 21...
    // each number = sum of previous two
    // printing 'n' no. of term of fibonacci series

    int n, a=0, b=1, next, i;
    printf("How many terms? ");
    scanf("%d", &n);
    printf("%d %d ", a, b);      // print first two

    for(i=2; i<n; i++) {
        next = a+b;
        printf("%d ", next);
        a = b;                   // putting value of 'b' inside 'a'
        b = next;                
    }

    // Armstrong number: **What is it?**
    // Sum of cubes of digits = number itself
    // 153 → 1³ + 5³ + 3³ = 1+125+27 = 153 ✓
    // 371 → 3³ + 7³ + 1³ = 27+343+1 = 371 ✓

    int n, orignal, digit, sum=0;
    printf("Enter number:");
    scanf("%d", &n);
    orignal = n;
    while(n != 0){
        digit = n % 10;        // extract last digit
        sum = sum + (digit*digit*digit);  // cube and add
        n = n / 10;            // remove last digit
    }
    if(sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    // Palindrome:
    //String reads same forward and backward
    //"madam" → reverse = "madam" → PALINDROME
    //"hello" → reverse = "olleh" → NOT palindrome

    char str[100], rev[100];
    printf("Enter string: ");
    scanf("%s", str);

    strcpy(rev, str);    // copy str into rev
    strrev(rev);         // reverse rev

    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");



// NOW reverse digit or string , pattern printing programs are left

    // Prime check: 
    int n, i, flag=0;
    scanf("%d",&n);
    for(i=2; i<n; i++){     // try every number from 2 to n-1
      if(n%i == 0){         // does it divide evenly?
        flag=1;            // YES → not prime
            break;
        }
    }   // print AFTER loop finishes
    if(flag==0) printf("Prime");
    else printf("Not Prime");

    


    // ## Rules to solve ANY pattern 
    // Step 1: Count rows → outer loop runs that many times
    // Step 2: Count what's in each row → inner loop
    // Step 3: Does inner loop depend on row number?
    // YES → use i in inner loop condition
    // NO  → use fixed number



        
    return 0;
}
