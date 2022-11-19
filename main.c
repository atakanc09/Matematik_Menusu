#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	printf("****MATEMATÝK MENÜSÜ*****\n\n");
	printf("1-Karenin Çevresi ve Alaný\n");
	printf("2-Dikdörtgenin Çevresi ve Alaný\n");
	printf("3-Ýki Sayýnýn Çarpýmý\n");
	printf("4-Faktöriyel Bulma\n");
	printf("5-Girilen Sayýnýn Karesini Alma\n");
	printf("6-Girilen Sayýnýn Küpünü Alma\n");
	printf("7-5x2+6x+8 x e göre Denklemi Çözme\n");
	printf("8-Faiz Hesaplama\n");
	printf("9-Yamuðun Çevresini Hesaplama\n");
	printf("10-Yamuðun Alanýný Hesaplama\n");
	printf("11-Üçgenin Çevresini Hesaplama\n");
	printf("12-Üçgenin Alanýný Hesaplama\n");
	printf("13-Gidilen Mesafeyi Hesaplama\n");
	printf("14-Çarpým Tablosu\n");
	printf("15-Üç Basamaklý Sayýyý Basamaklarýna Ayýrma\n\n");
	int secim,kenar,kisakenar,uzunkenar,s1,s2,s3,s4,i,fakt,birler,onlar,yuzler;
	printf("Lütfen Yapmak Ýstediðiniz Ýþlemi Seçiniz:");
	scanf("%d",&secim); printf("\n");
	
	switch(secim){
		case 1: printf("Kenar Uzunluðunu Giriniz:"); scanf("%d",&kenar);
				printf("Çevresi=%d\n",(kenar*4)); printf("Alaný=%d",(kenar*kenar));break;
		
		case 2: printf("Kýsa Kenarý Giriniz:"); scanf("%d",&kisakenar);
				printf("Uzun Kenarý Giriniz:"); scanf("%d",&uzunkenar);
				printf("Çevresi=%d\n",(2*(kisakenar+uzunkenar))); printf("Alaný=%d",(kisakenar*uzunkenar));break;
		
		case 3: printf("1.Sayýyý Giriniz:"); scanf("%d",&s1);
				printf("2.Sayýyý Giriniz:"); scanf("%d",&s2);
				printf("Sonuç=%d",(s1*s2));break;
				
		case 4: printf("Faktöriyelini Alýnmasýný Ýstediðiniz Sayýyý Giriniz:"); scanf("%d",&s1);
			 	for(i=1;i<=s1;i++){
			 		fakt=fakt*i;
				 }	
				 printf("%d!=%d",s1,fakt);break;
				 
		case 5: printf("Karesinin Alýnmasýný Ýstediðiniz Sayýyý Giriniz:"); scanf("%d",&s1);
				printf("Sonuç=%d",(s1*s1));break;
				
		case 6: printf("Küpünün Alýnmasý Ýstediðiniz Sayýyý Giriniz:"); scanf("%d",&s1);
				printf("Sonuç=%d",(s1*s1*s1));break;
				
		case 7: printf("x Deðerini Giriniz:"); scanf("%d",&s1);
				printf("5x2+6x+8=%d",(5*s1*s1+6*s1+8));break;
				
		case 8: printf("Ana Parayý Giriniz:"); scanf("%d",&s1);
				printf("Faiz Oranýný Giriniz:"); scanf("%d",&s2);
				printf("%dTL Faiz Sonrasý %dTL Olur.",s1,(s1+(s1*s2/100)));break;
				
		case 9: printf("1.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s1);
				printf("2.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s2);
				printf("3.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s3);
				printf("4.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s4);
				printf("Yamuðun Çevresi=%d",(s1+s2+s3+s4));break;
				
		case 10: printf("1.Taban Uzunluðunu Giriniz:"); scanf("%d",&s1);
				 printf("2.Taban Uzunluðunu Giriniz:"); scanf("%d",&s2);
				 printf("Yüksekliði Giriniz:"); scanf("%d",&s3);
				 printf("Yamuðun Alaný=%d",((s1+s2)/2*s3));break;
				 
		case 11: printf("1.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s1);
				 printf("2.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s2);
				 printf("3.Kenar Uzunluðunu Giriniz:"); scanf("%d",&s3);
				 printf("Üçgenin Çevresi=%d",(s1+s2+s3));break;
				 
		case 12: printf("Taban Uzunluðunu Giriniz:"); scanf("%d",&s1);
				 printf("Yüksekliði Giriniz:"); scanf("%d",&s2);
				 printf("Üçgenin Alaný=%d",(s1*s2/2));break;
				 
		case 13: printf("Hýzýnýzý Yazýnýz:"); scanf("%d",&s1);
				 printf("Kaç Saattir Yoldasýnýz:"); scanf("%d",&s2);
				 printf("Almýþ Olduðunuz Mesafe %dkm dir.",(s1*s2));break;
				 
		case 14: printf("****Çarpým Tablosu****\n");
				 for(s1=1;s1<11;s1++){
				 	printf("-----------------\n");
				for(s2=1;s2<11;s2++){
					s3=s1*s2;
					printf("%d X %d =%d\n",s1,s2,s3);
				}
				 }break;
		case 15: printf("3 Basamaklý Sayýyý Giriniz:"); scanf("%d",&s1);
				 birler=s1%10;
				 onlar=s1/10;
				 onlar=onlar%10;
				 yuzler=s1/100;
				 printf("Birler Basamaðý=%d\n",birler);
				 printf("Onlar Basamaðý=%d\n",onlar);
				 printf("Yüzler Basamaðý=%d\n",yuzler);break;
				 
		default:printf("Hatalý Sayý Giriþini Yaptýnýz!!");
	}
	
	
	
	
	
	
	
	return 0;
}
