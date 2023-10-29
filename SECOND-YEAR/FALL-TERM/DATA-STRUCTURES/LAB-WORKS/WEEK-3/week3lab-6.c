#include <stdio.h>
#include <stdlib.h>//bellek fonksiyonlar�n� kullanabilmemiz i�in gerekli k�t�phane tan�mlamas�
struct student{
	int num;
	int yas;
	char isim[100];
	struct student *next;
};
typedef struct student st;
st *head=NULL,*newnode=NULL,*tmp;
void menu();
void ekle(int);
void see();
void enuzun();
int main(){
	menu();
	return 0;
}
void menu(){//kullan�c�n�n se�im yapabilece�i menu fonksiyonu
	int num;
	char name[100];
	while(1){
		printf("LUTFEN BILGILERI GIRINIZ\n(PROGRAMDAN CIKMAK ICIN NUMARAYA -1 GIRINIZ,LISTEYI GORMEK ICIN 0 GIRINIZ EN UZUN ISMI BULMAK ICIN -2 GIRINIZ):");
		printf("\nNUMARAYI GIRINIZ:");
		scanf("%d",&num);
		switch (num){
			case -1:
			break;
			case 0:
				see();
			break;
			case -2:
				enuzun();
			break;
			default:
				ekle(num);
			break;			
		}	
	}
}
void ekle(int numx){//listeye d���m ekleyen fonksiyon
	if(head==NULL){//ikl d���m olu�turmak i�in gerekli olan k�s�m
		head=(st*)malloc(sizeof(st));
		tmp=head;//head kaybetmemek i�in kullan�lan k�s�m
		head->num=numx;
		printf("YASI GIRINIZ:");
		scanf("%d",&head->yas);
		printf("ISIM GIRINIZ:");
		scanf("%s",head->isim);
		head->next=NULL;
	}else{
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
void see(){//ekrana listeyi yazd�ran fonksiyon
	if(head==NULL){
		printf("DAHA ONCESINDE BIR OGRENCI GIRILMEDI...");
		return;
	}
	tmp=head;
	while (tmp != NULL){
			printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n\n",tmp->num,tmp->yas,tmp->isim);
			tmp=tmp->next;
	}
}
void enuzun(){//en uzun ismi bulan ve o d���m� ekrana yazan fonksiyon
	tmp=head;
	st *uzun;
	uzun=(st*)malloc(sizeof(st));
	int uzunluk=0;
	while(tmp!=NULL){	
		if(uzunluk<strlen(tmp->isim)){
			uzunluk=strlen(tmp->isim);
			uzun=tmp;
			tmp=tmp->next;
		}
		else{
			tmp=tmp->next;
		}
	}
	printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n",uzun->num,uzun->yas,uzun->isim);
	printf("ISIM UZUNLUGU:%d\n",uzunluk);			
}
