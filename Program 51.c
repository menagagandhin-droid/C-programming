#include <stdio.h>
#include <ctype.h>

// Function to check whether a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);   // Convert to lowercase for easy checking
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    else
        return 0;
}

int main() {
    char ch1, ch2;
    int ascii1, ascii2;

    // Prompt user to enter two characters
    printf("Enter first character: ");
    scanf(" %c", &ch1);

    printf("Enter second character: ");
    scanf(" %c", &ch2);

    // Calculate ASCII values
    ascii1 = (int) ch1;
    ascii2 = (int) ch2;

    printf("\nASCII value of %c = %d", ch1, ascii1);
    printf("\nASCII value of %c = %d\n", ch2, ascii2);

    // Check relationship
    if (isVowel(ch1) && isVowel(ch2)) {
        printf("Both characters are vowels.\n");
        printf("Sum of ASCII values = %d\n", ascii1 + ascii2);
    }
    else if (isVowel(ch1) || isVowel(ch2)) {
        printf("One character is vowel and the other is consonant.\n");
        printf("Difference of ASCII values = %d\n", ascii1 - ascii2);
    }
    else {
        printf("Both characters are consonants.\n");
        printf("Product of ASCII values = %d\n", ascii1 * ascii2);
    }

    return 0;
}
