/*Craps adlı oyun:İki zar atılır,toplam 7 veya 11 gelirse oyuncu kazanır.
2,3 veya 12 gelirse kaybeder.Öbür toplamlar ise oyuncunun puanı olacaktır.
Bu durumda oyuncu 7 atmadan önce kendi puanını tutturmalı. */
#include <stdio.h>
#include <stdlib.h>
int toplam(int i,int a,int b);
int main(){
int a,b,c,sum2;
unsigned seed;
//rastgele sayi
printf("Seed giriniz: ");
scanf("%u", &seed);
srand(seed);
a = toplam(1,0,0); //sum
if(a==7 || a==11) printf("Oyunu kazandiniz!");
else if(a==2 || a==3 || a==12) printf("Oyunu kaybettiniz!");
else{
    printf("\n1 girerseniz zar tekrar atilir - Kurallar; \n 7 gelirse kaybedersiniz. \n Zarlarin toplami yine %d ise kazanirsiniz.Bu işlem tekrar edecek.\n 1 Girin: ",a);
    scanf("%d", &b);
    if(b==1){
        sum2=a;
        while(a!=7){
        a = toplam(1,0,0);
        if(a==sum2){
            printf("Oyunu kazandiniz!");
            break;
        }
        else if(a==7) printf("Oyunu kaybettiniz.");
        }
        }
    else printf("Oyunu iptal ettiniz.");
    }
return 0;
}

int toplam(int i,int a,int b){
for(i=1;i<3;i++)
{
b=1+rand() % 6;
printf("\n %d .zar %d 'dir",i,b);
a+=b;
}
printf("\nZarlarinizin toplami %d 'dir.\n",a);
return a;
}

/*b=+1+rand() % 6;
printf("\n %d .zar %d 'dir\n",i,1+rand() % 6);*/