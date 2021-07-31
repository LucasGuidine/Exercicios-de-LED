#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<char> conteudo;
    char nome_arquivo[50];
    printf("Digite o nome do arquivo\n");
    scanf("%s", nome_arquivo);
    
    FILE *arquivo;
    arquivo=fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("ARQUIVO INEXISTENTE\n");
        exit(1);
    }
    printf("\n");
    char c = fgetc(arquivo);
    while(!feof(arquivo)){
        if((c>=65 && c<=90) || (c>=97 && c<=122) || (c==' ') || (c>=48 && c<=57)){ 
            if(c==' '){
                c='\n';
            }
            conteudo.push_back(c);
        }
        c=fgetc(arquivo);
    }
    
    for(int i=0; i<conteudo.size(); i++){
        if(conteudo[i]=='\n'){
            for(int j=i-1; j>0; j--){
                if(conteudo[j]=='\n'){
                    break;
                }else{
                    printf("%c", conteudo[j]);
                }
            }
            printf(" ");
        }
    }
    for(int k=conteudo.size(); conteudo[k]!='\n'; k--){
        printf("%c", conteudo[k]);
    }

    fclose(arquivo);

    return 0;
}