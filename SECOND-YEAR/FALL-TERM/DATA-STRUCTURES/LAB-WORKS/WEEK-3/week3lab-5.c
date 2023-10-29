#include <stdio.h>
#include <stdlib.h>//hafýzadan yer ayýrmak için kullandýðým malloc fonksiyonunun çalýþabilmesi için gerekli kütüphane eklemesi
#include <string.h>//string fonksiyonlarýný kullanabilmek için gerekli kütüphane tanýmlamasý
struct student{
	int num;
	int yas;
	char isim[100];
	struct student *next;
};
typedef struct student st;

st *head=NULL,*newnode=NULL,*tmp;
//programda kullanýlan fonksiyon prototipleri
void menu();
void ekle(int);
void see();
void sil();
int main(){
	menu();
	return 0;
}
void menu(){//seçim yapýlabilen menu fonksiyonu
	int num;
	char name[100];
	while(1){
		printf("LUTFEN BILGILERI GIRINIZ\n(PROGRAMDAN CIKMAK ICIN NUMARAYA -1 GIRINIZ,LISTEYI GORMEK ICIN 0 GIRINIZ ISME GORE SILMEK ICIN -2 GIRINIZ):");
		printf("\nNUMARAYI GIRINIZ:");
		scanf("%d",&num);
		switch (num){
			case -1:
			break;
			case 0:
				see();
			break;
			case -2:
				printf("SILINECEK ISMI GIRINIZ:");
				scanf("%s",name);
				sil(name);
			break;
			default:
				ekle(num);
			break;
				
		}
			
	}
}

void ekle(int numx){//listeye düðüm eklemeye yarayan fonksiyon
	if(head==NULL){//ilk düðümü oluþturmaya yarayan sorgulama bölümü
		head=(st*)malloc(sizeof(st));//hafýzadan yer ayýrmal için kullanýlan fonksiyon	
		tmp=head;//else kýsmýnda kullanmak için head ile beraber tmp eþitleniyor
		head->num=numx;
		printf("YASI GIRINIZ:");
		scanf("%d",&head->yas);
		printf("ISIM GIRINIZ:");
		scanf("%s",head->isim);
		head->next=NULL;
	}else{//head kaybetmeden tmp ile listeye ekleme
		tmp->next=(st*)malloc(sizeof(st));
		tmp=tmp->next;
		tmp->num=numx;
		printf("YASI GIRINIZ:");
		scanf("%d",&tmp->yas);
		printf("ISIM GIRINIZ:");
		scanf("%s",tmp->isim);
		tmp->next=NULL;	
	}
}
void see(){//listeyi ekrana yazdýran fonksiyon
	if(head==NULL){
		printf("DAHA ONCESINDE BIR OGRENCI GIRILMEDI...");
		return;
	}
	tmp=head;//head kaybetmemek için tmp ile eþitleniyor
	while (tmp != NULL){
			printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n\n",tmp->num,tmp->yas,tmp->isim);
			tmp=tmp->next;
	}
}
void sil(char name[]){//isme gire bir sonraki düðümü silen fonksiyon
	tmp=head;
	st *del;
	while(tmp!=NULL&&tmp->next!=NULL){
		if(strcmp(tmp->next->isim,name)==0){
			printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n\n",tmp->next->num,tmp->next->yas,tmp->next->isim);
				tmp=tmp->next;//bulduktan sonra bir sonraki düðüme geçiþ için kullanýlýyor
				del=tmp->next;//silinecek kýsým
				tmp->next=tmp->next->next;
				free(del);//silme fonksiyonu
				printf("BIR SONRAKI BASARIYLA SILINDI");
			break;
		}
		else
			tmp=tmp->next;
	}
	printf("\nBOYLE BIR KAYIT BULUNAMADI\n");
}
