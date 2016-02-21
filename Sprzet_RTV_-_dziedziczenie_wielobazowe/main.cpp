/*Zadania z C++ – Dziedziczenie wielobazowe
1. Napisać klasę SprzetRTV posiadającą fukcje:
• konstruktor pobierający nazwę urządzenia i zapamiętujący ją w klasie,
• nazwa() – zwraca zapamiętaną nazwę urządzenia,
• wlacz i wylacz – włączają i wyłączają urządzenie (odpowiednio),
• graj() – wyświetla na ekranie nazwę urządzenia (uzyskaną za pomocą funkcji nazwa()) i
tekst ”gra”, o ile sprzęt jest włączony.
2. Napisać klasę Radio dziedziczącą po klasie SprzetRTV. Klasa ta różni się tym od klasy
bazowej, że jej funkcja nazwa zwraca tekst ”Radio” oraz nazwę urządzenia, na przykład, jeśli
do konstruktora przekazalibyśmy parametr ”Grundig”, funkcja nazwa() powinna zwrócić tekst
”Radio Grundig”.
3. Napisać klasę Magnetofon dziedziczącą po klasie SprzetRTV. Jej funkcja nazwa() ma po-
przedzać zwracaną nazwę tekstem ”Magnetofon” (analogicznie jak w klasie Radio). Ponadto
klasa ta ma posiadać funkcje wlozKasete() i wyjmijKasete(). Funkcja graj() działa tak, jak
w klasie bazowej, jeśli kaseta jest włożona, jeśli natomiast nie jest – wyświetla tekst ”Brak kasety”.
4. Napisać klasę Radiomagnetofon dziedziczącą po klasach Radio i Magnetofon. Ma ona
posiadać funkcje przelaczNaRadio() oraz przelaczNaMagnetofon(). Funkcja nazwa() zwraca
nazwę sprzętu poprzedzoną tekstem ”Radiomagnetofon”. Funkcja graj() działa tak, jak funkcja
graj() tego urządzenia, na które radiomagnetofon jest przełączony (radia albo magnetofonu).
Każdy sprzęt jest domyślnie (po utworzeniu) wyłączony, magnetofon ma wyjętą kasetę, a
radiomagnetofon jest przełączony na radio.
W programie zdeﬁniować radiomagnetofon o nazwie ”Sony”. Włączyć go. Zagrać. Przełączyć
na magnetofon. Zagrać. Włożyć kasetę. Zagrać. Wyłączyć. Zagrać.
*/

#include <iostream>
#include "sprzetrtv.h"

using namespace std;

int main()
{
    Radiomagnetofon Sony("Sony");
    Sony.graj();
    Sony.wlacz();
    Sony.graj();
    Sony.przelaczNaMagnetofon();
    Sony.graj();
    Sony.wlozKasete();
    Sony.graj();
    Sony.wylacz();
    Sony.graj();

    return 0;
}
