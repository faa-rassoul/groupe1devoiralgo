//par marone

#include <stdio.h>
void remplirTabf(int tabf[N],const int N=10) {
    int i;
    for (int i = 0; i <N; i++) {;
       printf("saisir le numero facture");
         scanf("%d", &tabf[i].numero);
          printf("saisir le montant facture");
         scanf("%f", &tabf[i].montant );
          printf("saisir l'objet facture");
         scanf("%s", &tabf[i].objet );
          printf("saisir id étudient facture");
         scanf("%d", &tabf[i].idetudiant);
    }
}