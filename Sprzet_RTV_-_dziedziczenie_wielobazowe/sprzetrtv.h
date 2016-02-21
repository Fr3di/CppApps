#ifndef SPRZETRTV_H_INCLUDED
#define SPRZETRTV_H_INCLUDED

#include <iostream>

using namespace std;

class SprzetRTV
{
public:
    string naz;
    bool st;
    string nazwa() { return naz; };
    bool wlacz() { cout << "Wlaczone" << endl; return st = 1; };
    bool wylacz() { cout << "Wylaczone" << endl; return st = 0; };
    virtual void graj()
    {
        if(st) cout << nazwa() << " gra." << endl;
        else cout << nazwa() << endl;
    }

    //konstruktory
    SprzetRTV(string nn) : naz(nn), st(0) {};
};

class Radio : public virtual SprzetRTV
{
public:
    string nazwa() { return "Radio " + SprzetRTV::nazwa(); };
    Radio(string nn) : SprzetRTV(nn) {};
    Radio() : SprzetRTV(nazwa()) {};
};

class Magnetofon : public virtual SprzetRTV
{
    bool kaseta;
public:
    string nazwa() { return "Magnetofon " + SprzetRTV::nazwa(); };
    bool wlozKasete() { cout << "Kaseta wlozona" << endl; return kaseta = 1; };
    bool wyjmijKasete() { cout << "Kaseta wyjeta" << endl; return kaseta = 0; };
    void graj()
    {
        if(kaseta && st) cout << nazwa() << " gra." << endl;
        else cout << "Brak kasety!!!" << endl;
    }

    //konstruktor
    Magnetofon(string nazwa) : SprzetRTV(nazwa), kaseta(0) {};
    Magnetofon() : SprzetRTV(nazwa()), kaseta(0) {};
};

class Radiomagnetofon : public Radio, public Magnetofon
{
    bool stan;
public:
    bool przelaczNaRadio() { cout << "Wl Radio" << endl; return stan = 0; };
    bool przelaczNaMagnetofon() { cout << "Wl Magn" << endl; return stan = 1; };
    string nazwa() { return "Radiomagnetofon " + SprzetRTV::nazwa(); };
    void graj()
    {
        if(stan && st) Magnetofon::graj();
        else Radio::graj();
    }

    //konstruktor
    Radiomagnetofon(string nn) :  SprzetRTV(nn), stan(0) {};
    //Gdy klasa Radio i Magnetofon nie maj¹ zdefiniowanych konstruktorow domyslnych
    //potrzebna jest taka instrukcja
    // Radiomagnetofon(string nn) :  SprzetRTV(nn), Radio(nn), Magnetofon(nn), stan(0) {};
};

#endif // SPRZETRTV_H_INCLUDED
