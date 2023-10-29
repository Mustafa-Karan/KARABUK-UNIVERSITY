#include <stdio.h>
#include <stdlib.h>
struct student{//tutmak istedi�im veri tiplerini tutan struct 
	int num;
	int yas;
	char isim[100];
	struct student *next;//listeyi birbirine ba�layabilmemizi sa�layan next pointer
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
void menu(){//kullan�c�n�n se�im yapabildi�i menu fonksiyonu
	int num;
	while(1){
		printf("LUTFEN BILGILERI GIRINIZ\n(PROGRAMDAN CIKMAK ICIN NUMARAYA -1 GIRINIZ,LISTEYI GORMEK ICIN 0 GIRINIZ):");
		printf("\nNUMARAYI GIRINIZ:");
		scanf("%d",&num);
		if(num==-1)
			break;
		else if(num==0)
			see();
		else
			ekle(num);
	}
}

void ekle(int numx){//listenin sonuna d���m eklemeye yarayan fonksiyon
	if(head==NULL){//ilk d���m� olu�turan kod
		head=(st*)malloc(sizeof(st));
		tmp=head;
		head->num=numx;
		printf("YASI GIRINIZ:");
		scanf("%d",&head->yas);
		printf("ISIM GIRINIZ:");
		scanf("%s",head->isim);
		head->next=NULL;
	}else{//head d���m�n� kaybetmeden tmp ile yeni d���mleri listeye ekleyen kod
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
void see(){//listeyi g�r�nt�leyen fonksiyon
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
