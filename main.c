#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// DICKY IBROHIM
// Meringkas Program agar tidak menulis code yang sama berkali-kali
typedef struct
{
    int tgl;
    int bulan;
    int tahun;
    char tempat [100];
} Tgl_Lahir;


typedef struct
{
    int no_rumah;
    int rt;
    int rw;
    char jalan [100];
    char kecamatan [100];
    char kota [100];
} Alamat;

typedef struct
{
    char nama [100];
    char nim [100];
    Alamat almt; // STRUCT Alamat DALAM STRUCT Mahasiswa
    Tgl_Lahir lahir;
}Mahasiswa;


int main()
{
    Mahasiswa mhs; // DECLARASI STRUCT Mahasiswa di Main sebagai Type data mhs
    strcpy (mhs.nama, "DICKY");
    strcpy (mhs.nim, "A11.2000.08xx");
    mhs.almt.no_rumah= 97;
    mhs.almt.rt= 01;
    mhs.almt.rw= 03;
    strcpy (mhs.almt.jalan,"Jalan Sreni Indah"); //Input
    strcpy (mhs.almt.kecamatan, "Kec. Nalumsari");
    strcpy (mhs.almt.kota, "Jepara");
    printf ("Nama\t: %s\n", mhs.nama);
    printf ("Alamat\t: %s %d", mhs.almt.jalan, mhs.almt.no_rumah);
    mhs.lahir.tgl= 01;
    mhs.lahir.bulan= 01;
    mhs.lahir.tahun=1997;
    strcpy (mhs.lahir.tempat, "BLORA");
    printf ("\nTganggal: %d\nBulan\t: %d\t\nTahun\t: %d\n", mhs.lahir.tgl, mhs.lahir.bulan, mhs.lahir.tahun );
    printf ("Di\t: %s\n", mhs.lahir.tempat);

    return 0;
}
