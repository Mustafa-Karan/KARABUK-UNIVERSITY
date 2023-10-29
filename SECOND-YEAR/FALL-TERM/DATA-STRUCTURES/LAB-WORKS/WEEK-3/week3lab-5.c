#include <stdio.h>
#include <stdlib.h>//haf�zadan yer ay�rmak i�in kulland���m malloc fonksiyonunun �al��abilmesi i�in gerekli k�t�phane eklemesi
#include <string.h>//string fonksiyonlar�n� kullanabilmek i�in gerekli k�t�phane tan�mlamas�
struct student{
	int num;
	int yas;
	char isim[100];
	struct student *next;
};
typedef struct student st;

st *head=NULL,*newnode=NULL,*tmp;
//programda kullan�lan fonksiyon prototipleri
void menu();
void ekle(int);
void see();
void sil();
int main(){
	menu();
	return 0;
}
void menu(){//se�im yap�labilen menu fonksiyonu
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

void ekle(int numx){//listeye d���m eklemeye yarayan fonksiyon
	if(head==NULL){//ilk d���m� olu�turmaya yarayan sorgulama b�l�m�
		head=(st*)malloc(sizeof(st));//haf�zadan yer ay�rmal i�in kullan�lan fonksiyon	
		tmp=head;//else k�sm�nda kullanmak i�in head ile beraber tmp e�itleniyor
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
void see(){//listeyi ekrana yazd�ran fonksiyon
	if(head==NULL){
		printf("DAHA ONCESINDE BIR OGRENCI GIRILMEDI...");
		return;
	}
	tmp=head;//head kaybetmemek i�in tmp ile e�itleniyor
	while (tmp != NULL){
			printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n\n",tmp->num,tmp->yas,tmp->isim);
			tmp=tmp->next;
	}
}
void sil(char name[]){//isme gire bir sonraki d���m� silen fonksiyon
	tmp=head;
	st *del;
	while(tmp!=NULL&&tmp->next!=NULL){
		if(strcmp(tmp->next->isim,name)==0){
			printf("\nNUMBER:%d\nYAS:%d\nISIM:%s\n\n",tmp->next->num,tmp->next->yas,tmp->next->isim);
				tmp=tmp->next;//bulduktan sonra bir sonraki d���me ge�i� i�in kullan�l�yor
				del=tmp->next;//silinecek k�s�m
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
