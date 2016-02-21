#ifndef BUNNY_H
#define BUNNY_H

#include <string>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <ctime>

class bunny
{
    public:
        bunny();
        virtual ~bunny();
        std::string whatgender();
        std::string whatcolor();
        std::string whatname(std::string sex);
        bool isradioactive();
        void createbunny();
        void addnode(bunny *b1, bunny *b2);
        void show(bunny *b);
        void addyear(bunny *b);
        friend void addbunny(bunny *b);
        friend void killbunnys(bunny *b);
        friend void changeradioactivity(bunny *b);
        friend void showall(bunny *b);
        friend void foodshortagekilling(bunny *b);
        friend void addyeartoall(bunny *b);
        friend int firstnode(bunny * b);
    private:
        std::string gender;
        std::string color;
        std::string name;
        int age;
        bool radioactive;
        bunny *nextnode;
};

#endif // BUNNY_H
