//k�t�phane eklemeleri
#include<stdio.h> 
#include<stdlib.h>
//fonksiyon prototipleri
void menu();
void tek(int);
void cift(int);
void see();
//struct tan�mlamas�
struct number{
	int x;
	struct number *next;
};
//typedef ile yeni struct isim tan�mlamas�
typedef struct number st;
//program�n her yerinde rahat�a kullanabilmek i�in global tan�mlamalar
st *head=NULL,*newnode=NULL;
//main fonksiyonu
int main(){
	menu();
	return 0;
}
//main i�inde �al��an menu fonksiyonu
void menu(){
	int num,x;
	while(1){
		printf("LUTFEN BIR SAYI GIRINIZ(PROGRAMDAN CIKMAK ICIN -1 GIRINIZ):");
		scanf("%d",&num);
		if(num==-1){
			see();
			break;
		}	
		x=num%2;//girilen say�n�n 2 ile modunu al�yorum tek mi �ift mi bulmak i�in
		switch(x){
			case 1://e�er mod 2 == 1 ise tek say� demektir
				tek(num);
			break;
			case 0://mod 2 si == 0 ise �ift say�d�r �ift say�lar� sona ekleme fonksiyonu �a��r�l�yor
				cift(num);
			break;
			default://2 ile modunu ald���mdan bu k�s�m�n �al��mamas� gerekiyor her ihtimale kar�� yaz�yorum
				printf("YANLIS DEGER PROGRAMDAN CIKILIYOR...");
				exit(0);
			break;
		}	
	}
}
void tek(int num){//tek say�lar� ba�a ekleyen fonksiyon
	if(head==NULL){//head==NULL ise daha �ncesinden head i�in haf�zada bir yer ayr�lmam�� demektir 
		head=(st*)malloc(sizeof(st));//malloc ile haf�zada yer al�yorum
		head->x=num;
		head->next=NULL;
	}else{
		newnode=(st*)malloc(sizeof(st));
		newnode->x=num;
		newnode->next=head;//d���m� listenin ba��na ekliyorum
		head=newnode;//yeni head newnode diyip headi ba�a �ekiyorum
	}
}
void cift(int num){//�ift say�lar� sona ekleyen fonksiyon
	st *tmp=(st*)malloc(sizeof(st));//d���mde ilerleyip son eleman� bulmak i�in bir tmp d���m� olu�turuyorum
	tmp=head;//head kaybetmemek i�in
	if(head==NULL){
		head=(st*)malloc(sizeof(st));//haf�zadan yer ay�rma i�lemi
		head->x=num;
		head->next=NULL;
	}else{
		newnode=(st*)malloc(sizeof(st));//haf�zada yeni bir d���m olu�turma
		newnode->x=num;
		while(tmp->next!=NULL)//listenin sonunu bulmak i�in bir while d�ng�s�
			tmp=tmp->next;
		tmp->next=newnode;//listenin sonuna ba�lama i�lemi
		newnode->next=NULL;	
	}
}
void see(){//ekranda g�r�nt�leme fonksiyonu
	if(head==NULL){
		printf("DAHA ONCESINDE BIR SAYI GIRILMEDI...");
		return;
	}
	st *tmp=(st*)malloc(sizeof(st));//head kaybetmemek i�in yeniden bir tmp ile listeyi yazd�r�yorum
	tmp=head;
	while(tmp!=NULL){
			printf("%d\t",tmp->x);
			tmp=tmp->next;
	}
}
