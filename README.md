# BDU-TRK-Verilenlerin-Strukturlari
C++ proqramlaşdırma dilində Vector, Stack, Queue, Dequeue, Set, Multiset, Map

# C++ STL Konteynerləri Xülasəsi

## Vector
`std::vector` C++-də dinamik massivlər yaratmaq üçün istifadə olunur. 
- **Xüsusiyyətlər:**
  - Dinamik olaraq ölçüsü dəyişir.
  - Elementlər bir-birinin ardınca yaddaşda saxlanılır.
- **Əsas metodlar:**
  - `push_back`: Element əlavə edir.
  - `pop_back`: Element çıxarır.
  - `insert`: Müəyyən mövqeyə element əlavə edir.
  - `erase`: Müəyyən mövqedən elementi silir.

---

## Stack
`std::stack` LIFO (Last In, First Out) prinsipinə uyğun işləyir.
- **Xüsusiyyətlər:**
  - Ən son əlavə edilən element ilk çıxarılır.
- **Əsas metodlar:**
  - `push`: Element əlavə edir.
  - `pop`: Element çıxarır.
  - `top`: Ən yuxarıdakı elementi qaytarır.

---

## Queue
`std::queue` FIFO (First In, First Out) prinsipinə uyğun işləyir.
- **Xüsusiyyətlər:**
  - İlk daxil olan element ilk çıxarılır.
- **Əsas metodlar:**
  - `push`: Element əlavə edir.
  - `pop`: Element çıxarır.
  - `front`: Başdakı elementi qaytarır.
  - `back`: Son elementi qaytarır.

---

## Deque (Double-ended Queue)
`std::deque` həm əvvəlindən, həm də sonundan element əlavə etməyə və silməyə imkan verir.
- **Xüsusiyyətlər:**
  - İki uclu giriş/çıxış təmin edir.
- **Əsas metodlar:**
  - `push_front`: Əvvələ element əlavə edir.
  - `push_back`: Sona element əlavə edir.
  - `pop_front`: Əvvəldən elementi silir.
  - `pop_back`: Sondan elementi silir.

---

## Set
`std::set` unikal və sıralanmış elementlər saxlamaq üçün istifadə olunur.
- **Xüsusiyyətlər:**
  - Təkrarlanan elementləri qəbul etmir.
  - Elementlər həmişə sıralanır.
- **Əsas metodlar:**
  - `insert`: Element əlavə edir.
  - `erase`: Element silir.
  - `find`: Elementin mövcudluğunu yoxlayır.

---

## Multiset
`std::multiset` `set`-ə bənzəyir, lakin təkrarlanan elementləri saxlamağa imkan verir.
- **Xüsusiyyətlər:**
  - Təkrarlanan elementləri qəbul edir.
  - Elementlər sıralanır.
- **Əsas metodlar:**
  - `insert`: Element əlavə edir.
  - `count`: Müəyyən elementin sayını qaytarır.
  - `erase`: Elementi silir.

---

## Map
`std::map` açar-dəyər (key-value) cütlərini saxlamaq üçün istifadə olunur.
- **Xüsusiyyətlər:**
  - Hər bir açar unikal olmalıdır.
  - Elementlər açarlara görə sıralanır.
- **Əsas metodlar:**
  - `[]`: Açar vasitəsilə element əlavə edir və ya ona dəyər təyin edir.
  - `insert`: Yeni cüt əlavə edir.
  - `find`: Müəyyən açarı tapır.
  - `erase`: Elementi silir.

---

Bu konteynerlər C++-də müxtəlif məlumat növlərini səmərəli idarə etmək və saxlamaq üçün geniş istifadə olunur. Hər biri müəyyən spesifik vəziyyətlərdə digərinə nisbətən daha uyğun ola bilər.
