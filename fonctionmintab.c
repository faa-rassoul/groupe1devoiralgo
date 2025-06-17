float mintab(struct facture tabf[N]){
	int i;
	float min;
	min=tabf[0].montant;
		for(i=0;i<N;i++){
			if(tabf[i].montant<min){

				min=tabf[i].montant;
				}
			}
	return min;
		}