#include "bunny.h"

using namespace std;

int main()
{
    extern int population;
    extern int mutant;
    extern int male;
    extern deque<bunny *> ptr;
    extern bool terminates();
    extern void addyeartoall(bunny *b);

    srand(time(NULL));
    bunny *b1 = new bunny();
    bunny *b2 = new bunny();
    bunny *b3 = new bunny();
    bunny *b4 = new bunny();
    bunny *b5 = new bunny();
//    cout << "B1 = "  << '\t' << b1 << endl;
//    cout << "B2 = "  << '\t' << b2 << endl;
    b1->addnode(b1, b2);
    b2->addnode(b2, b3);
    b3->addnode(b3, b4);
    b4->addnode(b4, b5);
    showall(b1);
    cout << ptr.size() << endl << male << endl << mutant << endl;


//    addbunny(b1);
//    addbunny(b2);
//
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//    b1->addyear(ptr[0]);
//
//    cout << "Population = " << population << '\t'
//        << "Mutant = " << mutant << endl;
//   //cout << ptr[1] << endl;
//   //cout << ptr[0] << endl;
//
//    bunny *temp = ptr[0];
//    //temp->show(temp);
//    temp = ptr[1];
//    //temp->show(temp);
//
//    killbunnys(ptr[0]);
//
//    cout << "Population = " << population << '\t'
//        << "Mutant = " << mutant << endl;
//    cout << ptr.size() << endl;
//male = 0;

cin.get();

    while(terminates() == 1)
    {
        addyeartoall(ptr[firstnode(ptr[0])]);
        addbunny(ptr[firstnode(ptr[0])]);
        killbunnys(ptr[firstnode(ptr[0])]);
        foodshortagekilling(ptr[firstnode(ptr[0])]);
        changeradioactivity(ptr[firstnode(ptr[0])]);
        showall(ptr[firstnode(ptr[0])]);

        cout << ptr.size() << endl << male << endl << mutant << endl;

            int e = firstnode(ptr[0]);
    //cout << "E = " << e << endl;

        cin.get();
    }

    return 0;
}
