#include <fbxsdk.h>
#include "Converter.h"
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	Converter converter("RunningRobot.fbx");

	converter.isLevel = false; // change this when loading levels
	converter.importMesh();

	int answer = 0;
	std::cout << "Mesh loaded." << std::endl << "Load animations? 1 = Yes" << std::endl;
	std::cin >> answer;
	if (answer == 1)
	{
		converter.importAnimation();
	}

	getchar();
	std::cout << "Done, press any key";
	getchar();
	return 0;
}