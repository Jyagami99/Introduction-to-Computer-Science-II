#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, aux, overlap[4] = {0, 0, 0, 0};
    char letra;
    char **reads_tmp;

    scanf("%d ", &n);

    char **reads = (char **)malloc(n * sizeof(char *));
    for(int i = 0; i < n; i++){
        reads[i] = (char *)malloc(sizeof(char));
        aux = 0;

        do{
            scanf("%c", &letra);
            reads[i] = (char *)realloc(reads[i], ++aux * sizeof(char));
            reads[i][aux-1] = (letra == '\n' || letra == '\r' || letra == ' ') ? '\0' : letra;

        } while(letra != '\n' && letra != '\r' && letra != ' ');
    }

    while(n > 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == i){ continue; }

                for(int k = 0; k < strlen(reads[i]); k++){
                    if(reads[i][k] == reads[j][overlap[0]]){ overlap[0]++; }

                    else if(overlap[0] > 0){
                        if(overlap[0] == strlen(reads[j])){ break; }

                        overlap[0] = (reads[i][k] == reads[j][0]) ? 1 : 0;
                    }
                }

                if(overlap[0] > overlap[3]){
                    overlap[3] = overlap[0];
                    overlap[1] = i;
                    overlap[2] = j;

                }

                overlap[0] = 0;
            }
        }


        if(overlap[3] > 0){
            reads_tmp = (char **)malloc((n-1) * sizeof(char *));

            if(strstr(reads[overlap[1]], reads[overlap[2]])){
                reads_tmp[0] = (char *)malloc((strlen(reads[overlap[1]]) + 1)*sizeof(char));
                strcpy(reads_tmp[0], reads[overlap[1]]);
            }

            else{
                reads_tmp[0] = (char *)malloc((strlen(reads[overlap[1]]) + strlen(reads[overlap[2]]) - overlap[3] + 1) * sizeof(char));
                strcpy(reads_tmp[0], reads[overlap[1]]);
                strcpy(&reads_tmp[0][strlen(reads_tmp[0]) - overlap[3]], reads[overlap[2]]);
            }

            for(int i = 0, j = 1; i < n; i++){
                if(i != overlap[1] && i != overlap[2]){
                    reads_tmp[j] = (char *)malloc((strlen(reads[i]) + 1) * sizeof(char));
                    strcpy(reads_tmp[j++], reads[i]);
                }

                free(reads[i]);
            }

            free(reads);
            reads = (char **)malloc(--n * sizeof(char *));

            for(int i = 0; i < n; i++){
                reads[i] = (char *)malloc((strlen(reads_tmp[i]) + 1) * sizeof(char));
                strcpy(reads[i], reads_tmp[i]);
                free(reads_tmp[i]);
            }

            free(reads_tmp);
            overlap[3] = 0;
        }

        else{
            for(int i = 0; i < n; i++){
                printf("%s", reads[i]);
                free(reads[i]);
            }
            printf("\n");
            free(reads);

            n = 0;
        }
    }

    if(n == 1){ 
        printf("%s\n", reads[0]); 
        free(reads[0]);
        free(reads);
    }
    
    return 0;
}