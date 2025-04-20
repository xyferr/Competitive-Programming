#include<stdio.h>


int main(){
    printf("Enter number of blocks: ");
    int numBlocks;
    scanf("%d", &numBlocks);
    printf("Enter size of each block:\n");
    int blockSize[numBlocks];
    for(int i = 0; i < numBlocks; i++){
        printf("Enter size of block %d: ", i+1);
        scanf("%d", &blockSize[i]);
    }

    printf("\n");

    //processes
    printf("Enter number of processes: ");
    int numProcesses;
    scanf("%d", &numProcesses);
    printf("Enter size of each process:\n");
    int processSize[numProcesses];
    for(int i = 0; i < numProcesses; i++){
        printf("Enter size of process %d: ", i+1);
        scanf("%d", &processSize[i]);
    }
    printf("\n");

    //allocation
    int visited[numBlocks];
    for(int i=0; i<numBlocks; i++){
        visited[i] = 0;
    }
    printf("Proccess no. \t Process Size \t Block no.\n");
    for(int i=0; i<numProcesses; i++){
        int flag = 1;
        int best_idx=-1;
        for(int j=0; j<numBlocks; j++){
            if(visited[j]==0 && blockSize[j] >= processSize[i]){
                if(best_idx == -1){
                    best_idx = j;
                    flag = 0;
                }
                else if(blockSize[j] < blockSize[best_idx]){
                    best_idx = j;
                    flag = 0;
                }
            }
        }
        if(flag) printf("%d \t\t %d \t\t Not Allocated\n", i+1, processSize[i]);
        else{
            visited[best_idx] = 1;
            printf("%d \t\t %d \t\t %d\n", i+1, processSize[i], best_idx+1);
        }
    }
    return 0;

}