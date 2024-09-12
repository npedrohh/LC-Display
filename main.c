/******************************************************************************

Autores: 
    Bruno Friedrich Raquel (NUSP: 13672450)
    Pedro Henrique Resnitzky Barbedo (NUSP: 14657691)    
    Gabriel Amorim Noronha (NUSP: 13727151)
    
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void espaco(char **tabela, int coluna, int max_rows){
    int i = 0;
    for(i = 0; i <= max_rows; i++){
        tabela[i][coluna] = ' ';
    }
}

void populaTabelaImpressao (char ** tabela, int valor, int colunaInicio, int MAX_ROWS, int s){
    int colunaFim = colunaInicio + s+1;
    int i = 0;
    int j = 0;
    switch(valor){
        case 0:{
            for(i=0; i<MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    if(j > colunaInicio && j < colunaFim && i > 0 && i < MAX_ROWS)
                        tabela[i][j] = ' ';
                }
            }

            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            

            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            

            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 1:{
            for(i = 0; i<=MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            

            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 2:{
            for(i = 1; i<s+1; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<MAX_ROWS; i++){
                for(j = colunaInicio+1; j<=colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 3:{
            for(i = 1; i<s+1; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 4:{
            for(i = 0; i<s+1; i++){
                for(j = colunaInicio+1; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<=MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }

            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';            
        }
        break;
        
        case 5:{
            for(i = 1; i<s+1; i++){
                for(j = colunaInicio+1; j<=colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }

            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';

        }
        break;
        
        case 6:{
            
            for(i = 1; i<s+1; i++){
                for(j = colunaInicio+1; j<=colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<MAX_ROWS; i++){
                for(j = colunaInicio+1; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }

            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 7:{
            
            for(i = 1; i<=MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 8:{
            
            for(i = 1; i<s+1; i++){
                for(j = colunaInicio+1; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<MAX_ROWS; i++){
                for(j = colunaInicio+1; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }

            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
        
        case 9:{
            
            for(i = 1; i<s+1; i++){
                for(j = colunaInicio+1; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }
            
            for(i = s+2; i<MAX_ROWS; i++){
                for(j = colunaInicio; j<colunaFim; j++){
                    tabela[i][j] = ' ';
                }
            }

            tabela[0][colunaInicio] = ' ';
            tabela[0][colunaFim] = ' ';
            
            tabela[MAX_ROWS][colunaInicio] = ' ';
            tabela[MAX_ROWS][colunaFim] = ' ';
            
            tabela[s + 1][colunaInicio] = ' ';
            tabela[s + 1][colunaFim] = ' ';
        }
        break;
    }
}



char** initTabela(int MAX_COLUMNS, int MAX_ROWS, int s) {
    int i = 0;
    int j = 0;
    char** matrix = (char**) malloc(sizeof(char*) * MAX_ROWS);
    for (i = 0; i < MAX_ROWS; i++) {
        matrix[i] = (char*) malloc(sizeof(char) * MAX_COLUMNS);
        for (j = 0; j < MAX_COLUMNS; j++) {
            matrix[i][j] = '|';
        }
    }
    
    for (i = 0; i < MAX_COLUMNS; i++) {
        matrix[0][i] = '-';
        matrix[s + 1][i] = '-';
        matrix[2 * s + 2][i] = '-';
    }
    
    return matrix;
}

int main() {
    while (1) {
        int s;
        char n[100];
        scanf("%i %s", &s, n);
        if (s == 0) {
            break;
        }
        
        int quantidadeAlgs = strlen(n);
        int MAX_COLUMNS = quantidadeAlgs * (s + 3) - 1;
        int MAX_ROWS = s * 2 + 3;
        
        char** tabelaResposta = initTabela(MAX_COLUMNS, MAX_ROWS, s);
        
        int coluna = 0;
        int i = 0;
        int j = 0;
        for(i = 0; n[i] != '\0'; i++){
            populaTabelaImpressao (tabelaResposta, n[i] - '0', coluna, MAX_ROWS-1, s);
            coluna += s+2;
            if(n[i+1] != '\0'){
                espaco(tabelaResposta, coluna, MAX_ROWS-1);
                coluna+=1;
            }
        }
        
        for (i = 0; i < MAX_ROWS; i++) {
            for (j = 0; j < MAX_COLUMNS; j++) {
                printf("%c", tabelaResposta[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
