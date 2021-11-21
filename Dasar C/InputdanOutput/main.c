#include <stdio.h>
#include <stdlib.h>

void main() {


    // Contoh fungsi output printf();
    // Fungsi printf() merupakan fungsi untuk menampilkan output ke layar komputer. Fungsi ini terdapat pada library stdio.h.

    /* printf("Hello, ini adalah teks output\n");
    printf("nama saya %s\n", "Syaiful");
    printf("Usia saya %d\n", 16); */

    //Contoh fungsi output puts();
    // Fungsi puts() adalah fungsi untuk menampilkan output. Fungsi ini juga terdapat pada library stdio.h. Fungsi puts membuat baris baru. Jadi tidak memerlukan \n.

    /*
    puts("Hello World");
    puts("Nama Saya Syaiful");
    */

    // Input pada c
    //1. Fungsi input scanf();
    // Fungsi scanf() adalah fungsi untuk mengambil input dari keyboard. Fungsi ini memiliki format seperti fungsi printf().

    // membuat variabel
    /*
    char name[20], web_address[30], nama_sosmed[100];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("Nama sosmed: ");
    scanf("%s", &nama_sosmed);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
    printf("Nama sosmed yang diinputkan: %s\n", nama_sosmed);
    */

    // 2. Fungsi gets()
    //Fungsi gets() adalah fungsi untuk mengambil input dalam satu baris. Fugnsi gets() tidak       memerlukan format seperti scanf().

   /*
   char name[50], web_address[50];

   printf("Nama: ");
   gets(name);

   printf("Alamat web: ");
   gets(web_address);

   printf("You entered: %s\n", name);
   printf("Web address: %s\n", web_address);
   */

   /*
   char nama[50], alamat[50], jenisKelamin[20];

   printf("Nama: ");
   gets(nama);

   printf("Alamat: ");
   gets(alamat);

   printf("Jenis kelamin: ");
   gets(jenisKelamin);

   printf("\n==================================\n");
   printf("Nama kamu: %s\n", nama);
   printf("Alamat kamu: %s\n", alamat);
   printf("Jenis kelamin kamu: %s\n", jenisKelamin);
   */

   // 3.Fungsi fgets();
   //Fungsi fgets() lebih aman dibandingkan gets(), karena kita bisa menentukan ukuran buffer dan sumber inputan.

   /*Ukuran buffer adalah batas ukuran panjang string yang diinputkan. Lalu stdin adalah sumber inputan dari keyboard.
Kita juga bisa mengambil input dari file dengan fgets() dengan memasukan pointer FILE pada stdin.
*/

   /* char nama[50], email[50];

   printf("Nama: ");
   fgets(nama, sizeof(nama), stdin);

   printf("Email: ");
   fgets(email, sizeof(email), stdin);

   printf("\n===========================\n");
   printf("Nama anda: %s\n", nama);
   printf("Email anda: %s\n", email);
    */



}


