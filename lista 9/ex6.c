#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
    char str1[50],str2[50];
    gets(str1);
    gets(str2);

    char *str_res = (char *)malloc(sizeof(char)*((strlen(str1)-1)+(strlen(str2))-1));

    strcpy(str_res, str1);
    strcat(str_res, " ");
    strcat(str_res, str2);

    printf("%s",str_res);

    free(str_res);

}


