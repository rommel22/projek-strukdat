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
    std::cout << std::endl;
    std::cout << "==============================================================" << std::endl;
    std::cout << "                       Selamat datang di " << std::endl;
    std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
    std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
    std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
    std::cout << "==============================================================" << std::endl;
    std::cout << std::endl;
    std::cout << "Masukkan angka yang tertera pada layar (ketik 0 untuk keluar)" << std::endl;
    std::cout << "1. Pasien" << std::endl;
    std::cout << "2. Admin" << std::endl;
    std::cout << "Masukkan angka : ";
    std::cin >> n1;
    switch(n1){
        case 0 :
            break;
            system ("pause");
        case 1 :
            system ("pause");
            std::cout << std::endl;
            std::cout << "==============================================================" << std::endl;
            std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
            std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
            std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
            std::cout << "==============================================================" << std::endl;
            std::cout << std::endl;
            std::cout << "==================================================" << std::endl;
            std::cout << "Masukkan no KTP, nama, alamat, umur, dan pekerjaan" << std::endl;
            std::cout << "Pekerjaan (masukkan nomor yang sesuai) : " << std::endl;
            std::cout << "1. Tenaga Medis, Pendidikan, dan sishankam" << std::endl;
            std::cout << "2. PNS" << std::endl;
            std::cout << "3. Karyawan Swasta" << std::endl;
            std::cout << std::endl;
            createStack(s);
            createQueue(q);
            createElementStack(n);
            push(s,n,q);
            std::cout << std::endl;
            std::cout << "=============================================================" << std::endl;
            std::cout << "\t\tData anda berhasil dimasukkan" << std::endl;
            std::cout << "\tHarap menunggu untuk informasi selanjutnya" << std::endl;
            std::cout << "Jika ada pertanyaan, dapat menghubungi no.Telp : 08124556677" << std::endl;
            std::cout << "=============================================================" << std::endl;
            std::cout << "Ketik : '0' untuk kembali"<< std::endl;
            std::cin >> n3;
            if(n3 == 0){
                system ("pause");
                goto MAINMENU;
            } else {
            std::cout << "==============================================================" << std::endl;
            std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
            std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
            std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
            std::cout << "==============================================================" << std::endl;
                std::cout << "Masukkan nomor yang sesuai";
            }
            std::cout << "--------------------------------------------------------------" << std::endl;
            std::cout << std::endl;
            break;
        case 2 :
            ADMINMENU:
            system ("pause");
            std::cout << std::endl;
            std::cout << "==============================================================" << std::endl;
            std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
            std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
            std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
            std::cout << "==============================================================" << std::endl;
            std::cout << "==============================================================" << std::endl;
            std::cout << "Masukkan angka yang tertera pada layar, ketik 0 untuk kembali" << std::endl;
            std::cout << "1. Vaksinasi Pasien" << std::endl;
            std::cout << "2. Data Pasien yang sudah divaksin" << std::endl;
            std::cout << "3. Semua data pasien yang daftar" << std::endl;
            std::cout << "4. Semua data pasien prioritas" << std::endl;
            std::cout << "==============================================================" << std::endl;
            std::cout << "Masukkan nomor : ";
            std::cin >> n2;
            switch(n2){
                case 0 :
                    goto MAINMENU;
                    break;
                case 1 :
                        system ("pause");
                        std::cout << std::endl;
                        std::cout << "==============================================================" << std::endl;
                        std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
                        std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
                        std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
                        std::cout << "==============================================================" << std::endl << std::endl;
                        std::cout << "=======================================" << std::endl;
                        std::cout << "\tPasien siap divaksin " << std::endl;
                        std::cout << "Apakah pasien siap divaksin ? : (Y/N)";
                        std::cin >> n4;
                        if (n4 == 'Y' || n4 == 'y'){
                            dequeue(q,l);
                            std::cout << "=====================" << std::endl;
                            std::cout << "Pasien sudah divaksin" << std::endl;
                            std::cout << "=====================" << std::endl;
                        } else if (n4 == 'N' || n4 == 'n'){
                            goto ADMINMENU;
                        } else {
                            std::cout << "Masukkan input yang sesuai" << std::endl;
                        }
                    break;
                case 2 :
                    system ("pause");
                    std::cout << "==============================================================" << std::endl;
                    std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
                    std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
                    std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
                    std::cout << "==============================================================" << std::endl << std::endl;
                    std::cout << "=================================================" << std::endl;
                    std::cout << "Berikut merupakan data pasien yang sudah divaksin" << std::endl;
                    std::cout << "=================================================" << std::endl;
                    PrintList(l);
                    std::cout << "=================================================" << std::endl;
                    break;
                case 3 :
                    std::cout << "==============================================================" << std::endl;
                    std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
                    std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
                    std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
                    std::cout << "==============================================================" << std::endl << std::endl;
                    std::cout << "=============================================" << std::endl;
                    std::cout << "Berikut merupakan data pasien yang mendaftar" << std::endl;
                    std::cout << "=============================================" << std::endl;
                    printQueue(q);
                    printStack(s);
                    std::cout << std::endl;
                    std::cout << "=============================================" << std::endl;
                    break;
                case 4 :
                    std::cout << "==============================================================" << std::endl;
                    std::cout << "                 Program vaksinasi Masyarakat " << std::endl;
                    std::cout << "                  Rumah Sakit Bahagia Sembuh" << std::endl;
                    std::cout << "                     Jl. Ankasa Raya No.14" << std::endl;
                    std::cout << "==============================================================" << std::endl << std::endl;
                    std::cout << "========================================" << std::endl;
                    std::cout << "Berikut merupakan data pasien prioritas" << std::endl;
                    std::cout << "========================================" << std::endl;
                    printQueue(q);
                    std::cout << "========================================" << std::endl;
                    break;
                default :
                    std::cout << std::endl;
                    goto ADMINMENU;
                    break;
            }
            break;
        default :
            goto MAINMENU;
            break;
    }
}