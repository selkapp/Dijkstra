#include<stdio.h>
#define MAX 22
#define sonsuz 9999.

struct dugum
{
    int onceki;
    int minimum_mesafe;
    int durum;
};

int sehir_matris[ MAX ][ MAX ];
int n;
void graf_olustur(){

    /* int sehirMatrisi[22][22] = { {-1, 233, 191, 131, 184, 75, 225, 258, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {233, -1, -1, -1, -1, -1, -1, -1, 144, 78, 82, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {191, -1, -1, 233, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {131, -1, 233, -1, -1, 105, -1, -1, -1, -1, -1, 112, 193, 156, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {184, -1, -1, -1, -1, -1, 310, -1, -1, -1, -1, -1, -1, -1, 245, 305, -1, -1, -1, -1, -1, -1},
                                 {75, -1, -1, 105, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {225, -1, -1, -1, 310, -1, -1, 148, -1, -1, -1, -1, -1, -1, -1, 75, -1, -1, -1, -1, -1, -1},
                                 {258, -1, -1, -1, -1, -1, 148, -1, 223, -1, -1, -1, -1, -1, -1, -1, -1, 242, 263, 322, 119, 348},
                                 {-1, 144, -1, -1, -1, -1, -1, 223, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, 78, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, 82, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, 112, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, 193, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, 156, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, 245, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 190, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, 305, -1, 75, -1, -1, -1, -1, -1, -1, -1, 190, -1, 81, 82, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 81, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, -1, -1, -1, 242, -1, -1, -1, -1, -1, -1, -1, 82, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, -1, -1, -1, 263, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, -1, -1, -1, 322, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, -1, -1, -1, 119, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                 {-1, -1, -1, -1, -1, -1, -1, 348, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
                               };

          sehirler arası mesafeler
                               */

 n = 22;
 sehir_matris[1][2] = 233;
sehir_matris[2][1] = 233;
sehir_matris[1][3] = 191;
sehir_matris[3][1] = 191;
sehir_matris[1][4] = 131;
sehir_matris[4][1] = 131;
sehir_matris[1][6] = 75;
sehir_matris[6][1] = 75;
sehir_matris[1][5] = 184;
sehir_matris[5][1] = 184;
sehir_matris[1][7] = 225;
sehir_matris[7][1] = 225;
sehir_matris[1][8] = 258;
sehir_matris[8][1] = 258;
sehir_matris[2][9] = 144;
sehir_matris[9][2] = 144;
sehir_matris[2][10] = 78;
sehir_matris[10][2] = 78;
sehir_matris[2][11] = 82;
sehir_matris[11][2] = 82;
sehir_matris[4][12] = 112;
sehir_matris[12][4] = 112;
sehir_matris[4][13] = 193;
sehir_matris[13][4] = 193;
sehir_matris[4][3] = 233;
sehir_matris[3][4] = 233;
sehir_matris[4][14] = 156;
sehir_matris[14][4] = 156;
sehir_matris[4][6] = 105;
sehir_matris[6][4] = 105;
sehir_matris[5][15] = 245;
sehir_matris[15][5] = 245;
sehir_matris[5][16] = 305;
sehir_matris[16][5] = 305;
sehir_matris[5][7] = 310;
sehir_matris[7][5] = 310;
sehir_matris[16][17] = 81;
sehir_matris[17][16] = 81;
sehir_matris[16][18] = 82;
sehir_matris[18][16] = 82;
sehir_matris[16][15] = 190;
sehir_matris[15][16] = 190;
sehir_matris[16][7] = 75;
sehir_matris[7][16] = 75;
sehir_matris[8][9] = 223;
sehir_matris[9][8] = 223;
sehir_matris[8][19] = 263;
sehir_matris[19][8] = 263;
sehir_matris[8][20] = 322;
sehir_matris[20][8] = 322;
sehir_matris[8][21] = 119;
sehir_matris[21][8] = 119;
sehir_matris[8][22] = 348;
sehir_matris[22][8] = 348;
sehir_matris[8][18] = 242;
sehir_matris[18][8] = 242;
sehir_matris[8][7] = 148;
sehir_matris[7][8] = 148;



}

int yolu_bul(int s, int d, int yol[ MAX ], int* sminimum_mesafe) {
    struct dugum suanki_yerim[ MAX ];
    int i, min, sayac = 0, simdiki, newminimum_mesafe, u, v;
    *sminimum_mesafe = 0;
    for (i = 1; i <= n; i++){
        suanki_yerim[i].onceki = 0; //dugumleri rastgele doldurduk  for 23 tane dugum aciyor
        suanki_yerim[i].minimum_mesafe = sonsuz; //s baslangic dugumu
        suanki_yerim[i].durum = 0;
    }
    suanki_yerim[s].onceki = 0;
    suanki_yerim[s].minimum_mesafe = 0;
    suanki_yerim[s].durum = 1;

    simdiki = s;
    while (simdiki != d){
        for (i = 1; i <= n; i++){
            if (sehir_matris[simdiki][i] > 0 && suanki_yerim[i].durum == 0){ //girilen yerden butun sehirleri kýyaslar
                newminimum_mesafe = suanki_yerim[simdiki].minimum_mesafe + sehir_matris[simdiki][i];
                if (newminimum_mesafe < suanki_yerim[i].minimum_mesafe){
                    suanki_yerim[i].onceki = simdiki;
                    suanki_yerim[i].minimum_mesafe = newminimum_mesafe;}
            }
        }
        min = sonsuz;
        simdiki = 0;
        for (i = 1; i <= n; i++){
            if (suanki_yerim[i].durum == 0 && suanki_yerim[i].minimum_mesafe < min){
                min = suanki_yerim[i].minimum_mesafe;
                simdiki = i;
            }
        }
        if (simdiki == 0)
            return 0;
        suanki_yerim[simdiki].durum = 1;
    }

    while (simdiki != 0){
        sayac++;
        yol[sayac] = simdiki;
        simdiki = suanki_yerim[simdiki].onceki;
    }
    for (i = sayac; i > 1; i--){
        u = yol[i];
        v = yol[i - 1];
        *sminimum_mesafe += sehir_matris[u][v];
    }
    return (sayac);
}

void main() {
    printf(" Ankara-1     Eskisehir-2  \n Bolu-3       Cankiri-4 \n Kirsehir-5   Kirikkale-6 \n Aksaray-7    Konya-8 \n Afyon-9      Kutahya-10 \n Bilecik-11  ");
    printf(" Kastamonu-12 \n Karabuk-13   Corum-14 \n Yozgat-15    Nevsehir-16 \n Kayseri-17   Nigde-18 \n Isparta-19   Antalya-20 \n Karaman-21   Mersin-22 \n \n ");

    int i;
    int ilk, ikinci ,k;
    int yol[ MAX ];
    int shortminimum_mesafe, sayac;
    graf_olustur();

    int menu;
    int secim;
    while(1){
        printf("\nIki Sehir Arasindaki Yolu Bulmak Icin 0 Tuslayiniz.\n");
        printf("Bir Sehirden Butun Sehirlere Yolu Bulmak Icin 1  Tuslayiniz. \n \n");
        scanf("%d",&secim);
        if(secim==0){
            while (1){
                printf("1.Sehir giriniz : ");
                scanf("%d", &ilk);
                printf("2.Sehir giriniz : ");
                scanf("%d", &ikinci);
                sayac = yolu_bul(ilk, ikinci, yol, &shortminimum_mesafe);
                if (shortminimum_mesafe != 0){
                    printf("En kisa mesafe / maliyet : %d\n", shortminimum_mesafe);
                    printf("En kisa yol : ");
                    for (i = sayac; i > 1; i--)
                        printf("%d-->", yol[i]);
                    printf("%d", yol[i]);
                    printf("\n");
                    printf("\nAna menuye donmek icin '3' tusuna basiniz.");
                    printf("\nTekrar sorgulamak icin '4' tusuna basiniz.");
                    scanf("%d",&menu);
                    if(menu==4){
                        continue;
                    }
                    else if(menu==3){
                        break;
                    }
                }
                else
                    printf("Bu iki sehir arasinda yol bulunmamaktadir.\n");
            }
        }

        else if(secim==1){
            while(1){
                printf("\nBaslangic sehrini giriniz :\n ");
                scanf("%d", &ilk);
                for (k=1 ; k<22 ;k++){
                    sayac = yolu_bul( ilk, k,yol ,&shortminimum_mesafe);
                    printf("\n En kisa mesafe / maliyet  : %d\n", shortminimum_mesafe);
                    printf("\n En kisa yol  : ");
                    for (i = sayac; i > 1; i--)
                        printf("%d-->", yol[i]);
                    printf("%d", yol[i]);
                    printf("\n");

                    }printf("\nAna menuye donmek icin '3' tusuna basiniz.");
                    printf("\nTekrar sorgulamak icin '4' tusuna basiniz.");
                    scanf("%d",&menu);
                    if(menu==4){
                        continue;
                    }
                    else if(menu==3){
                        break;
                }
            }
        }
    }
}
