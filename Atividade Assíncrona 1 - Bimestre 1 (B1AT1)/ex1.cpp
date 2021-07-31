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
        printf("%c", c);
        c=fgetc(arquivo);
    }
    
    fclose(arquivo);
    return 0;
}
