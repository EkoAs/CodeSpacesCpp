# CodeSpacesCpp
Kumpulan latihan dan contoh program untuk mempelajari dasar-dasar bahasa pemrograman C++ secara bertahap. Repository ini dibuat sebagai ruang belajar praktik: setiap konsep dijelaskan melalui program kecil yang dapat dibaca, dikompilasi, dijalankan, dan dikembangkan kembali.

## Tujuan Repository

Repository ini bertujuan untuk:

- membangun fondasi pemrograman C++ dari nol;
- menghubungkan teori dengan praktik melalui contoh yang dapat dijalankan;
- melatih logika pemrograman dan penyelesaian masalah;
- menjadi catatan perkembangan belajar C++;
- menyediakan bahan latihan untuk eksperimen, modifikasi, dan proyek kecil;
- membantu pembaca memahami cara kerja program sebelum masuk ke topik C++ yang lebih lanjut.

Kode di dalam repository disusun untuk pembelajaran, bukan sebagai library produksi. Beberapa program sengaja dibuat sederhana agar satu konsep dapat dipelajari secara terpisah. Karena merupakan catatan belajar yang terus berkembang, gaya penulisan dan tingkat kompleksitas antarprogram dapat berbeda.

## Materi yang Dipelajari

Urutan folder utama di `C++/` mengikuti perkembangan materi berikut:

1. Struktur program C++ dan `main()`.
2. Preprocessing dan penggunaan header.
3. Variabel, konstanta, dan tipe data fundamental.
4. Input dan output menggunakan `cin` dan `cout`.
5. Operator aritmatika, assignment, increment, decrement, komparasi, dan boolean.
6. Percabangan `if`, `if-else`, dan `switch-case`.
7. Perulangan `while`, `do-while`, dan `for`.
8. `break`, `continue`, serta kontrol alur program.
9. Latihan pola, segitiga, kalkulator, dan studi kasus sederhana.
10. Fungsi, nilai balik, `void`, prototype, scope, default argument, dan overloading.
11. Rekursi, faktorial, dan deret Fibonacci.
12. Pointer, reference, dan pointer sebagai parameter fungsi.
13. Array satu dimensi, array multidimensi, dan pemrosesan array dengan fungsi.
14. `vector`, sorting, searching, dan algoritma standard library.
15. `string`, perbandingan string, substring, dan operasi string.
16. `struct` dan nested struct.
17. Operasi matematika dengan `<cmath>` serta bilangan acak dengan standard library.
18. Operasi file eksternal menggunakan `<fstream>`.
19. Operator bitwise dan operator comma.

Tidak semua program harus dibaca sekaligus. Gunakan urutan nomor program sebagai jalur belajar, lalu kembali ke latihan yang ingin diperdalam.

## Struktur Repository

```text
.
├── C++/
│   ├── Program01_Hello/
│   ├── Program02_preprocessing/
│   ├── Program03_Variabel/
│   ├── ...
│   └── Program89_WriteEksternalFIle/
├── CodeSpacesWorkshops/
│   ├── main.cpp
│   ├── Program01_test/main.cpp
│   └── Program02_Typedata/main.cpp
└── README.md
```

Folder `C++/` berisi rangkaian materi utama. Folder `CodeSpacesWorkshops/` berisi eksperimen atau workshop tambahan yang dapat dijalankan secara mandiri.

## Prasyarat

- Linux, macOS, atau Windows dengan terminal.
- Compiler C++ yang mendukung minimal C++11, misalnya `g++` atau `clang++`.
- Editor teks atau IDE; VS Code direkomendasikan untuk pengalaman belajar yang lebih nyaman.
- Pengetahuan dasar menjalankan perintah di terminal.

Periksa compiler yang tersedia:

```bash
g++ --version
```

## Cara Menjalankan Program

Setiap folder latihan umumnya memiliki file `main.cpp`. Masuk ke folder program yang ingin dicoba, lalu compile dan jalankan:

```bash
cd "C++/Program03_Variabel"
g++ -std=c++11 -Wall -Wextra main.cpp -o program
./program
```

Untuk workshop:

```bash
cd CodeSpacesWorkshops/Program02_Typedata
g++ -std=c++11 -Wall -Wextra main.cpp -o program
./program
```

Nama folder tertentu mengandung spasi atau karakter khusus. Gunakan tanda kutip pada path jika diperlukan. Nama output `program` bebas diganti, misalnya `hasil`.

Jika hanya ingin memeriksa apakah source code dapat dikompilasi tanpa membuat executable:

```bash
g++ -std=c++11 -Wall -Wextra -fsyntax-only main.cpp
```

Di VS Code, file C++ yang sedang dibuka dapat dibangun menggunakan task **C/C++: g++ build active file**, kemudian executable dijalankan dari terminal.

## Saran Alur Belajar

1. Mulai dari program bernomor kecil dan baca source code sebelum menjalankannya.
2. Jalankan program dengan beberapa input berbeda.
3. Ubah satu bagian kecil, lalu amati perubahannya.
4. Tulis ulang contoh tanpa melihat source code.
5. Kerjakan folder latihan sebelum berpindah ke konsep berikutnya.
6. Gabungkan beberapa konsep menjadi program kecil, seperti kalkulator, pencarian data, atau simulasi sederhana.
7. Gunakan warning compiler untuk menemukan potensi kesalahan lebih awal.

## Catatan Penggunaan

- Sebagian besar program menggunakan input dari terminal.
- Program harus dikompilasi dari foldernya agar path file relatif bekerja sesuai harapan.
- Beberapa contoh mungkin berisi eksperimen atau kekurangan kecil yang wajar pada repository pembelajaran. Periksa pesan compiler dan gunakan kesempatan tersebut untuk belajar memperbaikinya.
- Hindari menyalin program secara pasif; modifikasi contoh dan buat variasi sendiri agar konsep lebih melekat.

## Kontribusi dan Pengembangan

Pengembangan yang sesuai dengan tujuan repository antara lain:

- menambahkan contoh untuk konsep C++ baru;
- memperbaiki penamaan, komentar, atau typo pada contoh;
- menambahkan latihan dan solusi alternatif;
- membuat proyek kecil yang menggabungkan materi sebelumnya;
- menambahkan dokumentasi atau instruksi build yang lebih spesifik.

## Lisensi

Belum ada lisensi khusus yang ditentukan di repository ini. Gunakan dan distribusikan kode sesuai izin dari pemilik repository.

---

# CodeSpacesCpp (English)

A collection of exercises and example programs for learning the fundamentals of C++ step by step. This repository is designed as a hands-on learning space: each concept is introduced through a small program that can be read, compiled, executed, and extended.

## Repository Goals

This repository aims to:

- build a foundation in C++ programming from the beginning;
- connect theory with practice through runnable examples;
- develop programming logic and problem-solving skills;
- serve as a record of the learning process;
- provide exercises for experimentation, modification, and small projects;
- help readers understand how programs work before moving to more advanced C++ topics.

The code is intended for learning, not for production use. Some programs are intentionally simple so that one concept can be studied in isolation. Since this is an evolving learning repository, coding style and complexity may vary between programs.

## Topics Covered

The numbered folders in `C++/` progress through the following topics:

1. C++ program structure and `main()`.
2. Preprocessing and header usage.
3. Variables, constants, and fundamental data types.
4. Input and output with `cin` and `cout`.
5. Arithmetic, assignment, increment, decrement, comparison, and boolean operators.
6. `if`, `if-else`, and `switch-case` statements.
7. `while`, `do-while`, and `for` loops.
8. `break`, `continue`, and program flow control.
9. Pattern exercises, triangles, calculators, and simple case studies.
10. Functions, return values, `void`, prototypes, scope, default arguments, and overloading.
11. Recursion, factorials, and Fibonacci sequences.
12. Pointers, references, and pointers as function parameters.
13. One-dimensional arrays, multidimensional arrays, and array processing with functions.
14. `vector`, sorting, searching, and standard library algorithms.
15. `string`, string comparison, substrings, and string operations.
16. `struct` and nested structs.
17. Mathematical operations with `<cmath>` and random numbers with the standard library.
18. External file operations with `<fstream>`.
19. Bitwise operators and the comma operator.

You do not need to read every program at once. Use the program numbers as a learning path, then return to exercises that you want to explore further.

## Repository Structure

The `C++/` directory contains the main sequence of lessons. `CodeSpacesWorkshops/` contains additional standalone experiments and workshops.

## Prerequisites

- Linux, macOS, or Windows with a terminal.
- A C++ compiler supporting at least C++11, such as `g++` or `clang++`.
- A text editor or IDE; VS Code is recommended for a comfortable learning workflow.
- Basic familiarity with running terminal commands.

Check the available compiler:

```bash
g++ --version
```

## Running a Program

Most exercise folders contain a `main.cpp` file. Enter the folder you want to try, then compile and run it:

```bash
cd "C++/Program03_Variabel"
g++ -std=c++11 -Wall -Wextra main.cpp -o program
./program
```

For a workshop program:

```bash
cd CodeSpacesWorkshops/Program02_Typedata
g++ -std=c++11 -Wall -Wextra main.cpp -o program
./program
```

Some folder names contain spaces or special characters. Quote the path when necessary. The output name `program` can be changed to any name, such as `result`.

To check compilation without creating an executable:

```bash
g++ -std=c++11 -Wall -Wextra -fsyntax-only main.cpp
```

In VS Code, the currently open C++ file can be built with the **C/C++: g++ build active file** task and then run from the terminal.

## Recommended Learning Flow

1. Start with the lower-numbered programs and read the source before running it.
2. Try several different inputs.
3. Change one small part and observe the result.
4. Rewrite the example without looking at the source.
5. Complete the exercise folders before moving to the next concept.
6. Combine several concepts into a small program, such as a calculator, data search, or simple simulation.
7. Use compiler warnings to find potential problems early.

## Usage Notes

- Most programs receive input from the terminal.
- Compile programs from their own folder so that relative file paths work as expected.
- Some examples may contain experiments or minor issues that are natural in a learning repository. Read compiler messages and use them as opportunities to practice debugging.
- Do not only copy the examples; modify them and create your own variations to reinforce the concepts.

## Contributions and Future Development

Contributions aligned with the repository goals include:

- adding examples for new C++ concepts;
- improving names, comments, or typos in existing examples;
- adding exercises and alternative solutions;
- creating small projects that combine previous topics;
- improving documentation or adding more specific build instructions.

## License

No specific license has been defined for this repository yet. Use and distribute the code according to the repository owner's permission.
