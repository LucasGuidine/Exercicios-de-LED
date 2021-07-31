#include <cstdio>
#include <iostream>

int main(){

    char nome_arquivo[50];
    printf("Digite o nome do arquivo\n");
    scanf("%s", &nome_arquivo);
    
    FILE *arquivo;
    arquivo=fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("ARQUIVO INEXISTENTE\n");
        exit(1);
    }
    printf("\n");
    char c = fgetc(arquivo);
    while(!feof(arquivo)){
        if(isalpha(c)>0){ //isalpha retorna um valor maior ue 0, caso um caractere seja uma letra 
            switch (c)
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':

            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':

            break;

            default:
                printf("%c", c);
            }
        }
        c=fgetc(arquivo);
    }
    
    fclose(arquivo);

    return 0;
}