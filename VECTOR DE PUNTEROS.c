#include <stdio.h>
#include <stdlib.h>

int main(){
    int vec[10]={9,3,6,8,2,1,0,5,4,0}, *vpunt[10], i, j, *aux;
    for(i=0;i<10;i++)
        vpunt[i]= &vec[i];
    for(i=0;i<10;i++)
        for(j=0;j<10-1;j++){
            if(*vpunt[j]> *vpunt[j+1]){
                aux=vpunt[j];
                vpunt[j]=vpunt[j+1];
                vpunt[j+1]= aux;
            }
        }
    printf("El vector:\n");
    for(i=0;i<10;i++)
        printf("|%3d| |%3d|\n", vec[i], *vpunt[i]);
    return 0;
}
