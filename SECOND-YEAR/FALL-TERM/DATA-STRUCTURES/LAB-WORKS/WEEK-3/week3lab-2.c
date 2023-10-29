//kütüphane eklemeleri
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//struct tanýmlamasý
struct number{
	int x;
	struct number *next;
};
//typedef ile yeni struct isim tanýmlamasý
typedef struct number st;
//fonksiyon prototipleri
void menu();
void see(st *);
void liste(int);
void duzenle(st *);
//programýn her yerinde rahatça kullanabilmek için global tanýmlamalar
//düzenlenmiþ hali ve eski halini görmek için head ve tmp nin mantýðýnda duzen ve duzenhead oluþturuldu
st *head=NULL,*tmp=NULL,*duzen=NULL,*duzenhead=NULL;
int main(){
	srand(time(NULL));//rastgele sayý üretmek için gerekli olan fonksiyon
	menu();//menu fonksiyonu
	return 0;
}
void menu(){
	int num,x,secim;
	while(1){//sonsuz döngüde olmasýnýn sebebi 2. ve 3. seçenekleri sürekli seçebilmek eðer 1 seçilirse yeni rastgele sayýlý liste oluþturmak
		printf("\nLISTE OLUSTURMAK ICIN 1, LISTEYI GORMEK ICIN 2, DUZENLENMIS HALINI GORMEK ICIN 3 GIRINIZ:");
		scanf("%d",&secim);
		switch (secim){
			case 1:
			for(x=0;x<100;x++){//listeye rastgele üretilmiþ 100 sayý ekleyen for döngüsü
				num=rand()%1000+1;
				liste(num);
			}
			break;
			case 2:
				tmp=head;//head kaybetmemek için fonksiyona tmp=head diyip gönderiliyor
				see(tmp);//ekrana yazdýrma fonksiyonu
			break;
			case 3:		
				duzenle(duzen);//rastgele oluþturulan listenin elemanlarýný sýralayan fonksiyon   
			break;
		}	
	}
}		
void liste(int num){//liste oluþturup yeni düðümleri o listeye baðlayan fonksiyon
	if(head==NULL){//ilk düðümü oluþturan kýsým
		head=(st*)malloc(sizeof(st));//iki kere atama iþlemi yapýlýyor duzen ile duzenhead aslýnda tmp ve head
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
void see(st *t){//recursive olarak ekrana listeyi yazdýran fonksiyon
	if(t==NULL||duzen==NULL){
		return;
	}
			printf("%d->",t->x);
			t=t->next;
			return see(t);
}
void duzenle(st *duzen){//buble sort algoritmasý
	duzen=duzenhead;
    int i,y;

    for(i=0;i<100;i++){//kaç adýmda sort edilecek bu program için 100 adým yeterli 
        while(duzen->next!=NULL){
            if(duzen->x < duzen->next->x){//küçük olaný sað tarafa alan kod
                y=duzen->x;
                duzen->x=duzen->next->x;
                duzen->next->x=y;
                duzen=duzen->next;
            }
            else{//bir sonraki eleman küçük deðilse ilerlemeye yarayan kýsým
                duzen=duzen->next;
            }
        }
        duzen=duzenhead;
    }
    see(duzen);//menude seçenek 3 seçiliyor bu düzenleyip ekrana bastýrma seçeneði 
    		   //o yüzden önce düzenlendi o iþlem bittikten sonra head kaybedilmeden see fonksiyonu çaðýrýlýp ekrana bastýrýldý	
}
