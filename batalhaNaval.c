#include <stdio.h>

int main(){


    //O tabuleiro terá um tamanho fixo 10x10(matriz)
    int tabuleiro [10][10]= {0};

    char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int  linha  [10] = {1,2,3,4,5,6,7,8,9,10};
    int  navio  [3] = {3, 3, 3};  //NAVIOS , CADA UM COM 3 POSIÇÕES
    int i,j;
    //POSIÇÕES DOS NAVIOS (CADA NAVIO OCUPA 3 POSIÇÕES CONSECUTIVAS)
    //NAVIO 1: POSIÇÕES : (0,0),(0,1),(0,2)-HORIZONTAL
    for (int j = 0 ; j < navio [0]; j++){
        tabuleiro [0][j] = 3;
    }
    //NAVIO 1: POSIÇÕES : (3,4),(4,4),(5,4)-VERTICAL
    for ( i = 3; i < 3 + navio [1]; i++)
    {
        tabuleiro [i][4] = 3;
    }
    //NAVIO 1: POSIÇÕES : (7,6),(7,7),(7,8)-HORIZONTAL
    for (j = 6; j < 6 + navio [2]; j++)
    {
        tabuleiro [7][j] = 3;
    }

     printf("TABULEIRO BATALHA NAVAL!\n");
     printf("   ");

     //IMPRIMIR CABEÇALHO COM LETRAS DAS COLUNAS
       for ( i = 0; i < 10; i++)
        {
          printf(" %c", coluna[i]);
        }
          printf("\n");
         //IMPRIMINDO LINHAS COM OS NUMEROS E O TABULEIRO
        for ( i= 0; i < 10; i++){ 
            //IMPRIMIR NÚMERO DA LINHA
            printf("%2d ",i + 1);
            //IMPRIMINDO CONTÉUDO DO TABULEIRO PARA ESTA LINHA
            for ( j = 0; j < 10; j++) {
                if(tabuleiro[i][j]){
                    printf(" 3"); //MOSTRANDO '3' AONDE TEM NAVIO
        } else {
            printf(" 0"); // MOSTRANDO '0' AONDE É ÁGUA.
}}

printf("\n");
}
        
        return 0;
}