#include <iostream>
#include <fstream>
#include <string>

#include "src/CodeGenerator.h"
#include "src/VirtualMachine.h"

using namespace std;

/*
*** FRONT END COMPLETED ***
*** VIRTUAL MACHINE NOT COMPLETED ***

interpreter:
	* read all text
	* check for grammar
	* create tokens
	* generate AST node tree
	* read AST node tree & generate bytecode
	read and execute bytecode(in virtual machine)
	return output
*/

int main()
{	
	ofstream file("test.mplc");

	CodeGenerator cg("./test.mpl");
	cg.Generate();

	file << cg.buffer.str() << endl;
	file.close();

	VirtualMachine vm("test.mplc");
	vm.Read();

	return 0;
}