/*
Write a program that classifies the characters of any given string in:
    --> Alphabeths:
            - Vowels
            - Consonants
    --> Digits.
    --> Special Characters.
    --> Spaces.

Name: Óscar Rubén Gómez Ríos.
Mail: A01411750@itesm.mx
Matricule Number: A01411750
Date: 17/10/2018
 */

#include <stdio.h>
#define x 1000

int main() {

    char string[x];
    int a = 0;

    printf("Give me any string please:\n");
    fgets(string, sizeof(string), stdin);

    while (string[a] != '\n') {

        if ((string[a] > 64 && string[a] < 91) || (string[a] > 96 && string[a] < 123)) {

            if (string[a] == 65 || string[a] == 69 || string[a] == 73 || string[a] == 79 || string[a] == 85 ||
            string[a] == 97 || string[a] == 101 || string[a] == 105 || string[a] == 111 || string[a] == 117) {
                printf("Character %c is a vowel.\n", string[a]);
            } else {
                printf("Character %c is a consonant.\n", string[a]);
            }
        } else if ((string[a] > 47 && string[a] < 58)) {
            printf("Character %c is a digit.\n", string[a]);
        } else if (string[a] == 32) {
            printf("Character %c is a whitespace.\n", string[a]);
        } else {
            printf("Character %c is a special character.\n", string[a]);
        }
        a++;
    }

    return 0;

}