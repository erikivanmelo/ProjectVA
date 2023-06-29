#include<iostream>
using namespace std;

/*
codigos de modificaciones del texto
RF: Replace first
RL: 
DL: Delete

*/

class InstructionSimplifier{

    InstructionSimplifier();
    ~InstructionSimplifier();

    typedef struct{
        char code[2];
        string strA;
        string strB;
    }change;

    private:
        
        void chargeSimplifications();

    public:
        void toSimplify(string str);




};