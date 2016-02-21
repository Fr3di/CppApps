#include "bunny.h"


using namespace std;

const int maxage = 10;
const int maxmutantage = 50;
const int adult = 2;
const int maxpopulation = 1000;
int male = 0;
int adultmale = 0;
int mutant = 0;
int population = 0;
deque <bunny *> ptr;

bunny::bunny() : gender(whatgender()), color(whatcolor()), age(0),
    name(whatname(gender)), radioactive(isradioactive())
{
    //ctor
    nextnode = NULL;
    ptr.push_front(this);
    population++;
    cout << "Bunny " << name << " was born!" << endl;
    if(this->radioactive)
        mutant++;
    if(this->gender == "male" && !this->radioactive)
        male++;

}

bunny::~bunny()
{
    //dtor
    //cout << "DESTRUKTOR" << endl;
}

void bunny::addyear(bunny *b)
{
    b->age++;
    if(age > 1 && b->gender == "male" && !b->radioactive)
        adultmale++;
}

void addyeartoall(bunny *b)
{
    while(b != NULL)
    {
        b->addyear(b);
        b = b->nextnode;
    }
}

void bunny::addnode(bunny *b1, bunny *b2)
{
    b1->nextnode = b2;
}

void bunny::show(bunny *b)
{
    cout << "Bunny " << b->name << '\t' << b->gender << '\t'
         << b->color << '\t' << b->age << '\t' << b->radioactive << endl;
}

string bunny::whatname(string sex)
{
    int temp = rand() % 9 + 1;
    if (sex == "male")
    {
        switch(temp)
        {
        case 1:
            return "Thumper";
        case 2:
            return "Fufu";
        case 3:
            return "Bugs";
        case 4:
            return "Frank";
        case 5:
            return "Cesar";
        case 6:
            return "Bilbo";
        case 7:
            return "Frodo";
        case 8:
            return "Neo";
        case 9:
            return "Merpheus";
        }
    }
    else if (sex == "female")
    {
        switch(temp)
        {
        case 1:
            return "Tola";
        case 2:
            return "Lola";
        case 3:
            return "Trinity";
        case 4:
            return "Cleopatra";
        case 5:
            return "Mela";
        case 6:
            return "Pipi";
        case 7:
            return "Kelly";
        case 8:
            return "Cory";
        case 9:
            return "Angel";
        }
    }
}

string bunny::whatgender()
{
    int age = rand() % 2 + 1;
    if (age == 1) return "male";
    else return "female";
}

string bunny::whatcolor()
{
    int col = rand() % 4 + 1;
    switch (col)
    {
    case 1:
        return "white";
    case 2:
        return "brown";
    case 3:
        return "black";
    case 4:
        return "spotted";
    }
}

bool bunny::isradioactive()
{
    int radio = rand() % 100 + 1;
    if (radio < 3) return true;
    else return false;
}

void addbunny(bunny *b)
{
    while(b != NULL)
    {
        bunny *tempnext = b->nextnode;
        if(b->gender == "female" && b->age > 1 && adultmale > 0 && !b->radioactive)
        {
            bunny *temp = new bunny();

            temp->color = b->color;
            temp->nextnode = b->nextnode;
            b->nextnode = temp;
        }
        b = tempnext;
    }
}

void killbunnys(bunny *b)
{
    bunny *temp = b;

    while(b != NULL)
    {
        temp = b->nextnode;
        if(!b->radioactive && b->age > maxage)
        {
            int k;
            if(b->gender == "male")
            {
                male--;
                adultmale--;
            }

            for(int j = 0; j < ptr.size(); j++)
            {
                bunny *tp = ptr[j];
                if(tp->nextnode == b)
                {
                    if(b->nextnode == NULL)
                    {
                        tp->nextnode = NULL;
                    }
                    else
                    {
                        tp->nextnode = temp;
                    }
                    //break;
                }
                if(tp == b)
                    k = j;
            }
        cout << "Bunny " << b->name << " died." << endl;
        population--;
        delete b;
        ptr.erase(ptr.begin() + k);
        }
        else if(b->radioactive && b->age > maxmutantage)
        {
            cout << "Radioactive Mutant Vampire Bunny " << b->name << " died." << endl;
            mutant--;

            int k;
            for(int j = 0; j < ptr.size(); j++)
            {
                bunny *tp = ptr[j];
                if(tp->nextnode == b)
                {
                    if(b->nextnode == NULL)
                    {
                        tp->nextnode = NULL;
                    }
                    else
                    {
                        tp->nextnode = temp;
                    }
                    //break;
                }
                if(tp == b)
                    k = j;
            }
        delete b;
        ptr.erase(ptr.begin() + k);
        }
    b = temp;
    }
}

void changeradioactivity(bunny *b)
{
    int i = mutant;
    int j = 0;
    while(i > 0 && mutant < population)
    {
        //int j = rand() % population;
        b = ptr[j];
        if(!b->radioactive)
        {
            if(b->gender == "male")
            {
                male--;
                if(b->age > 1)
                    adultmale--;
            }
        b->radioactive = 1;
        mutant++;
        i--;
        }
    j++;
    }
}

bool terminates()
{
    if(population < 1 || male < 1 || (male == ptr.size()) || (mutant == ptr.size()))
    {
        if(population < 1)
            cout << "All population died" << endl;
        if(male < 1)
            cout << "There is no healthy male in the population" << endl;
        if(male == ptr.size())
            cout << "There is no female in the population" << endl;
        return 0;
    }
    else
        return 1;
}

void showall(bunny *b)
{
    for(int i = 0; i < ptr.size(); i++)
    {
        cout << "[" << i+1 << "]" << '\t';
        bunny *temp = ptr[i];
        temp->show(temp);

        //b->show(b);
        //b = b->nextnode;
    }
}

void foodshortagekilling(bunny *b)
{
    if(ptr.size() > maxpopulation)
    {
        int half = ptr.size() / 2;
        int i = 0, k = 0;
        bunny *temp = b;
        while(half > 0)
        {
            i = rand() % population;

                b = ptr[i];
                temp = b->nextnode;
                if(!b->radioactive && b->gender == "male")
                {
                    male--;
                    if(b->age > 1)
                        adultmale--;
                }
                if(b->radioactive)
                    mutant--;
                for(int j = 0; j < ptr.size(); j++)
                {
                    bunny *tp = ptr[j];
                    if(tp->nextnode == b)
                    {
                        if(b->nextnode == NULL)
                        {
                            tp->nextnode = NULL;
                        }
                        else
                        {
                            tp->nextnode = temp;
                        }
                        //break;
                    }
                    if(tp == b)
                    k = j;
                }
                delete b;
                ptr.erase(ptr.begin() + k);

            half--;
            population--;
        }
    }
}

int firstnode(bunny * b)
{
    int i;
    bunny *temp, *temp2;
    for(i = 0; i < ptr.size(); i++)
    {
        int k = 0;
        temp = ptr[i];
        for(int j = 0; j < ptr.size(); j++)
        {
            temp2 = ptr[j];
            if(temp2->nextnode == temp)
            {
                k++;
            }
        }
        if(k == 0)
            return i;
    }
}
