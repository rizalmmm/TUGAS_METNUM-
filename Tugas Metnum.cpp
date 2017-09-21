

#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int pangkat(int a, int b);
void Fungsi(int a, int b);
void program();

int main(){
	int a,b,pilih,hasil;
    program:       
   
   printf("\n\n PROGRAM ARITMATIKA");
   printf("\n\n RIZAL MUHAMMAD ");
   printf("\n\n 3411151072 ");
   printf("\n\n SIE - B ");
   printf("\n\n ");
   program();
   printf("\n\n Masukkan Pilihan : "); scanf("%d", &pilih);
   
	switch(pilih){
	case 1:
   	system("cls");
		printf(" Penjumlahan");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
		hasil = tambah(a,b);
		printf("\n%d + %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto program;

    case 2:
   	system("cls");
		printf(" Pengurangan");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
		hasil = kurang(a,b);
		printf("\n%d - %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto program;

    case 3:
   	system("cls");
		printf(" Perkalian");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
		hasil = kali(a,b);
		printf("\n%d * %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto program;

    case 4:
   	system("cls");
		printf(" Pangkat");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan pangkat : "); scanf("%d", &b);
		hasil = pangkat(a,b);

      getch();
      system("cls");
      goto program;

    case 5:
   	system("cls");
		printf("Fungsi");
		printf("\n\nMasukkan bilangan A : "); scanf("%d", &a);
		printf("\nMasukkan bilangan B : "); scanf("%d", &b);
      Fungsi(a,b);

      getch();
      system("cls");
      goto program;

    case 6:
    	system("cls");
      getch();
    	return 0;
      break;
      default: printf("\n\t\tPILIHAN SALAH !!!!");

      getch();
      system("cls");
      goto program;

    }
}

void program(){
	int pilih;

	
	printf("\t\n\n1. Tambah");
	printf("\t\n2. Kurang");
	printf("\t\n3. Kali");
	printf("\t\n4. Pangkat");
	printf("\t\n5. Fungsi");
    printf("\t\n6. Keluar");
}

int tambah(int a, int b){
	int hasil;

	hasil = a + b;
	return(hasil);
}

int kurang(int a, int b){
	int hasil;

	hasil = a - b;
	return(hasil);
}

int kali(int a, int b){
	int hasil;

	hasil = a * b;
	return(hasil);
}

int pangkat(int a, int b){
	int hasil;

	hasil = pow(a,b);
	printf("\n%d ^ %d = %d", a, b, hasil);
}

void Fungsi(int a, int b){
	int q,hasil;

	for(q=a;q<=b;q++){
		hasil = (3*(q*q)) + (q) - 1;
      printf("\n3x^2+x-1 : %d", hasil);
	}
}
