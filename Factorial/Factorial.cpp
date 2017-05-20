#include "stdafx.h"  //________________________________________ Factorial.cpp
#include "Factorial.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Factorial app;
	return app.BeginDialog(IDI_Factorial, hInstance);
}

void Factorial::Window_Open(Win::Event& e)
{
	wstring texto;
	Sys::Format(texto, L"Número\r\tSuma\r\tFactorial\r\n");
	tbxSalida.Text += texto;
	Sys::Format(texto, L"--------\r\t--------\r\t--------\r\n");
	tbxSalida.Text += texto;
	for (int i = 1; i <= 10; i++)
	{
		int suma = 0;
		for (int j= 1; j <= i; j++)
		{
			suma += j;
		}
		int factorial;
		int r = i;
		for (int temp = i - 1; temp >= 1; temp--)
		{
			r = r*temp;
		}
		Sys::Format(texto, L"%d\r\t%d\r\t%d\r\n", i, suma, r);
		tbxSalida.Text += texto;
	}
}

