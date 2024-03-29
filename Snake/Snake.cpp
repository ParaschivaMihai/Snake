#include "pch.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <time.h>
#include <chrono>
#include<Windows.h>
#include <thread>


using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;


int main()
{

	int width = 24;
	int height = 24;
	Board b(width, height);
	int x = 1;
	int y = 1;
	bool GameOn = true;
	b.PutFruit();
	while (GameOn) {

		b.ShowBoard();
		GameOn = b.Update();
		sleep_for(75ms);


		system("cls");
	}
	system("cls");
	std::cout << "GAME OVER !!!!";

	return 0;
}


