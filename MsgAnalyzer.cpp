#include "MsgAnalyzer.h"
#include <boost/algorithm/string.hpp>

MsgAnalyzer::MsgAnalyzer(){

}

MsgAnalyzer::~MsgAnalyzer(){
	for (const auto& instruction : instructions) {
		delete instruction.first;
	} 
}

void MsgAnalyzer::addInstruction( unordered_set<string> *msgs,Instruction func ){
	instructions[msgs] = func;
}

void MsgAnalyzer::addInstruction(string msgs,Instruction func ){
	unordered_set<string> *aux = new unordered_set<string>;

	boost::split(*aux, msgs, boost::is_any_of("|") );
	instructions[aux] = func;
}

string MsgAnalyzer::analyzer(string msg) {
	for (const auto& instruction : instructions) {
		unordered_set<string> *possibleMsgs = instruction.first;
		if( possibleMsgs->find(msg) != possibleMsgs->end()) {
			return instruction.second();
		}
	} 
	return "Creo que no te entiendo";
}


