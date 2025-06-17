//par fatou gningue

float maxtab(struct facture tabf[N]){
	int i;
	float max;
	max=tabf[0].montant;
		for(i=0;i<N;i++){
			if(tabf[i].montant>max){
				max=tabf[i].montant;
				}
			}
	return max;
		}