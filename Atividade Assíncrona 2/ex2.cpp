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
    
    for(int i=conteudo.size(); i>0; i--){
        if(conteudo[i]=='\n'){
            for(int j=i+1; j<conteudo.size(); j++){
                if(conteudo[j]=='\n'){
                    break;
                }else{
                    printf("%c", conteudo[j]);
                }
            }
            printf("\n");
        }
    }
    for(int k=0; conteudo[k]!='\n'; k++){
        printf("%c", conteudo[k]);
    }

    fclose(arquivo);

    return 0;
}