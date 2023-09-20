#include <stdio.h>
#include <string.h>

int main() {
    char string[50];

    fgets(string, sizeof(string), stdin);

    int count = 0;
    
    for (int i = 0; i < strlen(string); i++) {
        for (int j = i + 1; j < strlen(string); j++) {
            if (string[i] == string[j]) {
                count++;
                break; 
            }
        }
    }

    printf("%d letras repetidas.\n", count);

    return 0;

}
