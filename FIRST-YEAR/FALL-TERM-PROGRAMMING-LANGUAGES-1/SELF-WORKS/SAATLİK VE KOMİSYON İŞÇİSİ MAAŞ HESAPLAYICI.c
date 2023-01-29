#include<stdio.h>
int hesaplaSaatlikIsci(int saatlik);
int hesaplaKmisyonIsci(int komisyon);
int main(){
	int a,saatlik,komisyon,s,k;
	printf("Odeme Kodunu Giriniz(1:Saatlik Calisan 2:Komisyon Calisani):");
	scanf("%d",&a);
	if(a==1){
		printf("Toplam Calisma Saatini Giriniz:");
		scanf("%d",&saatlik);
		s=hesaplaSaatlikIsci(saatlik);
		printf("Maas:%d TL",s);
	}
	else if(a==2){
		printf("Aylik Toplam Satis Miktarini Giriniz:");
		scanf("%d",&komisyon);
		k=hesaplaKomisyonIsci(komisyon);
		printf("Maas:%d",k);
	}
	else
		printf("Yanlis Maas Kodu");
	return 0;
}
int hesaplaSaatlikIsci(int saatlik){
	int i,maas1=0,maas2,mesai=75;
		for(i=0;i<saatlik;i++){
			if(i==40){
				for(i;i<=saatlik;i++)
					maas2=maas1+mesai;
			}
			
			maas1=maas1+50;
		}
	if(saatlik<=40)
	return maas1;
	else
	return maas2;
}
int hesaplaKomisyonIsci(int komisyon){
	int maas=500;
	float x=5.5;
	maas=maas+(komisyon*x)/100;
	return maas;
}
