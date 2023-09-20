#include <stdio.h>
#include <ctype.h>
int main() {
    char string[50];

    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < 50 && string[i] != '\0'; i++){

        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' ||
            string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            string[i] = tolower(string[i]);
        } 
        else {
            string[i] = toupper(string[i]);
        } 

    }

    printf("String convertida: %s\n", string);

    return 0;

}
