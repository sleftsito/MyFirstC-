#include <stdio.h>
#include <ctype.h>

char mapa[10][10] = {{' ', '_', '_', '_', '_', '_', '_', '_', '_', ' '},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', 'P', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                     {' ', '-', '-', '-', '-', '-', '-', '-', '-', ' '}

};

//functions
void caminar(char a);
void imprimirMapa();
void repasarMapa();

int main()
{
    while(1 > 0){
        imprimirMapa();
        char entrada;
        scanf("%c", &entrada);
        if(entrada == '/')
            break;
        entrada = tolower(entrada);
        printf("%c", entrada);

        caminar(entrada);
    }
    return 0;
}
void caminar(char a){
    if(a == 'a'){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(mapa[i][j] == 'P' && mapa[i][j - 1] != '|'){
                    mapa[i][j] = ' ';
                    mapa[i][j - 1] = 'P';
                    break;
                }
            }
        }
    }
    if(a == 's'){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                int s = i + 1;
                if(mapa[i][j] == 'P' && mapa[s][j] != '-'){
                    mapa[i][j] = ' ';
                    i ++;
                    mapa[i][j] = 'P';
                    break;
                }
            }
        }
    }
    if(a == 'd'){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(mapa[i][j] == 'P' && mapa[i][j + 1] != '|'){
                    mapa[i][j] = ' ';
                    mapa[i][j + 1] = 'P';
                    break;
                }
            }
        }
    }
    if(a == 'w'){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(mapa[i][j] == 'P' && mapa[i - 1][j] != '_'){
                    mapa[i][j] = ' ';
                    mapa[i - 1][j] = 'P';
                    break;
                }
            }
        }
    }
}
void imprimirMapa(){
    for(int i = 0; i < 10; i++){
        printf("\n");
        for(int j = 0; j < 10; j++){
            if(mapa[i][j] != 'P'){
                printf("%c", mapa[i][j]);
            }else{
                printf("%c", mapa[i][j]);
            }
        }
    }
}
void repasarMapa(){
}
