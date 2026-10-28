/* a string is a palindrome */

#include <stdio.h>
#include <string.h>

int main (void){
    char str[100];
    int i, length, palindrome = 1;

    printf("Enter a word :");
    scanf("%99s", str);

    length = strlen(str);

    for(i=0; i < length/2; i++){
        if(str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("not palindrome\n");
    }

    return 0;
}