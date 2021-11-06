// FirstProject.cpp; 06.11.2021
// Author: Krzysztof Chowaniec

//Napisane na visual studio 2019
//Testowane na www.replit.com

#include <iostream>

using namespace std;

//Program pobiera dwa dane i wykonuje na nich ćwiczenia
void zad1()
{
    int x, y, wynik;

    cout << "podaj liczbe x: ";
    cin >> x;
    cout << "podaj liczbe y: ";
    cin >> y;

    wynik = x - y;
    cout << "wynik x - y = " << wynik << endl;

    wynik *= 2;
    cout << "wynik * 2 = " << wynik << " oraz wiekszy o 5 = " << wynik + 5;
}

//Program przyjmuje dane w postaci 'double' i oblicza pole prostokata
void zad2()
{
    double a, b;

    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj dlugosc boku b: ";
    cin >> b;

    cout << "Pole prostokata wynosi: " << a * b << endl;

    if (a==b)
    {
        cout << "Prostokat jest kwadratem";
    }
}

//Program przyjmuje dwie liczby i sprawdza ich parzystosc
void zad3()
{
    int x, y;
    bool z = false;
    
    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << "Podaj liczbe y: ";
    cin >> y;

    //Czy X jest parzysta
    if (x % 2 == 0) {
        cout << "Liczba x = " << x << " jest parzysta!" << endl;
        z = true;
    }

    //Czy Y jest parzysta
    if (y % 2 == 0) {
        cout << "Liczba x = " << y << " jest parzysta!" << endl;
        z = true;
    }

    //W przypadku ze zadna nie jest parzysta
    if (!z) {
        cout << "Zadna liczba nie jest parzysta!";
    }
}

//Program bierze 3 liczby i podaje najmniejsza
void zad4()
{
    int i1, i2, i3, temp;

    cout << "Podaj pierwsza liczbe: ";
    cin >> i1;
    cout << "Podaj druga liczbe: ";
    cin >> i2;
    cout << "Podaj trzecia liczbe: ";
    cin >> i3;

    //Porownuje liczby
    temp = (i1 < i2) ? i1 : i2;
    temp = (temp < i3) ? temp : i3;

    cout << "Najmniejsza liczba to " << temp;
}

//Program sprawdza czy podana liczba jest w przedziale <-5, 10.5>
void zad5()
{
    double x;

    cout << "podaj liczbe x: ";
    cin >> x;

    if (x >= -5 && x <= 10.5) {
        cout << "Liczba miesci sie w przedziale";
    }
    else {
        cout << "Liczba jest spoza przedzialu";
    }
}

//Program 'magazynowy' umozliwiajacy tylko sprawdzenie ilosci towaru z menu
void zad6()
{
    //Stan zaopatrzenia
    const int mleko = 5;
    const int chleb = 3;
    const int chrupki = 7;

    string userChoice;

    //Menu
    cout << "W magazynie znajduje sie:" << endl;
    cout << "1. Mleko" << endl;
    cout << "2. Chleb" << endl;
    cout << "3. Chrupki" << endl;

    cout << "Wybierz towar aby sprawdzic stan:" << endl;
    cin >> userChoice;

    //Niestety Switch nie przyjmuje String wiec zrobie to na IF
    if (userChoice == "1" || userChoice == "Mleko") {
        cout << "Mleko: " << mleko << " litrow";
    }
    else if (userChoice == "2" || userChoice == "Chleb") {
        cout << "Chleb: " << chleb << " sztuk";
    }
    else if (userChoice == "3" || userChoice == "Chrupki") {
        cout << "Chrupki: " << chrupki << " sztuk";
    }
    else {
        cout << "Nie ma takiej opcji";
    }
}

//Program wczytuje 5 liczb do tablicy i sprawdza czy jest parzysta, nieparzysta i ujemna
void zad7()
{
    int tablica[5];

    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe: ";
        cin >> tablica[i];
    }

    cout << "Wyswietlam dane o liczbach w tablicy: " << endl;
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < 0) {
            cout << "-";
        }
        if (tablica[i] % 2 == 0) {
            cout << "parzysta, ";
        }
        else
        {
            cout << "nieparzysta, ";
        }
    }
}

//Prosty kalkulator
void zad8()
{
    //Z powodu ze modulo przyjmuje tylko int, uzyje wiec tylko int
    int a, b;
    char operationChoice;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Podaj znak (+,-,*,/,%): ";
    cin >> operationChoice;

    switch (operationChoice)
    {
    case '+':
        cout << "Suma liczb " << a << " i " << b << " wynosi: " << a + b;
        break;
    case '-':
        cout << "Roznica liczb " << a << " i " << b << " wynosi: " << a - b;
        break;
    case '*':
        cout << "Iloczyn liczb " << a << " i " << b << " wynosi: " << a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "Przez zero sie nie dzieli";
        }
        else
        {
            cout << "Iloraz liczb " << a << " i " << b << " wynosi: " << a / b;
        }
        break;
    case '%':
        cout << "Modulo liczb " << a << " i " << b << " wynosi: " << a % b;
        break;
    default:
        cout << "Zla opcja";
    }
}

//Program szukajacy ceny w danej ilosci dni
void zad9()
{
    int numberOfDay, price, first=0, last=0;
    int* arrayOfDay;

    cout << "Podaj liczbe dni: ";
    cin >> numberOfDay;
    cout << "Podaj poszukiwana cene: ";
    cin >> price;

    arrayOfDay = new int[numberOfDay];

    for (int i = 0; i < numberOfDay; i++) {
        cout << "Podaj cene w dniu " << i + 1 << " : ";
        cin >> arrayOfDay[i];

        if (arrayOfDay[i] == price) {
            if (first == 0) {
                first = i + 1;
                last = first;
            }
            else
            {
                last = i + 1;
            }
        }
    }

    cout << "Pierwszy / Ostatni dzien wystapienia: ";
    
    if (first == 0) {
        cout << "Brak / ";
    }
    else {
        cout << first << " / ";
    }

    if (last == 0) {
        cout << "Brak";
    }
    else {
        cout << last;
    }
}

//Pobieranie tablicy i znajdowanie najmniejszej i najwiekszej liczby
void zad10()
{
    int n, max, min;
    int* arrayOfNumber;

    cout << "Podaj wielkosc tablicy: ";
    cin >> n;

    arrayOfNumber = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj element a[" << i + 1 << "]: ";
        cin >> arrayOfNumber[i];

        //Pierwsze obieg
        if (i == 0) {
            max = min = arrayOfNumber[i];
        }
        else if (max < arrayOfNumber[i]) {
            max = arrayOfNumber[i];
        }
        else if (min > arrayOfNumber[i]) {
            min = arrayOfNumber[i];
        }
    }

    cout << "Najmniejszy element w tablicy to " << min << endl;
    cout << "Najwiekszy element w tablicy to " << max;
}

//Szukanie w tablicy
void zad11()
{
    int n, target;
    int* arrayOfNumber;

    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    arrayOfNumber = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "tab[" << i << "] = ";
        cin >> arrayOfNumber[i];
    }

    cout << "Podaj szukana liczbe: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arrayOfNumber[i] == target) {
            cout << "Szukana liczba znajduje sie w tablicy pod indeksem:" << i << endl;
        }
    }
}

//Dzialania na tablicy
void zad12()
{
    int arrayOfNumber[10];
    int sum = 0, min, max, dodatnie = 0, ujemne = 0, countOfZero = 0;
    double average;

    cout << "Wprowadz elementy tablicy o 10 elementach"<<endl;

    for (int i = 0; i < 10; i++) {
        cout << "tab[" << i << "] = ";
        cin >> arrayOfNumber[i];

        sum += arrayOfNumber[i];

        //Pierwszy obieg
        if (i == 0) {
            min = max = arrayOfNumber[i];
        }
        else if (min > arrayOfNumber[i]) {
            min = arrayOfNumber[i];
        }
        else if (max < arrayOfNumber[i]) {
            max = arrayOfNumber[i];
        }

        if (arrayOfNumber[i] > 0) {
            ++dodatnie;
        }
        else if (arrayOfNumber[i] < 0) {
            ++ujemne;
        }
        else {
            ++countOfZero;
        }
    }

    average = sum / 10.0;

    cout << "Suma elementow tablicy: " << sum << endl;
    cout << "Srednia elementow tablicy: " << average << endl << endl;
    cout << "Min to: " << min << endl;
    cout << "Max to: " << max << endl << endl;
    cout << "W tablicy jest " << dodatnie << " liczb dodatnich" << endl;
    cout << "W tablicy jest " << ujemne << " liczb ujemnych" << endl;
    cout << "W tablicy jest " << countOfZero << " zer";
}

//Wyswietla stan produktow do zad13
void StanProduktu(const string nameTab[5], int amountTab[5], double priceTab[5]);
//Dodaje Produkt do zad13
void DodajProdukt(const string nameTab[5], int amountTab[5]);
//Odejmuje Produkt do zad13
void OdejmijProdukt(const string nameTab[5], int amountTab[5]);
//Ustawia Cene Produktu do zad13
void UstawCeneProduktu(const string nameTab[5], double priceTab[5]);
//Oblicza wartosc magazynu do zad13
void WartoscMagazynu(int amountTab[5], double priceTab[5]);

//Wlasny program, Zarzadzanie magazynem, wersja okrojona
void zad13()
{
    const string NameOfProduct[5] = { "Chleb", "Maslo", "Marchewka", "Jablko", "Banan" };
    int AmountOfProduct[5] = { 10, 5, 24, 16, 7 };
    double PriceOfProduct[5] = { 3.50, 1.20, 0.10, 0.05, 0.50 };
    int UserChoice = 0;

    //Glowna Petla
    do
    {
        //Menu Wyboru
        cout << "Wybierz co chcesz zrobic" << endl;
        cout << "1. Zobacz stan produktow" << endl;
        cout << "2. Dodaj produkty" << endl;
        cout << "3. Odejmij produkty" << endl;
        cout << "4. Zmien cene produktu" << endl;
        cout << "5. Zobacz wartosc magazynu" << endl;
        cout << "9. Zamknij program" << endl;

        cin >> UserChoice;

        switch (UserChoice)
        {
        case 1:
            StanProduktu(NameOfProduct, AmountOfProduct, PriceOfProduct);
            break;
        case 2:
            DodajProdukt(NameOfProduct, AmountOfProduct);
            break;
        case 3:
            OdejmijProdukt(NameOfProduct, AmountOfProduct);
            break;
        case 4:
            UstawCeneProduktu(NameOfProduct, PriceOfProduct);
            break;
        case 5:
            WartoscMagazynu(AmountOfProduct, PriceOfProduct);
            break;
        case 9:
            break;
        default:
            cout << "Zla opcja" << endl;
        }
    } while (UserChoice!=9);
}

int main()
{
    //zad1(); //Odkomentowac by zobaczyc dzialanie Zadania 1
    //zad2(); //Odkomentowac by zobaczyc dzialanie Zadania 2
    //zad3(); //Odkomentowac by zobaczyc dzialanie Zadania 3
    //zad4(); //Odkomentowac by zobaczyc dzialanie Zadania 4
    //zad5(); //Odkomentowac by zobaczyc dzialanie Zadania 5
    //zad6(); //Odkomentowac by zobaczyc dzialanie Zadania 6
    //zad7(); //Odkomentowac by zobaczyc dzialanie Zadania 7
    //zad8(); //Odkomentowac by zobaczyc dzialanie Zadania 8
    //zad9(); //Odkomentowac by zobaczyc dzialanie Zadania 9
    //zad10(); //Odkomentowac by zobaczyc dzialanie Zadania 10
    //zad11(); //Odkomentowac by zobaczyc dzialanie Zadania 11
    //zad12(); //Odkomentowac by zobaczyc dzialanie Zadania 12
    //zad13(); //Odkomentowac by zobaczyc dzialanie Zadania 13
}

//Wyswietla stan produktow do zad13
void StanProduktu(const string nameTab[5], int amountTab[5], double priceTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << nameTab[i] << ": " << amountTab[i] << " szt. Za " << priceTab[i] << " zl" << endl;
    }
    cout << endl;
}

//Dodaje Produkt do zad13
void DodajProdukt(const string nameTab[5], int amountTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ". " << nameTab[i] << endl;
    }

    int userChoice;
    int amount;
    cout << "Do ktorego produktu dodac?: ";
    cin >> userChoice;

    //Sprawdzenie czy id jest poprawne
    if (userChoice <= 4, userChoice >= 0) {
        cout << "Ile dodac produktu?: ";
        cin >> amount;

        amountTab[userChoice] += amount;
        cout << "Aktualnie jest: " << amountTab[userChoice] << endl;
    }
    cout << endl;
}


//Odejmuje Produkt do zad13
void OdejmijProdukt(const string nameTab[5], int amountTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ". " << nameTab[i] << endl;
    }

    int userChoice;
    int amount;
    cout << "W ktorym produkcie zmniejszyc ilosc?: ";
    cin >> userChoice;

    //Sprawdzenie czy id jest poprawne
    if (userChoice <= 4, userChoice >= 0) {
        cout << "Ile odjac produktu?: ";
        cin >> amount;

        if (amountTab[userChoice] >= amount) {
            amountTab[userChoice] -= amount;
            cout << "Aktualnie jest: " << amountTab[userChoice] << endl;
        }
        else {
            cout << "Nie da sie tyle odjac" << endl;
        }
    }
    cout << endl;
}

//Ustawia Cene Produktu do zad13
void UstawCeneProduktu(const string nameTab[5], double priceTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ". " << nameTab[i] << endl;
    }

    int userChoice;
    double price;
    cout << "W ktorym produkcie ustawic nowa cene?: ";
    cin >> userChoice;

    //Sprawdzenie czy id jest poprawne
    if (userChoice <= 4, userChoice >= 0) {
        cout << "Jaka ustawic cene?: ";
        cin >> price;

        priceTab[userChoice] = price;
        cout << "Aktualnie jest: " << price << endl;
    }
    cout << endl;
}

//Oblicza wartosc magazynu do zad13
void WartoscMagazynu(int amountTab[5], double priceTab[5])
{
    cout << endl;

    double sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += (amountTab[i] * priceTab[i]);
    }

    cout << "Wartosc magazynu to " << sum << endl;

    cout << endl;
}