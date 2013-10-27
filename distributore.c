/*
Programma che simula un distributore di prodotto.
Utile per chi si sta addentrando nella programmazione in c
 */

#include <stdio.h>
#include <unistd.h>

main()
{
	int selezione=0;
	int monete100;
	float monete1=0,monete=0;
	float monete2=100;
	float sommamon=0;
	float resto=0;
	char prodotto[6][20]={"Caffè espresso","Caffe lungo","Caffè corto","Thè","Cappuccino","Cioccolatino"};
	float prezzo[6]={0.4,0.4,0.4,0.35,0.4,0.8};	

	while(0<1){
	 	printf("Benvenuto nel nuovo sistema di distribuzione prodotti... \n Ecco l'elenco dei prodotti prelevabili \n"); 
	 	printf("prodotto\t\t\t\tMERENDINE\t\t\t\n");
		printf("1.%s\t%.2f\t\t6.%s\t%.2f\n",prodotto[0],prezzo[0],prodotto[5],prezzo[5]);
		printf("2.%s\t\t%.2f\n",prodotto[1],prezzo[1]);
		printf("3.%s\t\t%.2f\n",prodotto[2],prezzo[2]);
		printf("4.%s\t\t\t%.2f\n",prodotto[3],prezzo[3]);
		printf("5.%s\t\t%.2f\n",prodotto[4],prezzo[4]);

		printf("Inserisci la tua selezione:");
		scanf("%d",&selezione);
		while (selezione>6) {	
			printf("Inserimento errato... Ripeti la selezione: \t");
			scanf("%d",&selezione); 
	 	}
	   
		printf("effettua ora il pagamento. Inserisci %.2f Euro:  ",prezzo[selezione-1]);
		scanf("%f",&monete);
		//printf("monete vale %f\n",monete);
	
		monete1=monete*100;
		monete100=(int)monete1;
		//printf("monete100 vale %d\n",monete100);

		while (0<1) {
			switch (monete100) {
				case 5:
	  				sommamon=sommamon+0.05;
	  			break;
				case 10:
	  				sommamon=sommamon+0.1;
	  			break;
				case 20:
	  				sommamon=sommamon+0.2;
	  			break;
				case 50:
	  				sommamon=sommamon+0.5;
	  			break;
				case 100:
	  				sommamon=sommamon+1;
	  			break;
				case 200:
	  				sommamon=sommamon+2;
	  			break;
				default:
	 				printf("La moneta inserita non è stata riconosciuta... Reinseriscila \n");
	  			break;
			}
				
			if (sommamon>=prezzo[selezione-1])
				break;		
			printf("fino ad adesso hai inserito %.2f euro dei %.2f previsti \n",sommamon,prezzo[selezione-1]);
			printf("continua con il pagamento: ");
			scanf("%f",&monete);
			monete1=monete*100;
			monete100=(int)monete1;
			}
		
			resto=sommamon-prezzo[selezione-1];
			printf("In tutto hai inserito %.2f euro \nErogazione del prodotto in corso \nErogazione del resto di %.2f\n ",sommamon, resto);
			sommamon=0;
			sleep(10);	
			system("clear");	
}
	    
	    return 0;
	}


