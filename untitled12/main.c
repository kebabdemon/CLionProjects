#include <stdio.h>
#include <ctype.h>
#include <string.h>

void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("Error\n", str);
            return;
        }
    }
    printf("%s\n", str);
}

int main() {

    
        char str[150];


        fgets(str, sizeof(str), stdin); // take input


        for (int i = 0, j; str[i] != '\0'; ++i) {

            // enter the loop if the character is not an alphabet
            // and not the null character
            while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && str[i] != '\0') {
                for (j = i; str[j] != '\0'; ++j) {

                    // if jth element of str is not an alphabet,
                    // assign the value of (j+1)th element to the jth element
                    str[j] = str[j + 1];
                }
                str[j] = '\0';
            }
        }


    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
    isPalindrome(str);


    return 0;
}
