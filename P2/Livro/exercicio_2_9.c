int igual(Lista* l1,Lista* l2){
	Lista* p1;
	Lista* p2;
	int igual = 1 
	for(p1 = l1,p2 = l2; p1!=NULL && p2!=NULL && igual; p1=p1->prox,p2=p2->prox) {
		if(p1->info!= p2->info)
			igual = 0; 
	}

	return(p1 == p2 && igual) ;
}