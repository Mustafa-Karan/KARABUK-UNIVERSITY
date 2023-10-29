//kütüphane eklemeleri
#include<stdio.h> 
#include<stdlib.h>
//fonksiyon prototipleri
void menu();
void tek(int);
void cift(int);
void see();
//struct tanýmlamasý
struct number{
	int x;
	struct number *next;
};
//typedef ile yeni struct isim tanýmlamasý
typedef struct number st;
//programýn her yerinde rahatça kullanabilmek için global tanýmlamalar
st *head=NULL,*newnode=NULL;
//main fonksiyonu
int main(){
	menu();
	return 0;
}
//main içinde çalýþan menu fonksiyonu
void menu(){
	int num,x;
	while(1){
		printf("LUTFEN BIR SAYI GIRINIZ(PROGRAMDAN CIKMAK ICIN -1 GIRINIZ):");
		scanf("%d",&num);
		if(num==-1){
			see();
			break;
		}	
		x=num%2;//girilen sayýnýn 2 ile modunu alýyorum tek mi çift mi bulmak için
		switch(x){
			case 1://eðer mod 2 == 1 ise tek sayý demektir
				tek(num);
			break;
			case 0://mod 2 si == 0 ise çift sayýdýr çift sayýlarý sona ekleme fonksiyonu çaðýrýlýyor
				cift(num);
			break;
			default://2 ile modunu aldýðýmdan bu kýsýmýn çalýþmamasý gerekiyor her ihtimale karþý yazýyorum
				printf("YANLIS DEGER PROGRAMDAN CIKILIYOR...");
				exit(0);
			break;
		}	
	}
}
void tek(int num){//tek sayýlarý baþa ekleyen fonksiyon
	if(head==NULL){//head==NULL ise daha öncesinden head için hafýzada bir yer ayrýlmamýþ demektir 
		head=(st*)malloc(sizeof(st));//malloc ile hafýzada yer alýyorum
		head->x=num;
		head->next=NULL;
	}else{
		newnode=(st*)malloc(sizeof(st));
		newnode->x=num;
		newnode->next=head;//düðümü listenin baþýna ekliyorum
		head=newnode;//yeni head newnode diyip headi baþa çekiyorum
	}
}
void cift(int num){//çift sayýlarý sona ekleyen fonksiyon
	st *tmp=(st*)malloc(sizeof(st));//düðümde ilerleyip son elemaný bulmak için bir tmp düðümü oluþturuyorum
	tmp=head;//head kaybetmemek için
	if(head==NULL){
		head=(st*)malloc(sizeof(st));//hafýzadan yer ayýrma iþlemi
		head->x=num;
		head->next=NULL;
	}else{
		newnode=(st*)malloc(sizeof(st));//hafýzada yeni bir düðüm oluþturma
		newnode->x=num;
		while(tmp->next!=NULL)//listenin sonunu bulmak için bir while döngüsü
			tmp=tmp->next;
		tmp->next=newnode;//listenin sonuna baðlama iþlemi
		newnode->next=NULL;	
	}
}
void see(){//ekranda görüntüleme fonksiyonu
	if(head==NULL){
		printf("DAHA ONCESINDE BIR SAYI GIRILMEDI...");
		return;
	}
	st *tmp=(st*)malloc(sizeof(st));//head kaybetmemek için yeniden bir tmp ile listeyi yazdýrýyorum
	tmp=head;
	while(tmp!=NULL){
			printf("%d\t",tmp->x);
			tmp=tmp->next;
	}
}
