#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	printf("****MATEMAT�K MEN�S�*****\n\n");
	printf("1-Karenin �evresi ve Alan�\n");
	printf("2-Dikd�rtgenin �evresi ve Alan�\n");
	printf("3-�ki Say�n�n �arp�m�\n");
	printf("4-Fakt�riyel Bulma\n");
	printf("5-Girilen Say�n�n Karesini Alma\n");
	printf("6-Girilen Say�n�n K�p�n� Alma\n");
	printf("7-5x2+6x+8 x e g�re Denklemi ��zme\n");
	printf("8-Faiz Hesaplama\n");
	printf("9-Yamu�un �evresini Hesaplama\n");
	printf("10-Yamu�un Alan�n� Hesaplama\n");
	printf("11-��genin �evresini Hesaplama\n");
	printf("12-��genin Alan�n� Hesaplama\n");
	printf("13-Gidilen Mesafeyi Hesaplama\n");
	printf("14-�arp�m Tablosu\n");
	printf("15-�� Basamakl� Say�y� Basamaklar�na Ay�rma\n\n");
	int secim,kenar,kisakenar,uzunkenar,s1,s2,s3,s4,i,fakt,birler,onlar,yuzler;
	printf("L�tfen Yapmak �stedi�iniz ��lemi Se�iniz:");
	scanf("%d",&secim); printf("\n");
	
	switch(secim){
		case 1: printf("Kenar Uzunlu�unu Giriniz:"); scanf("%d",&kenar);
				printf("�evresi=%d\n",(kenar*4)); printf("Alan�=%d",(kenar*kenar));break;
		
		case 2: printf("K�sa Kenar� Giriniz:"); scanf("%d",&kisakenar);
				printf("Uzun Kenar� Giriniz:"); scanf("%d",&uzunkenar);
				printf("�evresi=%d\n",(2*(kisakenar+uzunkenar))); printf("Alan�=%d",(kisakenar*uzunkenar));break;
		
		case 3: printf("1.Say�y� Giriniz:"); scanf("%d",&s1);
				printf("2.Say�y� Giriniz:"); scanf("%d",&s2);
				printf("Sonu�=%d",(s1*s2));break;
				
		case 4: printf("Fakt�riyelini Al�nmas�n� �stedi�iniz Say�y� Giriniz:"); scanf("%d",&s1);
			 	for(i=1;i<=s1;i++){
			 		fakt=fakt*i;
				 }	
				 printf("%d!=%d",s1,fakt);break;
				 
		case 5: printf("Karesinin Al�nmas�n� �stedi�iniz Say�y� Giriniz:"); scanf("%d",&s1);
				printf("Sonu�=%d",(s1*s1));break;
				
		case 6: printf("K�p�n�n Al�nmas� �stedi�iniz Say�y� Giriniz:"); scanf("%d",&s1);
				printf("Sonu�=%d",(s1*s1*s1));break;
				
		case 7: printf("x De�erini Giriniz:"); scanf("%d",&s1);
				printf("5x2+6x+8=%d",(5*s1*s1+6*s1+8));break;
				
		case 8: printf("Ana Paray� Giriniz:"); scanf("%d",&s1);
				printf("Faiz Oran�n� Giriniz:"); scanf("%d",&s2);
				printf("%dTL Faiz Sonras� %dTL Olur.",s1,(s1+(s1*s2/100)));break;
				
		case 9: printf("1.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s1);
				printf("2.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s2);
				printf("3.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s3);
				printf("4.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s4);
				printf("Yamu�un �evresi=%d",(s1+s2+s3+s4));break;
				
		case 10: printf("1.Taban Uzunlu�unu Giriniz:"); scanf("%d",&s1);
				 printf("2.Taban Uzunlu�unu Giriniz:"); scanf("%d",&s2);
				 printf("Y�ksekli�i Giriniz:"); scanf("%d",&s3);
				 printf("Yamu�un Alan�=%d",((s1+s2)/2*s3));break;
				 
		case 11: printf("1.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s1);
				 printf("2.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s2);
				 printf("3.Kenar Uzunlu�unu Giriniz:"); scanf("%d",&s3);
				 printf("��genin �evresi=%d",(s1+s2+s3));break;
				 
		case 12: printf("Taban Uzunlu�unu Giriniz:"); scanf("%d",&s1);
				 printf("Y�ksekli�i Giriniz:"); scanf("%d",&s2);
				 printf("��genin Alan�=%d",(s1*s2/2));break;
				 
		case 13: printf("H�z�n�z� Yaz�n�z:"); scanf("%d",&s1);
				 printf("Ka� Saattir Yoldas�n�z:"); scanf("%d",&s2);
				 printf("Alm�� Oldu�unuz Mesafe %dkm dir.",(s1*s2));break;
				 
		case 14: printf("****�arp�m Tablosu****\n");
				 for(s1=1;s1<11;s1++){
				 	printf("-----------------\n");
				for(s2=1;s2<11;s2++){
					s3=s1*s2;
					printf("%d X %d =%d\n",s1,s2,s3);
				}
				 }break;
		case 15: printf("3 Basamakl� Say�y� Giriniz:"); scanf("%d",&s1);
				 birler=s1%10;
				 onlar=s1/10;
				 onlar=onlar%10;
				 yuzler=s1/100;
				 printf("Birler Basama��=%d\n",birler);
				 printf("Onlar Basama��=%d\n",onlar);
				 printf("Y�zler Basama��=%d\n",yuzler);break;
				 
		default:printf("Hatal� Say� Giri�ini Yapt�n�z!!");
	}
	
	
	
	
	
	
	
	return 0;
}
