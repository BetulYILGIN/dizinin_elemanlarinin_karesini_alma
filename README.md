# C Program - Array Squaring

## Açıklama

Bu C programı, 10 tam sayıdan oluşan bir diziyi okur, orijinal değerleri yazdırır, her bir elemanı ayrı bir fonksiyon kullanarak karesini alır ve ardından karesini alınmış değerleri yazdırır.

## Özellikler

- Kullanıcıdan 10 tam sayı değeri girmesini ister.
- Orijinal dizinin değerlerini yazdırır.
- Dizinin her elemanını `sayi` fonksiyonu kullanarak karesini alır.
- Kare alınmış değerleri yazdırır.

## Gereksinimler

- C derleyicisi (örneğin, GCC)
- Standart C kütüphane fonksiyonları (stdio.h)

## Kullanım

1. C kaynak kodunu bir dosyaya kopyalayın.
2. Programı bir C derleyicisiyle derleyin:
   ```bash
   gcc -o array_squaring array_squaring.
## Programı çalıştırın:

Program, kullanıcıdan 10 tam sayı değeri girmesini isteyecektir. Her biri için birer birer değer girin.
Tüm değerler girildikten sonra, program orijinal diziyi yazdıracak, ardından her elemanı kareleyecek ve karesini alınmış değerleri yazdıracaktır.
## Örnek Çıktı

Dizinin 1. elemanini girin = 2
Dizinin 2. elemanini girin = 3
Dizinin 3. elemanini girin = 4
Dizinin 4. elemanini girin = 5
Dizinin 5. elemanini girin = 6
Dizinin 6. elemanini girin = 7
Dizinin 7. elemanini girin = 8
Dizinin 8. elemanini girin = 9
Dizinin 9. elemanini girin = 10
Dizinin 10. elemanini girin = 11

Dizinin eleman degerleri:
2 3 4 5 6 7 8 9 10 11 

Kare alma islemi sonrasi degerler:
4 9 16 25 36 49 64 81 100 121
## Notlar
Dizinin boyutu sabittir ve 10 elemanlıdır.
Program, sayi fonksiyonunu çağırarak dizinin her elemanının karesini alır ve diziyi yerinde değiştirir.
