# BDU-TRK-Verilenlerin-Strukturlari
C++ proqramlaşdırma dilində Vector, Stack, Queue, Dequeue, Set, Multiset, Map

[Programiz C++ Online Compiler](https://www.programiz.com/cpp-programming/online-compiler/)

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


# Verilənlər Strukturlarının Real Həyatda İstifadə Nümunələri

## 1. Vector
**İstifadə sahəsi:**  
`std::vector` dinamik massiv kimi istifadə olunur və elementlərin sayı əvvəlcədən məlum olmadıqda çox faydalıdır.

**Real həyat nümunəsi:**  
- **Mobil Tətbiqdə Şəkil Qalereyası:** Telefonun şəkil qalereyasındakı şəkillər dinamik olaraq artır və ya silinir. `vector` bu şəkilləri saxlamaq üçün uyğundur, çünki ölçüsü dinamik olaraq dəyişir.

---

## 2. Stack
**İstifadə sahəsi:**  
`std::stack` LIFO (Last In, First Out) prinsipinə uyğun olaraq işləyir.

**Real həyat nümunəsi:**  
- **Brauzer Geri və İrəli Düymələri:** Brauzerdə geri və irəli düymələri `stack` strukturu ilə həyata keçirilir. Geri düyməsi basıldıqda sonuncu ziyarət edilən səhifə (yəni ən son əlavə edilən) göstərilir.

---

## 3. Queue
**İstifadə sahəsi:**  
`std::queue` FIFO (First In, First Out) prinsipinə əsaslanır.

**Real həyat nümunəsi:**  
- **Printer Növbəsi:** Çap etmək üçün göndərilən sənədlər birinci göndərilən sənədin birinci çap olunması qaydası ilə işləyir. Bu proses `queue` strukturu vasitəsilə idarə olunur.

---

## 4. Deque (Double-ended Queue)
**İstifadə sahəsi:**  
`std::deque` həm əvvəlindən, həm də sonundan element əlavə etməyə və çıxarmağa imkan verir.

**Real həyat nümunəsi:**  
- **Task Scheduler:** Taskların başlanğıc və sonundan əlavə edilərək prioritetlə işlənməsi lazımdırsa, məsələn, əməliyyat sistemlərində proseslərin idarə olunmasında `deque` istifadə edilə bilər.

---

## 5. Set
**İstifadə sahəsi:**  
`std::set` unikal və sıralanmış elementləri saxlamaq üçün istifadə olunur.

**Real həyat nümunəsi:**  
- **Telefon Kontaktları:** Telefon kontaktlarında eyni adın təkrarlanmaması üçün `set` istifadə edilə bilər, çünki `set` yalnız unikal elementləri saxlayır.

---

## 6. Multiset
**İstifadə sahəsi:**  
`std::multiset` təkrarlanan elementləri saxlamaq üçün uyğundur.

**Real həyat nümunəsi:**  
- **İmtahan Nəticələri:** Tələbələrin əldə etdiyi ballar eyni ola bilər. Hər bir balın sayını izləmək üçün `multiset` istifadə edilə bilər.

---

## 7. Map
**İstifadə sahəsi:**  
`std::map` açar-dəyər (key-value) cütlərini saxlamaq üçün istifadə olunur.

**Real həyat nümunəsi:**  
- **Telefon Kitabçası:** Ad və telefon nömrələrini saxlamaq üçün `map` istifadə edilir. Ad açar, telefon nömrəsi isə dəyər kimi saxlanılır.

---

## Xülasə
Bu verilənlər strukturları müxtəlif tətbiqlərdə effektiv məlumat idarəetməsini təmin edir. Hər biri spesifik problemlərin həllində daha uyğun seçim ola bilər.
