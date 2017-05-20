#include "stdafx.h"  //________________________________________ Factorial.cpp
#include "Factorial.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Factorial app;
	return app.BeginDialog(IDI_Factorial, hInstance);
}

void Factorial::Window_Open(Win::Event& e)
{
}

