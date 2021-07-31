#include <cstdio>
#include <iostream>

using namespace std;

int main(){

    char sentenca [50];
    int cont=1;

    while(cin.getline(sentenca, 50)){
        for(int i=0; i<50; i++){
            if(sentenca[i]!='\0'){
                if((sentenca[i]>=65 && sentenca[i]<=90) || (sentenca[i]>=97 && sentenca[i]<=122)){
                    if(cont%2==1){
                        if((sentenca[i]>=97 && sentenca[i]<=122)){
                            printf("%c", sentenca[i]-32);
                            cont++;
                        }else{
                            printf("%c", sentenca[i]);
                            cont++;
                        }
                    }else{
                        if(sentenca[i]>=65 && sentenca[i]<=90){
                            printf("%c", sentenca[i]+32);
                            cont++;
                        }else{
                            printf("%c", sentenca[i]);
                            cont++;
                        }
                    }
                }else{
                    printf("%c", sentenca[i]);
                }
            }else{
                break;
            }
        }
        printf("\n");
        cont=1;
    }
}