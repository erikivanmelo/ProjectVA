#include <iostream>
#include "MsgAnalyzer.h"

using namespace std;

string test(){
	return "oli n.n";
}

int main(){


/*
Ingreso de instruccion
InstructionSimplifier: Simplificacion de instruccion
	Quitar todo pronombre/articulo/expresion y coloquialismo que no afecte a la interpretacion de una instruccion 
	"che wachin, por favor me decis la hora?" -> "hora"
InstructionAnalizer: Analizar a que funcion esta relacionadada la instruccion
	"calendario|almanaque",showCalendar 

Mostrar el resultado
*/
	MsgAnalyzer analizer;

	analizer.addInstruction("oli|hola",test);

	string msg;


	while(true){

		cin >> msg;

		cout << analizer.analyzer(msg) << endl;

	}

 return 0;
}
