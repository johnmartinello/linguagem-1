#include <stdio.h>

int main() {
    char string[50], carac;

    fgets(string, sizeof(string), stdin);

    carac = getchar();

    int count;
    for (count = 0; string[count] != '\0'; ++count);

    for (int i = 0; i < count; i++){
        if(string[i] == carac){
            string[i] = '*';
        }
    }

    printf("String alterada: %s\n", string);

    return 0;

}
