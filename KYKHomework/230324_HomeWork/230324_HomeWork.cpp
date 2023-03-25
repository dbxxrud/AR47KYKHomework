// HomeWork0324.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <conio.h>
// 운영체제가 도와줄수밖에 없다.
#include <Windows.h>

// 숙제 0
// 상하좌우로 다 움직이게 해주세요.(완료)

// 숙제 1
// 잔상 지우기

// 숙제 2
// 화면 바깥으로 못나가게 하세요.

// 안해도 되는 숙제 
// 질문했을때 안받아줄겁니다.

// 숙제 3
// 장애물 만들고 배치하세요 당연히 플레이어는 거기로 못갑니다.

// 숙제 4
// 폭탄 f를 누를면 폭탄이 설치되고 눈에 보여야 합니다. 폭탄 @

// 숙제 5
// 일정시간이 지나고 폭탄이 터지면서
//     @
//     @
//     @
//  @@@@@@@
//     @
//     @
//     @

int main()
{
	const int ScreenYSize = 5;
	const int ScreenXSize = 5;

	char Arr[ScreenYSize][ScreenXSize] = { 0, };

	int PlayerY = ScreenYSize / 2;
	int PlayerX = ScreenXSize / 2;

	while (true)
	{
		system("cls");

		// 갱신
		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				Arr[y][x] = 'a';
			}
		}

		Arr[PlayerY][PlayerX] = '*'; // 플레이어

		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				printf_s("%c", Arr[y][x]);
			}
			printf_s("\n");
		}

		if (0 == _kbhit())
		{
			// 0.5초간 멈춘다.
			Sleep(200);
			// 일부러 멈추게 만들겁니다.
			continue;
		}

		// 어떤키를 눌렀는지 알려주는 함수.
		char Ch = _getch();

		
		switch (Ch)
		{
		case 'a':
		case 'A':
			if (PlayerX > 0)
			{
				PlayerX -= 1;
			}
			break;
		case 'd':
		case 'D':
			if (PlayerX < 4)
			{
				PlayerX += 1;
			}
			break;
		case 'w':
		case 'W':
			if (PlayerY > 0)
			{
				PlayerY -= 1;
			}
			break;
		case 's':
		case 'S':
			if (PlayerY < 4)
			{
				PlayerY += 1;
				break;
			}
			break;
		default:
			break;
		}
		Sleep(200);
	}


}
