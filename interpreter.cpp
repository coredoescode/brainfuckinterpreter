#include <iostream>
#include "transpiler.cpp"
void interpret(std::string text){
	for(char letter : text){
		switch(letter)
		case '>':
			increasePointerLocation();
			break;
		case '<':
			decreasePointerLocation();
			break;
		case '+':
			inceaseValueAtPointer();
			break;
		case '-':
			decreaseValueAtPointer();
			break;
		case '[':
			ifZeroJumpToClosingBracket();
			break;
		case ']':
			ifNotZeroJumpToClosingBracket();
			break;
		case '.':
			printPointerToOutput();
			break;
		case ',':
			inputCharacterToPointer();
			break;
		
	}
}
