#define MSGANALYZER
#ifdef MSGANALYZER

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

typedef string (*Instruction)();

class MsgAnalyzer{

	
/*
A futuro las instrucciones se dividiran entre simples y complejas
simples: No requieren extraer informacion del mensaje
complejas: Si requieren extraer informacion del mensaje
*/	

	private:
		unordered_map<unordered_set<string>*,Instruction> instructions;
	
	public:
		MsgAnalyzer();
		~MsgAnalyzer();
		string analyzer(string msg);
		
		void addInstruction(unordered_set<string> *msgs,Instruction func);
		void addInstruction(string msgs,Instruction func);

};

#endif
