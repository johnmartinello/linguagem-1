#include <stdio.h>
#include <string.h>

int main() {
    char string1[50], string2[50];

    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    int inserida = 1;

    for(int i = 0; i < strlen(string1); i++){
        if (string2[i] == string1[i]){
            for(int j = i; j < strlen(string2); j++){
                if (string2[j] != string2[j]){
                    inserida = 0;
                    break;
                }
            }
        }
        if (!inserida){
            break;
        }
    }

    if(inserida){
        printf("estah inserida");
    }else{
        printf("nao estah inserida");
    }

    return 0;

}
