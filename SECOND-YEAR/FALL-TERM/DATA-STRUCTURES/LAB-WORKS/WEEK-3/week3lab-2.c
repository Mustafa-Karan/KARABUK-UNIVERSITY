//k�t�phane eklemeleri
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//struct tan�mlamas�
struct number{
	int x;
	struct number *next;
};
//typedef ile yeni struct isim tan�mlamas�
typedef struct number st;
//fonksiyon prototipleri
void menu();
void see(st *);
void liste(int);
void duzenle(st *);
//program�n her yerinde rahat�a kullanabilmek i�in global tan�mlamalar
//d�zenlenmi� hali ve eski halini g�rmek i�in head ve tmp nin mant���nda duzen ve duzenhead olu�turuldu
st *head=NULL,*tmp=NULL,*duzen=NULL,*duzenhead=NULL;
int main(){
	srand(time(NULL));//rastgele say� �retmek i�in gerekli olan fonksiyon
	menu();//menu fonksiyonu
	return 0;
}
void menu(){
	int num,x,secim;
	while(1){//sonsuz d�ng�de olmas�n�n sebebi 2. ve 3. se�enekleri s�rekli se�ebilmek e�er 1 se�ilirse yeni rastgele say�l� liste olu�turmak
		printf("\nLISTE OLUSTURMAK ICIN 1, LISTEYI GORMEK ICIN 2, DUZENLENMIS HALINI GORMEK ICIN 3 GIRINIZ:");
		scanf("%d",&secim);
		switch (secim){
			case 1:
			for(x=0;x<100;x++){//listeye rastgele �retilmi� 100 say� ekleyen for d�ng�s�
				num=rand()%1000+1;
				liste(num);
			}
			break;
			case 2:
				tmp=head;//head kaybetmemek i�in fonksiyona tmp=head diyip g�nderiliyor
				see(tmp);//ekrana yazd�rma fonksiyonu
			break;
			case 3:		
				duzenle(duzen);//rastgele olu�turulan listenin elemanlar�n� s�ralayan fonksiyon   
			break;
		}	
	}
}		
void liste(int num){//liste olu�turup yeni d���mleri o listeye ba�layan fonksiyon
	if(head==NULL){//ilk d���m� olu�turan k�s�m
		head=(st*)malloc(sizeof(st));//iki kere atama i�lemi yap�l�yor duzen ile duzenhead asl�nda tmp ve head
		duzenhead=(st*)malloc(sizeof(st));
		duzen=(st*)malloc(sizeof(st));
		tmp=(st*)malloc(sizeof(st));
		tmp=head;
		duzen=duzenhead;
		tmp->x=num;
		duzen->x=num;
		tmp->next=NULL;
		duzen->next=NULL;
	}
	else{
		duzen->next=(st*)malloc(sizeof(st));
		tmp->next=(st*)malloc(sizeof(st));
		tmp=tmp->next;
		duzen=duzen->next;
		tmp->x=num;
		duzen->x=num;
		tmp->next=NULL;
		duzen->next=NULL;
	}
}
void see(st *t){//recursive olarak ekrana listeyi yazd�ran fonksiyon
	if(t==NULL||duzen==NULL){
		return;
	}
			printf("%d->",t->x);
			t=t->next;
			return see(t);
}
void duzenle(st *duzen){//buble sort algoritmas�
	duzen=duzenhead;
    int i,y;

    for(i=0;i<100;i++){//ka� ad�mda sort edilecek bu program i�in 100 ad�m yeterli 
        while(duzen->next!=NULL){
            if(duzen->x < duzen->next->x){//k���k olan� sa� tarafa alan kod
                y=duzen->x;
                duzen->x=duzen->next->x;
                duzen->next->x=y;
                duzen=duzen->next;
            }
            else{//bir sonraki eleman k���k de�ilse ilerlemeye yarayan k�s�m
                duzen=duzen->next;
            }
        }
        duzen=duzenhead;
    }
    see(duzen);//menude se�enek 3 se�iliyor bu d�zenleyip ekrana bast�rma se�ene�i 
    		   //o y�zden �nce d�zenlendi o i�lem bittikten sonra head kaybedilmeden see fonksiyonu �a��r�l�p ekrana bast�r�ld�	
}
