//par marone

float sommetab(struct facture tabf[N]){
	int i;
	float s=0;
	for(i=0;i<N;i++){
		s=s+tabf[i].montant;
	}
		printf("la somme des factures est: %f",s);
	return s;
}