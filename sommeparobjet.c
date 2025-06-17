float sommeparobjet(struct facture tabf[N]){
	int i;
	float Si=0;
	float Ss=0;
	for(i=0;i<N;i++){
		if(strcmp(tabf[i].objet,"inscription")==0){
			Si=Si+tabf[i].montant;
		}
			else if(strcmp(tabf[i].objet,"scolarite")==0){
			Ss=Ss+tabf[i].montant;
		}
	}
		printf("\n	le montant total des inscriptions est :%.2f",Si);
		printf("\n le montant total des scolarites est :%.2f",Ss);
		return Si,Ss;
}