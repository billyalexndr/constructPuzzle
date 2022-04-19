#include "Puzzle.h"

using namespace std;

int main()
{
	srand(unsigned(time(0)));

	// randomize the puzzle
	Puzzle puzzle(3, 4, "logoUPNVJ.png", 1000, 500);

	puzzle.run();
}