#include <iostream>
#include "projek3.cpp"

int main(){
    int n1,n2,n3;
    char n4;
    nodePtr n;
    stack s;
    queue q;
    list l;
    l.head = nullptr;
    l.tail = nullptr;

    MAINMENU:
    std::cout << "Selamat datang di " << std::endl;
    std::cout << "Program vaksinasi Masyarakat " << std::endl;
    std::cout << "Rumah Sakit Bahagia Sembuh" << std::endl;
    std::cout << "Jl. Ankasa Raya No.14" << std::endl;
    std::cout << std::endl;
    std::cout << "Masukkan angka yang tertera pada layar (ketik 0 untuk keluar)" << std::endl;
    std::cout << "1. Pasien" << std::endl;
    std::cout << "2. Admin" << std::endl;
    std::cout << "Masukkan angka : " << std::endl;
    std::cin >> n1;
    switch(n1){
        case 0 :
            break;
            system("cls");
        case 1 :
            std::cout << "Masukkan no KTP,nama, alamat, umur dan pekerjaan" << std::endl;
            std::cout << "Pekerjaan (masukkan nomor yang sesuai) : " << std::endl;
            std::cout << "1. Tenaga Medis, Pendidikan, dan sishankam" << std::endl;
            std::cout << "2. PNS" << std::endl;
            std::cout << "3. Karyawan Swasta" << std::endl;
            std::cout << "Masukkan nomor : ";
            createElementStack(n);
            push(s,n,q);
            std::cout << "Data anda berhasil dimasukkan" << std::endl;
            std::cout << "Harap ditunggu untuk informasi selanjutnya" << std::endl;
            std::cout << "Jika ada pertanyaan dapat menghubungi no.Telp : 08124556677" << std::endl;
            std::cout << "Ketik 0 untuk kembali"<< std::endl;
            std::cin >> n3;
            if(n3 == 0){
                goto MAINMENU;
            } else {
                std::cout << "Masukkan nomor yang sesuai";
            }
        case 2 :
            ADMINMENU:
            std::cout << "Masukkan angka yang tertera pada layar, ketik 0 untuk kembali" << std::endl;
            std::cout << "1. Vaksinasi Pasien" << std::endl;
            std::cout << "2. Data Pasien yang sudah divaksin" << std::endl;
            std::cout << "3. Semua data pasien yang daftar" << std::endl;
            std::cout << "4. Semua data pasien prioritas" << std::endl;

            std::cin >> n2;
            switch(n2){
                case 0 :
                    goto MAINMENU;
                case 1 :
                    do {
                        std::cout << "Pasien ";
                        peekQ(q);
                        std::cout << "siap divaksin " << std::endl;
                        std::cout << "Apakah pasien siap divaksin ? (Y/N)" << std::endl;
                        std::cin >> n4;
                        if (n4 == 'Y' || n4 == 'y'){
                            dequeue(q,l);
                        } else if (n4 == 'N' || n4 == 'n'){
                            goto ADMINMENU;
                        } else {
                            std::cout << "Masukkan input yang sesuai" << std::endl;
                        }
                    } while (!isEmpty(q));
                case 2 :
                    std::cout << "Berikut merupakan data pasien yang sudah divaksin" << std::endl;
                    PrintList(l);
                case 3 :
                    std::cout << "Berikut merupakan data pasien yang mendaftar" << std::endl;
                    traversal(s);
                    printQueue(q);
                case 4 :
                    std::cout << "Berikut merupakan data pasien prioritas" << std::endl;
                    printQueue(q);
            }
        default :
            std::cout << "Masukkan nomor yang sesuai" << std::endl;
    }
}