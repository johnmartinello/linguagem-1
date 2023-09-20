#include <stdio.h>

int main(void) {
    
    char av;

    int o, b, r, u, cont;
    cont = o = b = r = u = 0;



    while (av != '-'){
        av=getchar();
        if(av == 'o' || av == 'O'){
            o++;
            cont++;
        }else{
            if(av == 'b' || av == 'B'){
                b++;
                cont++;
            }else{
                if(av == 'r' || av == 'R'){
                    r++;
                    cont++;
                }else{
                    if(av == 'u' || av == 'U'){
                        u++;
                        cont++;
                    }
                }
            }
        }
    }

    printf("Total de avaliacoes: %d\n\n",cont);
    printf("Quantidade de O: %.d\n",o);
    printf("Quantidade de B: %.d\n",b);
    printf("Quantidade de R: %.d\n",r);
    printf("Quantidade de U: %.d\n",u);
    
    printf("Porcentagem de O's: %.2f\n",(o/cont)*100);
    printf("Porcentagem de B's: %.2f\n",(b/cont)*100);
    printf("Porcentagem de R's: %.2f\n",(r/cont)*100);
    printf("Porcentagem de U's: %.2f\n",(u/cont)*100);

    printf(o+b > r+u ? "soma O e B maior ou igual que R e U": "soma O e B maior ou igual que R e U");

}