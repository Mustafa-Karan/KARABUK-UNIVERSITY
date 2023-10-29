#include <stdio.h>
#include <stdlib.h>
#include <string.h>//string fonksiyonlar�n� kullanabilmek i�in k�t�phane tan�mlamas�
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

int main(){
	menu();
	return 0;
}
void menu(){//kullan�c�n�n se�im yapabilece�i menu fonksiyonu
	int num;
	char name[100];
	while(1){
		printf("LUTFEN BILGILERI GIRINIZ\n(PROGRAMDAN CIKMAK ICIN NUMARAYA -1 GIRINIZ,LISTEYI GORMEK ICIN 0 GIRINIZ ISME GORE ARAMA ICIN -2 GIRINIZ):");
		printf("\nNUMARAYI GIRINIZ:");
		scanf("%d",&num);
		switch (num){
			case -1:
				return 0;
			break;
			case 0:
				see();
			break;
			case -2:
				printf("ARANACAK ISMI GIRINIZ:");
				scanf("%s",name);
				ara(name);
			break;
			default:
				ekle(num);
			break;			
		}		
	}
}
void ekle(int numx){//listeye ekleme yapan fonksiyon
	if(head==NULL){//ilk d���m�n olu�turuldu�u k�s�m
		head=(st*)malloc(sizeof(st));
		tmp=head;
		head->num=numx;
		printf("YASI GIRINIZ:");
		scanf("%d",&head->yas);
		printf("ISIM GIRINIZ:");
		scanf("%s",head->isim);
		head->next=NULL;
	}else{//ilk d���mden sonraki t�m d���mler tmp ile listeye ekleniyor head kaybetmemek i�in
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
void see(){//girilen bilgileri ekrana yazd�ran fonksiyon
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
void ara(char name[]){//girilen isme g�re listede arama yapan fonksiyon
	tmp=head;
	while(tmp!=NULL){
		if(strcmp(tmp->isim,name)==0){//girilen ismi strcmp ile listedeki isimlerle kar��la�t�ran k�s�m
			printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n\n",tmp->num,tmp->yas,tmp->isim);
			return 0;
		}
		else
			tmp=tmp->next;
	}
	printf("\nBOYLE BIR KAYIT BULUNAMADI\n");
}
