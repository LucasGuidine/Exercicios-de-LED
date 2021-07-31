#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string frase;

    printf("Escreva uma frase\n");
    getline(cin, frase);//comando para ler a próxima linha digitada pelo usuário
    
    FILE *arquivo;
    arquivo=fopen("teste3.txt", "w");
    if(arquivo==NULL){
        printf("Erro na abertura");
        exit(1);
    }
    for(int i=0; i<frase.size(); i++){
        fputc(frase[i], arquivo);
    }
    fclose(arquivo);
    return 0;
}