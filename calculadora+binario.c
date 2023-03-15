#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int escolha;

    printf("o que voce deseja fazer? \n");

    printf("\n1 - conversor de palavras em binario \n2 - calculadora\n");
    scanf("%d", &escolha);


        if(escolha == 1){

            char palavra[100];
            printf("Digite a palavra a ser convertida em binario: ");
            scanf("%s", palavra);

            int i;
            for(i=0; palavra[i]!='\0'; i++) {
                printf("%c em binario: ", palavra[i]);
                int j;
                for(j=7; j>=0; j--) {
                    printf("%d", ((palavra[i] >> j) & 1));
                }
                printf("\n");
            }

        }else if(escolha == 2){
            int operacao;
            float n1, n2, soma, mult, div, sub, raiz2;

                printf("qual operacao deseja realizar? \nadicao - 1 \nsubtracao -2 \nmultiplicacao - 3 \ndivisao - 4 \nraiz quadrada - 5\n");
                scanf("%d", &operacao);
            
            if (operacao == 1|| operacao == 2 ||operacao == 3 ||operacao == 4 ){

                printf("digite o primeiro operador: ");
                scanf("%f", &n1);

                printf("digite o segundo operador: ");
                scanf("%f", &n2);

                soma = n1 + n2;
                sub = n1 - n2;
                div = n1 / n2;
                mult = n1 * n2;

                switch(operacao){

                    case 1:
                    printf("o resultado da sua soma eh: %.3f", soma);
                    break;

                    case 2:
                    printf("o resultado da sua subtracao eh: %.3f", sub);
                    break;

                    case 3:
                    printf("o resultado da sua multiplicacao eh: %.3f", mult);
                    break;

                    case 4:
                    printf("o resultado da sua divisao eh: %.3f", div);
                    break;
                }

            }else if (operacao == 5){

                printf("digite o numero que voce deseja obter a raiz quadrada: \n");
                scanf("%f", &n1);

                raiz2 = sqrt(n1);

                printf("a raiz do seu numero eh: %.3f", raiz2);
            }
            else{
                printf("valor invalido, desligando!!!");
            }
                
        }else{
            printf("valor invalido, desligando!!!");
        }
        
        getchar ();
        return 0;
}

