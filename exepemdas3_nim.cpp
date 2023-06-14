using namespace std;

#include <iostream>
#include <vector>
#include <string>

class Penerbit {
private:
    string namaPenerbit;
public:
    Penerbit(const string& nama) : namaPenerbit(nama) {}

    string getNamaPenerbit() const {
        return namaPenerbit;
    }
};

class Pengarang {
private:
    string namaPengarang;
    vector<string> buku;
public:
    Pengarang(const string& nama) : namaPengarang(nama) {}

    string getNamaPengarang() const {
        return namaPengarang;
    }

    void tambahBuku(const string& judul) {
        buku.push_back(judul);
    }

    const vector<string>& getBuku() const {
        return buku;
    }

};

int main() {
    Penerbit penerbit1("Gama Press");
    Penerbit penerbit2("Intan Pariwara");

    Pengarang pengarang1("Joko");
    Pengarang pengarang2("Lia");
    Pengarang pengarang3("Asroni");
    Pengarang pengarang4("Giga");

    vector<Pengarang> daftarPengarang;
    daftarPengarang.push_back(pengarang1);
    daftarPengarang.push_back(pengarang2);
    daftarPengarang.push_back(pengarang3);
    daftarPengarang.push_back(pengarang4);

    pengarang1.tambahBuku("Fisika");
    pengarang1.tambahBuku("Algoritma");
    pengarang2.tambahBuku("Basisdata");
    pengarang3.tambahBuku("Dasar Pemrograman");
    pengarang4.tambahBuku("Matematika");
    pengarang4.tambahBuku("Multimedia 1");

    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    for (const auto& pengarang : daftarPengarang) {
        if (pengarang.getNamaPengarang() == "Asroni" || pengarang.getNamaPengarang() == "Giga") {
            cout << pengarang.getNamaPengarang() << endl;
        }
    }

    cout << endl;

    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    for (const auto& pengarang : daftarPengarang) {
        if (pengarang.getNamaPengarang() == "Giga") {
            cout << penerbit1.getNamaPenerbit() << endl;
            cout << penerbit2.getNamaPenerbit() << endl;
        }
    }

    cout << endl;

    cout << "Daftar buku yang dikarang \"Joko\":" << endl;
    for (const auto& pengarang : daftarPengarang) {
        if (pengarang.getNamaPengarang() == "Joko") {
            for (const auto& buku : pengarang1.getBuku()) {
                cout << buku << endl;
            }
        }
    }

    cout << endl;

    cout << "Daftar buku yang dikarang \"Lia\":" << endl;
    for (const auto& pengarang : daftarPengarang) {
        if (pengarang.getNamaPengarang() == "Lia") {
            for (const auto& buku : pengarang2.getBuku()) {
                cout << buku << endl;
            }
        }
    }

    cout << endl;

    cout << "Daftar buku yang dikarang \"Asroni\":" << endl;
    for (const auto& pengarang : daftarPengarang) {
        if (pengarang.getNamaPengarang() == "Asroni") {
            for (const auto& buku : pengarang3.getBuku()) {
                cout << buku << endl;
            }
        }
    }

    cout << endl;

    cout << "Daftar buku yang dikarang \"Giga\":" << endl;
    for (const auto& pengarang : daftarPengarang) {
        if (pengarang.getNamaPengarang() == "Giga") {
            for (const auto& buku : pengarang4.getBuku()) {
                cout << buku << endl;
            }
        }
    }

    return 0;
}
