#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    int conta, contc, contg, contt, c;
    conta=0;
    contc=0;
    contg=0;
    contt=0;
    pf= fopen("rna.txt", "r");
    if( pf==NULL){
        printf("errore nell'apertura del file");
    }
    else{
        printf("file aperto correttamente");
    }

    do{
        c=fgetc(pf);
        if(c=='a'){
            conta++;
        }
        if(c=='c'){
            contc++;
        }
        if(c=='g'){
            contg++;
        }
        if(c=='t'){
            contt++;
        }
    }while(c!=EOF);
printf("%d\n", conta);
printf("%d\n", contc);
printf("%d\n", contg);
printf("%d\n", contt);

fclose(pf);
return 0;
}






