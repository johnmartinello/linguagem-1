#include <stdio.h>
#include <string.h>

int main() {
    char string1[50], string2[50], final[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);


    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    int i, j;

    for (i = 0; i < strlen(string1); i++) {
        final[i] = string1[i];
    }
    for (j = 0; j < strlen(string2); j++) {
        final[i + j] = string2[j];
    }

    final[i + j] = '\0'; 

    for (int l = strlen(final); l >= 0; l--) {
        printf("%c", final[l]);
    }

    return 0;
}
