void affichertab(struct facture tabf[N]){
	int i;
	for(i=0;i<N;i++){
		printf("\n	le numero de la facture est: %d\n",tabf[i].numero);
		printf("\n	le montant de la facture est: %f\n",tabf[i].montant);
		printf("\n	l'objet de la facture est: %s\n",tabf[i].objet);
		printf("\n	l'ID de l'etudiant est: %s\n",tabf[i].idEtudiant);
	}
}