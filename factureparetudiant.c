//Par pape djiby fall

void factureparetudiant(struct facture tabf[N]) {
	int i;
	char id[20];
	int t=0;
	printf("\nVeuillez saisir l'ID de l'etudiant : ");
	scanf("%s", id);
	for(i = 0; i < N; i++) {
		if(strcmp(id, tabf[i].idEtudiant) == 0) {
			printf("Facture : %d %.2f %s\n", tabf[i].numero, tabf[i].montant, tabf[i].objet);
			t=1;
		}
	}
	if(!t) {
		printf("Cet étudiant n'a pas de facture.\n");
	}
}