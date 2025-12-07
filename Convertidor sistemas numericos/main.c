#include <stdio.h>
#include <stdlib.h>

int Byte[8] = {128, 62, 32, 16, 8, 4, 2, 1};

int main()
{
    int Binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int lenght = sizeof(Binary)/ sizeof(Binary[0]);
    int NumeroD;

    scanf("%d", &NumeroD);
    for(int i = 0; i < lenght; i++){
        if(Byte[i] <= NumeroD){
            NumeroD -= Byte[i];
            Binary[i] = 1;
        }
    }
    for(int i = 0; i < lenght; i++){
        printf("%d", Binary[i]);
    }

    return 0;
}

//Cosas ha probar para el cambio viseversa
/*
        if(opcionMenu == 1){

	}else if(opcionMenu == 2){
        for(int i = 0; i < lenght; i++){
            scanf("%d", &NumeroD);
            if(NumeroD != 0 || NumeroD != 1){
                printf("Solo se acepta 1 y 0"); i = 0;
            }else
                Binary[i] = NumeroD;
        }
        for(int i = 0; i < lenght; i++){
            printf("%d", Binary[i]);
        }
    }else
        printf("No se que pedo escribiste"); opcionMenu = 0;
*/
