#include <cstdio>
#include <iostream>

int main(){

    char nome_arquivo[50];
    printf("Digite o nome do arquivo\n");
    scanf("%s", &nome_arquivo);
    
    FILE *arquivo1;
    arquivo1=fopen(nome_arquivo, "r");
    if(arquivo1 == NULL){
        printf("ARQUIVO INEXISTENTE\n");
        exit(1);
    }

    FILE *arquivo2;
    arquivo2=fopen("teste4.2.txt", "w");
    if(arquivo2 == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    printf("\n");
    char c = fgetc(arquivo1);
    while(!feof(arquivo1)){
        if(isalpha(c)>0){ ////isalpha retorna um valor maior ue 0, caso um caractere seja uma letra 
            if(c=='Z'){
                c='A';
                fputc(c, arquivo2);
            }else if(c=='z'){
                c='a';
                fputc(c, arquivo2);
            }else{
                c+=1;
                fputc(c, arquivo2);
            }
        }else{
            fputc(c, arquivo2);
        }
        c=fgetc(arquivo1);
    }
    
    fclose(arquivo1);
    fclose(arquivo2);

    return 0;
}