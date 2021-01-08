#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
        FILE *fp;
        int cnt=0;
        float arr[200][202];
        while(fopen("data.txt","r")!=NULL){

            for(int i=0;i<202;i++){
                fscanf(fp,"%f",&arr[cnt][i]);
            }
            for(int i=0;i<202;i++){
                printf("%f\n",arr[cnt][i]);
            }
            cnt++;
        }

      fclose(fp);
      return 0;
}
