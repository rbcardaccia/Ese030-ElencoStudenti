#include <stdio.h>
#include <stdlib.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente{
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    unsigned int eta;
    unsigned int classe;
    char sezione[MAX_STRLEN];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i;
    
    studente ciao[N];
    
    for(i=0;i<N;i++)
    {
        printf("inserisci il nome\n ");
        scanf("%s", &ciao[i].nome);
        printf("inserisci il cognome\n ");
        scanf("%s", &ciao[i].cognome);
        printf("inserisci l'eta'\n ");
        scanf("%d", &ciao[i].eta);
        printf("inserisci la classe\n ");
        scanf("%d", &ciao[i].classe);
        printf("inserisci la sezione\n ");
        scanf("%s", &ciao[i].sezione);
    }
    
    for(i=0;i<N;i++)
    {
      printf("%s; %s; %d; %d; %s\n",ciao[i].nome,ciao[i].cognome,ciao[i].eta,ciao[i].classe,ciao[i].sezione);
    }
       
    return (EXIT_SUCCESS);
}
