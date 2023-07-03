#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include "alpha.h"
#include "monsterball list.h"
#pragma warning(disable : 4996)

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13
#define ESC 27
#define BACKSPACE 8

void speech_bubble();
void gotoxy(int x, int y);
void CursorView();
void ColorSet(int backColor, int textColor);
void reset_display();
void twinkle_button();
void alphabet(char alphabet, int xx, int yy);
void delete_speech_bubble();
void remove_input();
void color_Pokemon(int Pokemon[20][22], int xx, int yy, int z);
void black_color_Pokemon(int Pokemon[20][22], int xx, int yy, int z);
void erase_speech_bubble();
void delete_display();
void select_name(int name[7]);
void name_alphabet();
void name_arrow(int x, int y);
void erase_name_arrow(int x, int y);
void name_uparrow(int x, int y);
void erase_name_uparrow(int x, int y);
void print_name(int name[7], int xx, int yy);
void print_monsterball(int xx, int yy);
int select_monsterball_arrow();
void battle(int POKEMON[]);
int appear_Pokemon(int POKEMON[]);
int battel_attack(int POKEMON[], int your_POKEMON);
int battle_run();
int battle_catch(int your_POKEMON, int die);
void HP();
void HP1();
void color_pepole(int pepole[43][38], int x, int y);
void monsterball_color(int monsterball[15][17]);
int shaking_monsterball(int die);
void pokedex(int POKEmON[]);

char LV, LV1;
int POKEMON_LV[10] = { 0,5,5,5,16,16,16,36,36,36 };
int current_hp, current_hp1, color = 1, reset_hp = 0;
float hp2;

typedef enum ColorKinds {
	BLACK,      //0
	darkBLUE,    //1
	Green,    //2
	darkSkyBlue,    //3
	DarkRed,      //4
	DarkPurple,    //5
	DarkYellow,    //6
	GRAY,        //7s
	DarkGray,    //8
	BLUE,        //9
	GREEN,        //10
	SkyBlue,    //11
	RED,        //12
	PURPLE,        //13
	YELLOW,        //14
	WHITE        //15
} CokorKinds;

int main() {
	int name[7] = { 0 };
	int POKEMON[10] = { 0,1,0,0,0,0,0,0,0,0 };
	system("mode con:cols=210 lines=62");
	SetConsoleTitle(TEXT("pokemon"));
	CursorView();

	reset_display();
	speech_bubble();


	{
		//Hello world!
		Pokmeon_Professor_Oak(64, 3);
		alphabet('H', 18, 48);
		Sleep(50);
		alphabet('e', 27, 48);
		Sleep(50);
		alphabet('l', 38, 48);
		Sleep(50);
		alphabet('l', 42, 48);
		Sleep(50);
		alphabet('o', 47, 49);
		Sleep(50);

		alphabet('W', 60, 48);
		Sleep(50);
		alphabet('o', 71, 49);
		Sleep(50);
		alphabet('r', 80, 49);
		Sleep(50);
		alphabet('l', 89, 48);
		Sleep(50);
		alphabet('d', 94, 48);
		Sleep(50);
		alphabet('!', 104, 48);
		Sleep(50);

		//welcome to the
		alphabet('W', 18, 54);
		Sleep(50);
		alphabet('e', 29, 54);
		Sleep(50);
		alphabet('l', 40, 54);
		Sleep(50);
		alphabet('c', 45, 55);
		Sleep(50);
		alphabet('o', 54, 55);
		Sleep(50);
		alphabet('m', 63, 55);
		Sleep(50);
		alphabet('e', 74, 54);
		Sleep(50);

		alphabet('t', 89, 54);
		Sleep(50);
		alphabet('o', 96, 55);
		Sleep(50);

		alphabet('t', 109, 54);
		Sleep(50);
		alphabet('h', 116, 54);
		Sleep(50);
		alphabet('e', 125, 54);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//world of the POKEMON!
		alphabet('W', 18, 48);
		Sleep(50);
		alphabet('o', 29, 49);
		Sleep(50);
		alphabet('r', 38, 49);
		Sleep(50);
		alphabet('l', 47, 48);
		Sleep(50);
		alphabet('d', 52, 48);
		Sleep(50);

		alphabet('o', 65, 49);
		Sleep(50);
		alphabet('f', 74, 48);
		Sleep(50);

		alphabet('P', 85, 48);
		Sleep(50);
		alphabet('O', 94, 48);
		Sleep(50);
		alphabet('K', 103, 48);
		Sleep(50);
		alphabet('E', 112, 48);
		Sleep(50);
		alphabet('M', 121, 48);
		Sleep(50);
		alphabet('O', 132, 48);
		Sleep(50);
		alphabet('N', 141, 48);
		Sleep(50);
		alphabet('!', 151, 48);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//My name is OAK!
		alphabet('M', 18, 48);
		Sleep(50);
		alphabet('y', 29, 49);
		Sleep(50);

		alphabet('n', 42, 49);
		Sleep(50);
		alphabet('a', 53, 48);
		Sleep(50);
		alphabet('m', 62, 49);
		Sleep(50);
		alphabet('e', 73, 48);
		Sleep(50);

		alphabet('i', 88, 48);
		Sleep(50);
		alphabet('s', 91, 48);
		Sleep(50);

		alphabet('O', 104, 48);
		Sleep(50);
		alphabet('A', 113, 48);
		Sleep(50);
		alphabet('K', 122, 48);
		Sleep(50);
		alphabet('!', 131, 48);
		Sleep(50);

		//People call me
		alphabet('P', 18, 54);
		Sleep(50);
		alphabet('e', 27, 54);
		Sleep(50);
		alphabet('a', 38, 54);
		Sleep(50);
		alphabet('p', 47, 54);
		Sleep(50);
		alphabet('l', 54, 54);
		Sleep(50);
		alphabet('e', 59, 54);
		Sleep(50);

		alphabet('c', 74, 55);
		Sleep(50);
		alphabet('a', 83, 54);
		Sleep(50);
		alphabet('l', 92, 54);
		Sleep(50);
		alphabet('l', 96, 54);
		Sleep(50);

		alphabet('m', 105, 55);
		Sleep(50);
		alphabet('e', 116, 54);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//the POKEMON PROF!
		alphabet('t', 18, 48);
		Sleep(50);
		alphabet('h', 25, 48);
		Sleep(50);
		alphabet('e', 34, 48);
		Sleep(50);

		alphabet('P', 49, 48);
		Sleep(50);
		alphabet('O', 58, 48);
		Sleep(50);
		alphabet('K', 67, 48);
		Sleep(50);
		alphabet('E', 76, 48);
		Sleep(50);
		alphabet('M', 85, 48);
		Sleep(50);
		alphabet('O', 96, 48);
		Sleep(50);
		alphabet('N', 105, 48);
		Sleep(50);

		alphabet('P', 118, 48);
		Sleep(50);
		alphabet('R', 127, 48);
		Sleep(50);
		alphabet('O', 136, 48);
		Sleep(50);
		alphabet('F', 145, 48);
		Sleep(50);
		alphabet('!', 155, 48);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();
		delete_display();

		//print Nidorina
		Pokemon_Nidorina(85, 15, 1, 0);

		//This world is
		alphabet('T', 18, 48);
		Sleep(50);
		alphabet('h', 25, 48);
		Sleep(50);
		alphabet('i', 34, 48);
		Sleep(50);
		alphabet('s', 37, 48);
		Sleep(50);

		alphabet('W', 48, 48);
		Sleep(50);
		alphabet('o', 59, 49);
		Sleep(50);
		alphabet('r', 68, 49);
		Sleep(50);
		alphabet('l', 77, 48);
		Sleep(50);
		alphabet('d', 82, 48);
		Sleep(50);

		alphabet('i', 95, 48);
		Sleep(50);
		alphabet('s', 98, 48);
		Sleep(50);

		//inhabited by
		alphabet('i', 18, 54);
		Sleep(50);
		alphabet('n', 21, 55);
		Sleep(50);
		alphabet('h', 32, 54);
		Sleep(50);
		alphabet('a', 41, 54);
		Sleep(50);
		alphabet('b', 50, 54);
		Sleep(50);
		alphabet('i', 59, 54);
		Sleep(50);
		alphabet('t', 62, 54);
		Sleep(50);
		alphabet('e', 69, 54);
		Sleep(50);
		alphabet('d', 80, 54);
		Sleep(50);

		alphabet('b', 93, 54);
		Sleep(50);
		alphabet('y', 102, 55);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//creatures called
		alphabet('c', 18, 49);
		Sleep(50);
		alphabet('r', 27, 49);
		Sleep(50);
		alphabet('e', 36, 48);
		Sleep(50);
		alphabet('a', 47, 48);
		Sleep(50);
		alphabet('t', 56, 48);
		Sleep(50);
		alphabet('u', 63, 50);
		Sleep(50);
		alphabet('r', 72, 49);
		Sleep(50);
		alphabet('e', 81, 48);
		Sleep(50);
		alphabet('s', 92, 48);
		Sleep(50);

		alphabet('c', 103, 49);
		Sleep(50);
		alphabet('a', 112, 48);
		Sleep(50);
		alphabet('l', 121, 48);
		Sleep(50);
		alphabet('l', 125, 48);
		Sleep(50);
		alphabet('e', 130, 48);
		Sleep(50);
		alphabet('d', 141, 48);
		Sleep(50);

		//POKEMON!
		alphabet('P', 18, 54);
		Sleep(50);
		alphabet('O', 27, 54);
		Sleep(50);
		alphabet('K', 36, 54);
		Sleep(50);
		alphabet('E', 45, 54);
		Sleep(50);
		alphabet('M', 54, 54);
		Sleep(50);
		alphabet('O', 65, 54);
		Sleep(50);
		alphabet('N', 74, 54);
		Sleep(50);
		alphabet('!', 84, 54);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();
		delete_display();
		Pokmeon_Professor_Oak(64, 3);

		//First, what is your
		alphabet('F', 18, 48);
		Sleep(50);
		alphabet('i', 27, 48);
		Sleep(50);
		alphabet('r', 30, 49);
		Sleep(50);
		alphabet('s', 39, 48);
		Sleep(50);
		alphabet('t', 46, 48);
		Sleep(50);
		alphabet(',', 54, 51);
		Sleep(50);

		alphabet('w', 63, 50);
		Sleep(50);
		alphabet('h', 74, 48);
		Sleep(50);
		alphabet('a', 83, 48);
		Sleep(50);
		alphabet('t', 92, 48);
		Sleep(50);

		alphabet('i', 103, 48);
		Sleep(50);
		alphabet('s', 106, 48);
		Sleep(50);

		//your name
		alphabet('y', 18, 55);
		Sleep(50);
		alphabet('o', 27, 55);
		Sleep(50);
		alphabet('u', 36, 56);
		Sleep(50);
		alphabet('r', 45, 55);
		Sleep(50);

		alphabet('n', 58, 55);
		Sleep(50);
		alphabet('a', 69, 54);
		Sleep(50);
		alphabet('m', 78, 55);
		Sleep(50);
		alphabet('e', 89, 54);
		Sleep(50);
		alphabet('?', 101, 54);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();
		erase_speech_bubble();
		delete_display();

		//YOUR NAME?
		alphabet('Y', 14, 3);
		Sleep(50);
		alphabet('O', 21, 3);
		Sleep(50);
		alphabet('U', 30, 3);
		Sleep(50);
		alphabet('R', 39, 3);
		Sleep(50);

		alphabet('N', 52, 3);
		Sleep(50);
		alphabet('A', 61, 3);
		Sleep(50);
		alphabet('M', 70, 3);
		Sleep(50);
		alphabet('E', 81, 3);
		Sleep(50);
		alphabet('?', 91, 3);
		Sleep(50);

		//이름 정하기
		name_alphabet();
		select_name(name);
		reset_display();

		speech_bubble();
		Pokmeon_Professor_Oak(64, 3);

		//Right! So your
		alphabet('R', 18, 48);
		Sleep(50);
		alphabet('i', 27, 48);
		Sleep(50);
		alphabet('g', 30, 48);
		Sleep(50);
		alphabet('h', 39, 48);
		Sleep(50);
		alphabet('t', 48, 48);
		Sleep(50);
		alphabet('!', 56, 48);
		Sleep(50);

		alphabet('S', 63, 48);
		Sleep(50);
		alphabet('o', 72, 49);
		Sleep(50);

		alphabet('y', 85, 49);
		Sleep(50);
		alphabet('o', 94, 49);
		Sleep(50);
		alphabet('u', 103, 50);
		Sleep(50);
		alphabet('r', 112, 49);
		Sleep(50);

		//name is 이름
		alphabet('n', 18, 55);
		Sleep(50);
		alphabet('a', 29, 54);
		Sleep(50);
		alphabet('m', 38, 55);
		Sleep(50);
		alphabet('e', 49, 54);
		Sleep(50);

		alphabet('i', 62, 54);
		Sleep(50);
		alphabet('s', 65, 54);
		Sleep(50);
		print_name(name, 76, 54);

		twinkle_button();
		delete_speech_bubble();

		//Now choose your
		alphabet('N', 18, 48);
		Sleep(50);
		alphabet('o', 27, 49);
		Sleep(50);
		alphabet('w', 36, 50);
		Sleep(50);

		alphabet('c', 51, 49);
		Sleep(50);
		alphabet('h', 60, 48);
		Sleep(50);
		alphabet('o', 69, 49);
		Sleep(50);
		alphabet('o', 78, 49);
		Sleep(50);
		alphabet('s', 87, 48);
		Sleep(50);
		alphabet('e', 94, 48);
		Sleep(50);

		alphabet('y', 109, 49);
		Sleep(50);
		alphabet('o', 118, 49);
		Sleep(50);
		alphabet('u', 127, 50);
		Sleep(50);
		alphabet('r', 136, 49);
		Sleep(50);

		//Pokemon!
		alphabet('P', 18, 54);
		Sleep(50);
		alphabet('O', 27, 54);
		Sleep(50);
		alphabet('K', 36, 54);
		Sleep(50);
		alphabet('E', 45, 54);
		Sleep(50);
		alphabet('M', 54, 54);
		Sleep(50);
		alphabet('O', 65, 54);
		Sleep(50);
		alphabet('N', 74, 54);
		Sleep(50);
		alphabet('!', 84, 54);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();
		erase_speech_bubble();

		POKEMON[select_monsterball_arrow()] = 1;
		Pokmeon_Professor_Oak(64, 3);

		//Good choice
		alphabet('G', 18, 48);
		Sleep(50);
		alphabet('o', 27, 49);
		Sleep(50);
		alphabet('o', 36, 49);
		Sleep(50);
		alphabet('d', 45, 48);
		Sleep(50);

		alphabet('c', 58, 49);
		Sleep(50);
		alphabet('h', 67, 48);
		Sleep(50);
		alphabet('o', 76, 49);
		Sleep(50);
		alphabet('i', 85, 48);
		Sleep(50);
		alphabet('c', 88, 49);
		Sleep(50);
		alphabet('e', 97, 48);
		Sleep(50);
		alphabet('!', 109, 48);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//A world of dreams
		alphabet('A', 18, 48);
		Sleep(50);

		alphabet('w', 31, 50);
		Sleep(50);
		alphabet('o', 42, 49);
		Sleep(50);
		alphabet('r', 51, 49);
		Sleep(50);
		alphabet('l', 60, 48);
		Sleep(50);
		alphabet('d', 65, 48);
		Sleep(50);

		alphabet('o', 78, 49);
		Sleep(50);
		alphabet('f', 87, 48);
		Sleep(50);

		alphabet('d', 98, 48);
		Sleep(50);
		alphabet('r', 107, 49);
		Sleep(50);
		alphabet('e', 116, 48);
		Sleep(50);
		alphabet('a', 127, 48);
		Sleep(50);
		alphabet('m', 136, 49);
		Sleep(50);
		alphabet('s', 147, 48);
		Sleep(50);

		//and adventures
		alphabet('a', 18, 54);
		Sleep(50);
		alphabet('n', 27, 55);
		Sleep(50);
		alphabet('d', 38, 54);
		Sleep(50);

		alphabet('a', 51, 54);
		Sleep(50);
		alphabet('d', 60, 54);
		Sleep(50);
		alphabet('v', 69, 56);
		Sleep(50);
		alphabet('e', 76, 54);
		Sleep(50);
		alphabet('n', 87, 55);
		Sleep(50);
		alphabet('t', 98, 54);
		Sleep(50);
		alphabet('u', 105, 56);
		Sleep(50);
		alphabet('r', 114, 55);
		Sleep(50);
		alphabet('e', 123, 54);
		Sleep(50);
		alphabet('s', 134, 54);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//with POKEMON awaist!
		alphabet('w', 18, 50);
		Sleep(50);
		alphabet('i', 29, 48);
		Sleep(50);
		alphabet('t', 32, 48);
		Sleep(50);
		alphabet('h', 39, 48);
		Sleep(50);

		alphabet('P', 52, 48);
		Sleep(50);
		alphabet('O', 61, 48);
		Sleep(50);
		alphabet('K', 70, 48);
		Sleep(50);
		alphabet('E', 79, 48);
		Sleep(50);
		alphabet('M', 88, 48);
		Sleep(50);
		alphabet('O', 99, 48);
		Sleep(50);
		alphabet('N', 108, 48);
		Sleep(50);

		alphabet('a', 121, 48);
		Sleep(50);
		alphabet('w', 130, 50);
		Sleep(50);
		alphabet('a', 141, 48);
		Sleep(50);
		alphabet('i', 150, 48);
		Sleep(50);
		alphabet('s', 153, 48);
		Sleep(50);
		alphabet('t', 160, 48);
		Sleep(50);
		alphabet('!', 168, 48);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		//Lets go!
		alphabet('L', 18, 48);
		Sleep(50);
		alphabet('e', 25, 48);
		Sleep(50);
		alphabet('t', 36, 48);
		Sleep(50);
		alphabet('s', 43, 48);
		Sleep(50);

		alphabet('g', 54, 48);
		Sleep(50);
		alphabet('o', 63, 49);
		Sleep(50);
		alphabet('!', 73, 48);
		Sleep(50);

		twinkle_button();
		erase_speech_bubble();
		delete_display();
	}

	while (1) {
		battle(POKEMON);
	}

	Sleep(100000);
	return 0;
}

//좌표를 고정하는 함수
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//커서뷰의 크기를 조절해주는 함수
void CursorView() {
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

//색을 변경해주는 함수
void ColorSet(int backColor, int textColor) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, (backColor << 4) + textColor);
}

//말풍선을 만들어주는 함수
void speech_bubble() {
	int speech[210][16];
	for (int i = 6; i < 204; i++) {
		if (i % 2 == 0)
			speech[i][0] = 1;
	}
	for (int i = 6; i < 204; i++) {
		if (i % 2 == 0)
			speech[i][14] = 1;
	}
	for (int j = 2; j < 13; j++)
		speech[2][j] = 1;
	for (int j = 2; j < 13; j++)
		speech[206][j] = 1;
	for (int i = 4; i <= 14; i++) {
		for (int j = 1; j < 14; j++)
			speech[i][j] = 2;
	}
	for (int i = 194; i <= 204; i++) {
		for (int j = 1; j < 14; j++)
			speech[i][j] = 2;
	}
	gotoxy(0, 46);
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 210; i++) {
			if (i % 2 == 0) {
				if (speech[i][j] == 1) {
					ColorSet(BLACK, BLACK);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else if (speech[i][j] == 2) {
					ColorSet(DarkYellow, DarkYellow);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		if (j != 14) {
			printf("\n");
		}
	}
	gotoxy(4, 47);
	ColorSet(BLACK, BLACK);
	printf("  ");
	ColorSet(WHITE, WHITE);
	gotoxy(204, 47);
	ColorSet(BLACK, BLACK);
	printf("  ");
	ColorSet(WHITE, WHITE);
	gotoxy(4, 59);
	ColorSet(BLACK, BLACK);
	printf("  ");
	ColorSet(WHITE, WHITE);
	gotoxy(204, 59);
	ColorSet(BLACK, BLACK);
	printf("  ");
	ColorSet(WHITE, BLACK);
}

//화면 초기화
void reset_display() {
	ColorSet(WHITE, WHITE);
	for (int i = 0; i <= 210; i++) {
		for (int j = 0; j <= 62; j++) {
			gotoxy(i, j);
			printf("  ");
		}
	}
}

//선입력 초기화
void remove_input() {
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
}

//반짝거리는 버튼
void twinkle_button() {
	while (1) {
		remove_input();
		gotoxy(196, 57);
		ColorSet(WHITE, WHITE);
		printf("  ");
		gotoxy(198, 58);
		printf("  ");
		gotoxy(200, 57);
		printf("  ");
		gotoxy(198, 57);
		printf("  ");
		Sleep(800);
		gotoxy(196, 57);
		ColorSet(DarkYellow, DarkYellow);
		printf("  ");
		gotoxy(198, 58);
		printf("  ");
		gotoxy(200, 57);
		printf("  ");
		gotoxy(198, 57);
		printf("  ");
		Sleep(800);
		if (kbhit()) {
			int szChoice = getch();
			switch (szChoice) {
			case ' ':
				gotoxy(196, 57);
				ColorSet(DarkYellow, DarkYellow);
				printf("  ");
				gotoxy(198, 58);
				ColorSet(DarkYellow, DarkYellow);
				printf("  ");
				gotoxy(200, 57);
				ColorSet(DarkYellow, DarkYellow);
				printf("  ");
				gotoxy(198, 57);
				ColorSet(DarkYellow, DarkYellow);
				printf("  ");
				ColorSet(WHITE, BLACK);
				return;
			}
		}
	}
}

//알파벳 출력해주는 함수
void alphabet(char alphabet, int xx, int yy) {
	ColorSet(WHITE, WHITE);
	switch (alphabet)
	{
	case 'A':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (A[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'B':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (B[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'C':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (C[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'D':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (D[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'E':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (E[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'F':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (F[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'G':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (G[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'H':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (H[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'I':
		for (int i1 = 0; i1 < 1; i1++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i1 * 2 + xx, j + yy);
				if (I[j][i1] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'J':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (J[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'K':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (K[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'L':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (L[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'M':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (M[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'N':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (N[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'O':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (O[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'P':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (P[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'Q':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (Q[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'R':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (R[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'S':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (S[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'T':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (T[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'U':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (U[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'V':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (V[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'W':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (W[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'X':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (X[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'Y':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (Y[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'Z':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (Z[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '!':
		for (int i1 = 0; i1 < 1; i1++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i1 * 2 + xx, j + yy);
				if (Feel[j][i1] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '?':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (What[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'a':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (a[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'b':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (b[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'c':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (c[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'd':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (d[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'e':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (e[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'f':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (f[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'g':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (g[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'h':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (h[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'i':
		for (int i1 = 0; i1 < 1; i1++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i1 * 2 + xx, j + yy);
				if (i[j][i1] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'j':
		for (int i = 0; i < 3; i++) {
			for (int j1 = 0; j1 < 5; j1++) {
				gotoxy(i * 2 + xx, j1 + yy);
				if (j[j1][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'k':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (k[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'l':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (l[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'm':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (m[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'n':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (n[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'o':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (o[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'p':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (p[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'q':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (q[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'r':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (r[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 's':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (s[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 't':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (t[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		gotoxy(2 + xx, 4 + yy);
		printf(" ");
		break;
	case 'u':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (u[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'v':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (v[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'w':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 3; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (w[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'x':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (x[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'y':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (y[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case 'z':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (z[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '0':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num0[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		if (color == 1)
			ColorSet(BLACK, BLACK);
		if (color == 2)
			ColorSet(RED, RED);
		gotoxy(3 + xx, 2 + yy);
		printf("  ");
		ColorSet(WHITE, WHITE);
		break;
	case '1':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num1[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '2':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num2[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '3':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num3[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '4':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num4[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '5':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num5[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '6':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num6[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '7':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num7[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '8':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num8[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '9':
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (num9[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case ',':
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				gotoxy(i * 2 + xx, j + yy);
				if (Rest[j][i] == 1) {
					if (color == 1)
						ColorSet(BLACK, BLACK);
					if (color == 2)
						ColorSet(RED, RED);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("  ");
			}
		}
		break;
	case '.':
		for (int i = 0; i < 1; i++) {
			gotoxy(i * 2 + xx, yy);
			if (num9[i] == 1) {
				if (color == 1)
					ColorSet(BLACK, BLACK);
				if (color == 2)
					ColorSet(RED, RED);
				printf("  ");
				ColorSet(WHITE, WHITE);
			}
			else
				printf("  ");
		}
		break;
	}
}

//말풍선 안을 지워주는 함수
void delete_speech_bubble() {
	for (int i = 192; i >= 16; i--) {
		for (int j = 47; j < 60; j++) {
			gotoxy(i, j);
			ColorSet(WHITE, WHITE);
			printf("  ");
		}
	}
}

//말퓽선을 지워주는 함수
void erase_speech_bubble() {
	int speech[210][16];
	for (int i = 6; i < 204; i++) {
		if (i % 2 == 0)
			speech[i][0] = 0;
	}
	for (int i = 6; i < 204; i++) {
		if (i % 2 == 0)
			speech[i][14] = 0;
	}
	for (int j = 2; j < 13; j++)
		speech[2][j] = 0;
	for (int j = 2; j < 13; j++)
		speech[206][j] = 0;
	for (int i = 4; i <= 14; i++) {
		for (int j = 1; j < 14; j++)
			speech[i][j] = 0;
	}
	for (int i = 194; i <= 204; i++) {
		for (int j = 1; j < 14; j++)
			speech[i][j] = 0;
	}
	gotoxy(0, 46);
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 210; i++) {
			if (i % 2 == 0) {
				if (speech[i][j] == 1) {
					ColorSet(BLACK, BLACK);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else if (speech[i][j] == 2) {
					ColorSet(DarkYellow, DarkYellow);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else
					printf("ㅤ");
			}
		}
		if (j != 14)
			printf("\n");
	}
	gotoxy(4, 47);
	printf("  ");
	ColorSet(WHITE, WHITE);
	gotoxy(204, 47);
	printf("  ");
	gotoxy(4, 59);
	printf("  ");
	gotoxy(204, 59);
	printf("  ");
	ColorSet(WHITE, BLACK);
}

//포켓몬 출력해주는 함수
void color_Pokemon(int Pokemon[20][22], int xx, int yy, int z) {
	int i, j, k;
	k = 20;
	for (j = 0; j < 22; j++) {
		if (z == 2)
			k -= 4;
		else
			k = 0;
		for (i = 0; i < 20; i++) {
			gotoxy(j * 2 + xx + k, i + yy);
			if (Pokemon[i][j] == 00)
			{
				ColorSet(BLACK, BLACK);
				printf("  "); //블랙
			}
			if (Pokemon[i][j] == 15)
			{
				ColorSet(WHITE, WHITE);
				printf("  "); //화이트
			}
			if (Pokemon[i][j] == 82)
			{
				printf("\033[38;2;82;82;82m");
				printf("\033[48;2;82;82;82m");
				printf("  "); //회색
			}
			if (Pokemon[i][j] == 259999)
			{
				printf("\033[38;2;25;99;99m");
				printf("\033[48;2;25;99;99m");
				printf("  "); //파이리 눈 청색/니드리아 귀 그린
			}
			if (Pokemon[i][j] == 2149966)
			{
				printf("\033[38;2;214;99;66m");
				printf("\033[48;2;214;99;66m");
				printf("  "); //파이리 주황 명암
			}
			if (Pokemon[i][j] == 24714841)
			{
				printf("\033[38;2;247;148;41m");
				printf("\033[48;2;247;148;41m");
				printf("  "); //파이리 주황
			}
			if (Pokemon[i][j] == 247230156)
			{
				printf("\033[38;2;247;230;156m");
				printf("\033[48;2;247;230;156m");
				printf("  ");
				//배
			}
			if (Pokemon[i][j] == 24710774)
			{
				printf("\033[38;2;247;107;74m");
				printf("\033[48;2;247;107;74m");
				printf("  "); //리자드 빨강
			}
			if (Pokemon[i][j] == 2067466)
			{
				printf("\033[38;2;206;74;66m");
				printf("\033[48;2;206;74;66m");
				printf("  "); //리자드 빨강 음영
			}
			if (Pokemon[i][j] == 24724741)
			{
				printf("\033[38;2;247;247;41m");
				printf("\033[48;2;247;247;41m");
				printf("  ");
				//샛노랑
			}
			if (Pokemon[i][j] == 173197255)
			{
				printf("\033[38;2;173;197;255m");
				printf("\033[48;2;173;197;255m");
				printf("  ");
				//니드리나 연한 블루
			}
			if (Pokemon[i][j] == 132148197)
			{
				printf("\033[38;2;132;148;197m");
				printf("\033[48;2;132;148;197m");
				printf("  ");
				//니드리나 블루
			}
			if (Pokemon[i][j] == 2479982)
			{
				printf("\033[38;2;247;99;82m");
				printf("\033[48;2;247;99;82m");
				printf("  ");
				//니드리나 눈 레드
			}
			if (Pokemon[i][j] == 147200212)
			{
				printf("\033[38;2;147;200;212m");
				printf("\033[48;2;147;200;212m");
				printf("  ");
				//꼬부기,거북왕 블루
			}
			if (Pokemon[i][j] == 43137198)
			{
				printf("\033[38;2;43;137;198m");
				printf("\033[48;2;43;137;198m");
				printf("  ");
				//꼬부기,거북왕 블루 명암
			}
			if (Pokemon[i][j] == 1557466)
			{
				printf("\033[38;2;155;74;66m");
				printf("\033[48;2;155;74;66m");
				printf("  ");
				//이상해씨 꽃 핑크 음영
			}
			if (Pokemon[i][j] == 22616838)
			{
				printf("\033[38;2;226;168;38m");
				printf("\033[48;2;226;168;38m");
				printf("  ");
				//파이리 배, 꼬부기 배, 아이보리+녹색
			}
			if (Pokemon[i][j] == 7711480)
			{
				printf("\033[38;2;77;114;80m");
				printf("\033[48;2;77;114;80m");
				printf("  ");
				//이상해씨 어두운 초록
			}
			if (Pokemon[i][j] == 8214082)
			{
				printf("\033[38;2;82;140;82m");
				printf("\033[48;2;82;140;82m");
				printf("  ");
				//이상해씨 중간 초록
			}
			if (Pokemon[i][j] == 11318387)
			{
				printf("\033[38;2;113;183;87m");
				printf("\033[48;2;113;183;87m");
				printf("  ");
				//이상해씨 밝은 초록
			}
			if (Pokemon[i][j] == 231107115)
			{
				printf("\033[38;2;231;107;115m");
				printf("\033[48;2;231;107;115m");
				printf("  ");
				//이상해씨 꽃 핑크
			}
			if (Pokemon[i][j] == 1555971)
			{
				printf("\033[38;2;155;59;71m");
				printf("\033[48;2;155;59;71m");
				printf("  ");
				//이상해씨 꽃 핑크 음영
			}
			if (Pokemon[i][j] == 22215641)
			{
				printf("\033[38;2;222;156;41m");
				printf("\033[48;2;222;156;41m");
				printf("  ");
				//구구 황토색
			}
			if (Pokemon[i][j] == 18911566)
			{
				printf("\033[38;2;189;115;66m");
				printf("\033[48;2;189;115;66m");
				printf("  ");
				//구구 갈색
			}
			if (Pokemon[i][j] == 230165165)
			{
				printf("\033[38;2;230;165;165m");
				printf("\033[48;2;230;165;165m");
				printf("  ");
				//구구 부리핑크
			}
			if (Pokemon[i][j] == 1891893181)
			{
				printf("\033[38;2;189;189;181m");
				printf("\033[48;2;189;189;181m");
				printf("  ");
				//라프라스 회색
			}
			if (Pokemon[i][j] == 99189225)
			{
				printf("\033[38;2;99;189;225m");
				printf("\033[48;2;99;189;225m");
				printf("  ");
				//라프라스 블루
			}
			if (Pokemon[i][j] == 156123214)
			{
				printf("\033[38;2;156;123;214m");
				printf("\033[48;2;156;123;214m");
				printf("  ");
				//메타몽, 팬텀 보라색
			}
			if (Pokemon[i][j] == 12399181)
			{
				printf("\033[38;2;123;99;181m");
				printf("\033[48;2;123;99;181m");
				printf("  ");
				//메타몽, 팬텀 어두운 보라색
			}
			if (Pokemon[i][j] == 173140173)
			{
				printf("\033[38;2;173;140;173m");
				printf("\033[48;2;173;140;173m");
				printf("  ");
				//아보크 보라색
			}
			if (Pokemon[i][j] == 148115148)
			{
				printf("\033[38;2;148;115;148m");
				printf("\033[48;2;148;115;148m");
				printf("  ");
				//아보크 어두운 보라색
			}
			if (Pokemon[i][j] == 90132206)
			{
				printf("\033[38;2;90;132;206m");
				printf("\033[48;2;90;132;206m");
				printf("  ");
				//루카리오 어두운 파랑
			}
			if (Pokemon[i][j] == 115173247)
			{
				printf("\033[38;2;115;173;247m");
				printf("\033[48;2;115;173;247m");
				printf("  ");
				//파랑
			}
			if (Pokemon[i][j] == 115115123)
			{
				printf("\033[38;2;115;115;123m");
				printf("\033[48;2;115;115;123m");
				printf("  ");
				//진한회색
			}
			if (Pokemon[i][j] == 190182206)
			{
				printf("\033[38;2;190;182;206m");
				printf("\033[48;2;190;182;206m");
				printf("  ");
				//괴력몬 연한 보라
			}
			if (Pokemon[i][j] == 140132156)
			{
				printf("\033[38;2;140;132;156m");
				printf("\033[48;2;140;132;156m");
				printf("  ");
				//괴력몬 보라
			}
			if (Pokemon[i][j] == 207181107)
			{
				printf("\033[38;2;207;181;107m");
				printf("\033[48;2;207;181;107m");
				printf("  ");
				//노란색 음영
			}
			if (Pokemon[i][j] == 18117390)
			{
				printf("\033[38;181;173;90m");
				printf("\033[48;2;181;173;90m");
				printf("  ");
				//또도가스 노란색 어두움
			}
			if (Pokemon[i][j] == 247247148)
			{
				printf("\033[38;2;247;247;148m");
				printf("\033[48;2;247;247;148m");
				printf("  ");
				//또도가스 노란색
			}
			if (Pokemon[i][j] == 156156255)
			{
				printf("\033[38;2;156;156;255m");
				printf("\033[48;2;156;156;255m");
				printf("  ");
				//또도가스 보라색
			}
			if (Pokemon[i][j] == 107115189)
			{
				printf("\033[38;2;107;115;189m");
				printf("\033[48;2;107;115;189m");
				printf("  ");
				//또도가스 보라색 음영
			}
			if (Pokemon[i][j] == 181197213)
			{
				printf("\033[38;2;181;197;213m");
				printf("\033[48;2;181;197;213m");
				printf("  ");
				//괴력몬 청록 회색
			}
			if (Pokemon[i][j] == 133156174)
			{
				printf("\033[38;2;133;156;174m");
				printf("\033[48;2;133;156;174m");
				printf("  ");
				//또도가스 청록 회색 음영
			}
			if (Pokemon[i][j] == 89115132)
			{
				printf("\033[38;2;89;115;132m");
				printf("\033[48;2;89;115;132m");
				printf("  ");
				//또도가스 청록 회색 음영2
			}
			if (Pokemon[i][j] == 123123123)
			{
				printf("\033[38;2;123;123;123m");
				printf("\033[48;2;123;123;123m");
				printf("  ");
				//롱스톤 음영
			}
			if (Pokemon[i][j] == 1057136)
			{
				printf("\033[38;2;105;71;36m");
				printf("\033[48;2;105;71;36m");
				printf("  ");
				//거북왕 어두운 갈색
			}
			if (Pokemon[i][j] == 21118368)
			{
				printf("\033[38;2;211;186;68");
				printf("\033[48;2;211;186;68m");
				printf("  ");
				//거북왕 노랑
			}
			if (Pokemon[i][j] == 148165253)
			{
				printf("\033[38;2;148;165;253");
				printf("\033[48;2;148;165;253m");
				printf("  ");
				//어니부기  파랑
			}
			if (Pokemon[i][j] == 101127202)
			{
				printf("\033[38;2;101;127;202");
				printf("\033[48;2;101;127;202m");
				printf("  ");
				//어니부기  파랑 음영
			}
			if (Pokemon[i][j] == 131131165)
			{
				printf("\033[38;2;131;131;165");
				printf("\033[48;2;131;131;165m");
				printf("  ");
				//강철톤 보라 음영
			}
			if (Pokemon[i][j] == 106115148)
			{
				printf("\033[38;2;106;115;148");
				printf("\033[48;2;106;115;148m");
				printf("  ");
				//강철톤 파랑 음영
			}
			if (Pokemon[i][j] == 96196168)
			{
				printf("\033[38;2;69;150;135");
				printf("\033[48;2;69;150;135m");
				printf("  ");
				//이상해꽃 민트
			}
			if (Pokemon[i][j] == 77146141)
			{
				printf("\033[38;2;105;193;168");
				printf("\033[48;2;105;193;168m");
				printf("  ");
				//강철톤 파랑 음영
			}
		}
	}
	ColorSet(WHITE, WHITE);
}

//포켓몬 흑백으로 출력해주는 함수
void black_color_Pokemon(int Pokemon[20][22], int xx, int yy, int z) {
	int i, j, k;
	k = 20;
	for (j = 0; j < 22; j++) {
		if (z == 2)
			k -= 4;
		else
			k = 0;
		for (i = 0; i < 20; i++) {
			gotoxy(j * 2 + xx + k, i + yy); {
				if (Pokemon[i][j] == 15) {
					ColorSet(WHITE, WHITE);
					printf("  "); //화이트
				}
				else {
					ColorSet(BLACK, BLACK);
					printf("  "); //블랙
				}
			}
		}
	}
	ColorSet(WHITE, WHITE);
}

//말풍선 제외하고 다 지워지는 함수
void delete_display() {
	ColorSet(WHITE, WHITE);
	for (int i = 0; i <= 210; i++) {
		for (int j = 0; j <= 44; j++) {
			if (i % 2 == 0) {
				gotoxy(i, j);
				printf("  ");
			}
		}
	}
	gotoxy(70, 45);
	printf("                                                           ");

}

//이름 정하기
void select_name(int name[7]) {
	int x = 12, y = 18, BREAK = 0, szChoice, cnt = 0, count = 0;
	int arr[8] = { 0 };
	for (int j = 0; j < 7; j++) {
		arr[j] = 8;
	}
	for (int i = 0; i < 8; i++) {
		remove_input();
		ColorSet(WHITE, WHITE);
		for (int j = 0; j < 7; j++) {
			for (int i = 0; i < 10; i++) {
				for (int k = 0; k < 6; k++) {
					if (name[j] == 0) {
						gotoxy(102 + i + j * 12, 2 + k);
						printf(" ");
					}
				}
			}
		}
		int k = 0;
		for (int j = 102; j <= 174; j += 12) {
			gotoxy(j, arr[k]);
			printf("          ");
			k++;
		}
		k = 0;
		for (int j = 0; j < 7; j++) {
			arr[j] = 9;
		}
		ColorSet(BLACK, BLACK);
		arr[i]--;
		for (int j = 102; j <= 174; j += 12) {
			gotoxy(j, arr[k]);
			printf("          ");
			k++;
		}
		for (int j = 0; name[j] != 0; j++) {
			int x = 0, y = 0;
			if (name[j] == 73)
				x = 3;
			if (name[j] == 76)
				x = 1;
			if (name[j] == 77)
				x = -1;
			if (name[j] == 84)
				x = 1;
			if (name[j] == 86)
				x = -1;
			if (name[j] == 87)
				x = -1;
			if (name[j] == 88)
				x = 1;
			if (name[j] == 89)
				x = 1;
			if (name[j] == 90)
				x = -1;
			if (name[j] == 99)
				y = 1;
			if (name[j] == 101)
				x = -1;
			if (name[j] == 102)
				x = 1;
			if (name[j] == 105)
				x = 3;
			if (name[j] == 106)
				x = 1;
			if (name[j] == 107)
				x = 1;
			if (name[j] == 108)
				x = 2;
			if (name[j] == 109) {
				x = -1;
				y = 1;
			}
			if (name[j] == 110) {
				x = -1;
				y = 1;
			}
			if (name[j] == 111) {
				x = -1;
				y = 1;
			}
			if (name[j] == 112)
				x = 2;
			if (name[j] == 113)
				x = 2;
			if (name[j] == 114)
				y = 1;
			if (name[j] == 116)
				x = 1;
			if (name[j] == 117)
				y = 2;
			if (name[j] == 118) {
				x = 1;
				y = 2;
			}
			if (name[j] == 119) {
				x = -1;
				y = 2;
			}
			if (name[j] == 120) {
				x = 1;
				y = 2;
			}
			if (name[j] == 121)
				y = 1;
			if (name[j] == 122)
				y = 1;
			alphabet(name[j], 103 + j * 12 + x, 3 + y);
		}
		ColorSet(WHITE, WHITE);
		name_arrow(x, y);
		while (BREAK == 0) {
			if (kbhit()) {
				szChoice = getch();
				switch (szChoice) {
				case LEFT:
					if (x > 12) {
						erase_name_arrow(x, y);
						x -= 20;
						name_arrow(x, y);
					}
					break;
				case RIGHT:
					if (x < 172) {
						if (x != 152 || y != 32) {
							erase_name_arrow(x, y);
							x += 20;
							name_arrow(x, y);
						}
						else if (x == 132 && y == 53) {
							erase_name_arrow(x, y);
							x += 40;
							name_arrow(x, y);
						}
					}
					break;
				case UP:
					if (y > 18) {
						erase_name_arrow(x, y);
						if (y == 39 && x == 172)
							y -= 7;
						y -= 7;
						name_arrow(x, y);
					}
					break;
				case DOWN:
					if (y < 53) {
						erase_name_arrow(x, y);
						if (y == 25 && x == 172)
							y += 7;
						y += 7;
						name_arrow(x, y);
					}
					break;
				case ENTER:
					erase_name_arrow(x, y);
					if (x == 172 && y == 53)
						return;
					BREAK = 1;
					if (i < 7) {
						for (int i = 18; i <= 53; i += 7) {
							for (int j = 12; j <= 172; j += 20) {
								if (i == y && j == x) {
									if (cnt < 26)
										name[count] = 65 + cnt;
									else
										name[count] = 70 + cnt;
									cnt = 0;
									count++;
									break;
								}
								cnt++;
							}
							if (cnt == 0)
								break;
						}
					}
					break;
				case BACKSPACE:
					if (i >= 1) {
						name[i - 1] = 0;
						count--;
						i -= 2;
						BREAK = 1;
					}
					break;
				}
			}
		}
		BREAK = 0;
	}
}

//이름을 정할수 있게 알파벤 자판 출력
void name_alphabet() {
	int speech[210][47];
	for (int i = 6; i < 204; i++) {
		if (i % 2 == 0)
			speech[i][0] = 1;
	}
	for (int i = 6; i < 204; i++) {
		if (i % 2 == 0)
			speech[i][47] = 1;
	}
	for (int j = 2; j < 46; j++) {
		speech[2][j] = 1;
	}
	for (int j = 2; j < 46; j++) {
		speech[206][j] = 1;
	}
	gotoxy(0, 12);
	for (int j = 0; j < 48; j++) {
		for (int i = 0; i < 210; i++) {
			if (i % 2 == 0) {
				if (speech[i][j] == 1) {
					ColorSet(BLACK, BLACK);
					printf("  ");
					ColorSet(WHITE, WHITE);
				}
				else {
					printf("  ");
				}
			}
		}
		if (j != 14) {
			printf("\n");
		}
	}
	ColorSet(BLACK, BLACK);
	gotoxy(4, 13);
	printf("  ");
	gotoxy(204, 13);
	printf("  ");
	gotoxy(4, 58);
	printf("  ");
	gotoxy(204, 58);
	printf("  ");
	ColorSet(WHITE, WHITE);
	alphabet('A', 18, 16);
	alphabet('B', 38, 16);
	alphabet('C', 58, 16);
	alphabet('D', 78, 16);
	alphabet('E', 98, 16);
	alphabet('F', 118, 16);
	alphabet('G', 138, 16);
	alphabet('H', 158, 16);
	alphabet('I', 178, 16);
	alphabet('J', 18, 23);
	alphabet('K', 38, 23);
	alphabet('L', 58, 23);
	alphabet('M', 78, 23);
	alphabet('N', 98, 23);
	alphabet('O', 118, 23);
	alphabet('P', 138, 23);
	alphabet('Q', 158, 23);
	alphabet('R', 178, 23);
	alphabet('S', 18, 30);
	alphabet('T', 38, 30);
	alphabet('U', 58, 30);
	alphabet('V', 78, 30);
	alphabet('W', 98, 30);
	alphabet('X', 118, 30);
	alphabet('Y', 138, 30);
	alphabet('Z', 158, 30);
	alphabet('a', 18, 37);
	alphabet('b', 38, 37);
	alphabet('c', 58, 38);
	alphabet('d', 78, 37);
	alphabet('e', 98, 37);
	alphabet('f', 118, 37);
	alphabet('g', 138, 37);
	alphabet('h', 158, 37);
	alphabet('i', 178, 37);
	alphabet('j', 18, 44);
	alphabet('k', 38, 44);
	alphabet('l', 58, 44);
	alphabet('m', 78, 45);
	alphabet('n', 98, 45);
	alphabet('o', 118, 45);
	alphabet('p', 138, 44);
	alphabet('q', 158, 44);
	alphabet('r', 178, 45);
	alphabet('s', 18, 51);
	alphabet('t', 38, 51);
	alphabet('u', 58, 53);
	alphabet('v', 78, 53);
	alphabet('w', 98, 53);
	alphabet('x', 118, 53);
	alphabet('y', 138, 52);
	alphabet('z', 158, 52);
	alphabet('E', 178, 51);
	alphabet('N', 187, 51);
	alphabet('D', 196, 51);
}

//화살표 출력
void name_arrow(int x, int y) {
	ColorSet(BLACK, BLACK);
	gotoxy(x, y + 1);
	printf("  ");
	gotoxy(x, y - 1);
	printf("  ");
	gotoxy(x, y);
	printf("  ");
	gotoxy(x + 2, y);
	printf("  ");
	ColorSet(WHITE, WHITE);
}

//화살표 지우기
void erase_name_arrow(int x, int y) {
	ColorSet(WHITE, WHITE);
	gotoxy(x, y + 1);
	printf("  ");
	gotoxy(x, y - 1);
	printf("  ");
	gotoxy(x, y);
	printf("  ");
	gotoxy(x + 2, y);
	printf("  ");
}

//화살표 출력
void name_uparrow(int x, int y) {
	ColorSet(BLACK, BLACK);
	gotoxy(x, y + 1);
	printf("  ");
	gotoxy(x + 2, y);
	printf("  ");
	gotoxy(x, y);
	printf("  ");
	gotoxy(x - 2, y);
	printf("  ");
	ColorSet(WHITE, WHITE);
}

//화살표 지우기
void erase_name_uparrow(int x, int y) {
	ColorSet(WHITE, WHITE);
	gotoxy(x, y + 1);
	printf("  ");
	gotoxy(x + 2, y);
	printf("  ");
	gotoxy(x, y);
	printf("  ");
	gotoxy(x - 2, y);
	printf("  ");
}

//이름 출력하기
void print_name(int name[7], int xx, int yy) {
	int x = 0;
	for (int j = 0; name[j] != 0; j++) {
		int y = 0;
		if (name[j - 1] == 73)
			x -= 6;
		if (name[j - 1] == 76)
			x -= 2;
		if (name[j - 1] == 77)
			x += 2;
		if (name[j - 1] == 84)
			x -= 2;
		if (name[j - 1] == 86)
			x += 2;
		if (name[j - 1] == 87)
			x += 2;
		if (name[j - 1] == 88)
			x -= 2;
		if (name[j - 1] == 89)
			x -= 2;
		if (name[j - 1] == 90)
			x += 2;
		if (name[j] == 99)
			y += 1;
		if (name[j - 1] == 101)
			x += 2;
		if (name[j - 1] == 102)
			x -= 2;
		if (name[j - 1] == 105)
			x -= 6;
		if (name[j - 1] == 106)
			x -= 2;
		if (name[j - 1] == 107)
			x -= 2;
		if (name[j] == 109)
			y += 1;
		if (name[j] == 110)
			y += 1;
		if (name[j] == 111)
			y += 1;
		if (name[j - 1] == 108)
			x -= 4;
		if (name[j - 1] == 109)
			x += 2;
		if (name[j - 1] == 110)
			x += 2;
		if (name[j - 1] == 112)
			x -= 2;
		if (name[j - 1] == 113)
			x -= 2;
		if (name[j] == 114)
			y += 1;
		if (name[j - 1] == 115)
			x -= 2;
		if (name[j - 1] == 116)
			x -= 2;
		if (name[j] == 117)
			y += 2;
		if (name[j] == 118)
			y += 2;
		if (name[j - 1] == 118)
			x -= 2;
		if (name[j] == 119)
			y += 2;
		if (name[j - 1] == 119)
			x += 2;
		if (name[j] == 120)
			y += 2;
		if (name[j - 1] == 120)
			x -= 2;
		if (name[j] == 121)
			y += 1;
		if (name[j] == 122)
			y += 1;
		alphabet(name[j], xx + x + j * 9, yy + y);
	}
}

//몬스터볼 출력
void print_monsterball(int xx, int yy) {
	int i, j;
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 15; j++) {
			gotoxy(i * 2 + xx, j + yy);
			if (monsterball[j][i] == 0) {
				ColorSet(BLACK, BLACK);
				printf("  "); //블랙
			}
			if (monsterball[j][i] == 12) {
				ColorSet(RED, RED);
				printf("  "); //밝은 레드
			}
			if (monsterball[j][i] == 15) {
				ColorSet(WHITE, WHITE);
				printf("  "); //화이트
			}
		}
	}
	ColorSet(WHITE, BLACK);
}

//포켓몬 선택하기
int select_monsterball_arrow() {
	int x = 34, y = 15, BREAK = 0, szChoice, num = 1, select, yy = 50;
	while (1) {
		reset_display();
		print_monsterball(20, 20);
		print_monsterball(90, 20);
		print_monsterball(160, 20);
		erase_name_uparrow(x, y);
		name_uparrow(x, y);
		yy = 50;
		remove_input();
		while (BREAK == 0) {
			if (kbhit()) {
				szChoice = getch();
				switch (szChoice) {
				case LEFT:
					if (x >= 35) {
						erase_name_uparrow(x, y);
						x -= 70;
						name_uparrow(x, y);
						num--;
					}
					break;
				case RIGHT:
					if (x < 174) {
						erase_name_uparrow(x, y);
						x += 70;
						name_uparrow(x, y);
						num++;
					}
					break;
				case ENTER:
					erase_name_uparrow(x, y);
					BREAK = 1;
					break;
				}
			}
		}
		remove_input();
		BREAK = 0;
		delete_display();
		switch (num) {
		case 1:
			Pokemon_Pyree(85, 15, 1, 0);
			select = 1;
			speech_bubble();
			break;
		case 2:
			Pokemon_twist(85, 15, 1, 0);
			select = 2;
			speech_bubble();
			break;
		case 3:
			Pokemon_Bulbasaur(85, 15, 1, 0);
			select = 3;
			speech_bubble();
			break;
		}

		//would you like
		alphabet('W', 18, 48);
		Sleep(50);
		alphabet('o', 29, 49);
		Sleep(50);
		alphabet('u', 38, 50);
		Sleep(50);
		alphabet('l', 47, 48);
		Sleep(50);
		alphabet('d', 52, 48);
		Sleep(50);

		alphabet('y', 65, 49);
		Sleep(50);
		alphabet('o', 74, 49);
		Sleep(50);
		alphabet('u', 83, 50);
		Sleep(50);

		alphabet('l', 96, 48);
		Sleep(50);
		alphabet('i', 101, 48);
		Sleep(50);
		alphabet('k', 104, 48);
		Sleep(50);
		alphabet('e', 111, 48);
		Sleep(50);

		//this pokenmon
		alphabet('t', 18, 54);
		Sleep(50);
		alphabet('h', 25, 54);
		Sleep(50);
		alphabet('i', 34, 54);
		Sleep(50);
		alphabet('s', 37, 54);
		Sleep(50);

		alphabet('P', 48, 54);
		Sleep(50);
		alphabet('O', 57, 54);
		Sleep(50);
		alphabet('K', 66, 54);
		Sleep(50);
		alphabet('E', 75, 54);
		Sleep(50);
		alphabet('M', 84, 54);
		Sleep(50);
		alphabet('O', 95, 54);
		Sleep(50);
		alphabet('N', 104, 54);
		Sleep(50);
		alphabet('?', 113, 54);
		Sleep(50);

		//YES
		alphabet('Y', 158, 48);
		alphabet('E', 165, 48);
		alphabet('S', 174, 48);

		//NO
		alphabet('N', 158, 54);
		alphabet('O', 167, 54);

		name_arrow(150, yy);
		remove_input();
		while (BREAK == 0) {
			if (kbhit()) {
				szChoice = getch();
				switch (szChoice) {
				case UP:
					if (yy > 50) {
						erase_name_arrow(150, yy);
						yy -= 6;
						name_arrow(150, yy);
					}
					break;
				case DOWN:
					if (yy < 56) {
						erase_name_arrow(150, yy);
						yy += 6;
						name_arrow(150, yy);
					}
					break;
				case ENTER:
					if (yy == 50) {
						delete_speech_bubble();
						delete_display();
						return select;
					}
					if (yy == 56) {
						erase_name_arrow(150, yy);
					}
					BREAK = 1;
					break;
				}
			}
		}
		BREAK = 0;
	}
}

//포켓몬 배틀
void battle(int POKEMON[]) {
	int x, y, BREAK = 0, szChoice, x1, y1, run, die = 75, your_POKEMON, success, i = 0, szChoice1, BREAK1 = 0, yy = 50;

	your_POKEMON = appear_Pokemon(POKEMON);

reload:
	remove_input;
	x = 30;
	y = 50;
	x1 = 0;
	y1 = 0;
	//BATTLE
	alphabet('B', 38, 48);
	Sleep(50);
	alphabet('A', 47, 48);
	Sleep(50);
	alphabet('T', 56, 48);
	Sleep(50);
	alphabet('T', 63, 48);
	Sleep(50);
	alphabet('L', 70, 48);
	Sleep(50);
	alphabet('E', 77, 48);
	Sleep(50);

	//POKEMON
	alphabet('P', 38, 54);
	Sleep(50);
	alphabet('O', 47, 54);
	Sleep(50);
	alphabet('K', 56, 54);
	Sleep(50);
	alphabet('E', 65, 54);
	Sleep(50);
	alphabet('M', 74, 54);
	Sleep(50);
	alphabet('O', 85, 54);
	Sleep(50);
	alphabet('N', 94, 54);
	Sleep(50);

	//catch
	alphabet('C', 130, 48);
	Sleep(50);
	alphabet('A', 139, 48);
	Sleep(50);
	alphabet('T', 148, 48);
	Sleep(50);
	alphabet('C', 155, 48);
	Sleep(50);
	alphabet('H', 164, 48);
	Sleep(50);

	//RUN
	alphabet('R', 130, 54);
	Sleep(50);
	alphabet('U', 139, 54);
	Sleep(50);
	alphabet('N', 148, 54);
	Sleep(50);

	name_arrow(x, y);
	remove_input();
	while (BREAK == 0) {
		if (kbhit()) {
			szChoice = getch();
			switch (szChoice) {
			case LEFT:
				if (x1 == 1) {
					erase_name_arrow(x, y);
					x -= 92;
					name_arrow(x, y);
					x1 = 0;
				}
				break;
			case RIGHT:
				if (x1 == 0) {
					erase_name_arrow(x, y);
					x += 92;
					name_arrow(x, y);
					x1 = 1;
				}
				break;
			case UP:
				if (y1 == 1) {
					erase_name_arrow(x, y);
					y -= 6;
					name_arrow(x, y);
					y1 = 0;
				}
				break;
			case DOWN:
				if (y1 == 0) {
					erase_name_arrow(x, y);
					y += 6;
					name_arrow(x, y);
					y1 = 1;
				}
				break;
			case ENTER:
				erase_name_arrow(x, y);
				delete_speech_bubble();
				if (x1 == 0 && y1 == 0) {
					die = battel_attack(POKEMON, your_POKEMON);
					if (die == 1)
						BREAK = 1;
					else
						goto reload;
				}
				else if (x1 == 0 && y1 == 1)
					goto reload;
				else if (x1 == 1 && y1 == 0) {
					success = battle_catch(your_POKEMON, die);
					if (success == 1) {

						//I caught a
						alphabet('I', 18, 48);
						Sleep(50);

						alphabet('c', 25, 49);
						Sleep(50);
						alphabet('a', 34, 48);
						Sleep(50);
						alphabet('u', 43, 50);
						Sleep(50);
						alphabet('g', 52, 48);
						Sleep(50);
						alphabet('h', 61, 48);
						Sleep(50);
						alphabet('t', 70, 48);
						Sleep(50);

						alphabet('a', 81, 48);
						Sleep(50);

						//Pokemon!
						alphabet('P', 18, 54);
						Sleep(50);
						alphabet('O', 27, 54);
						Sleep(50);
						alphabet('K', 36, 54);
						Sleep(50);
						alphabet('E', 45, 54);
						Sleep(50);
						alphabet('M', 54, 54);
						Sleep(50);
						alphabet('O', 65, 54);
						Sleep(50);
						alphabet('N', 74, 54);
						Sleep(50);
						alphabet('!', 84, 54);
						Sleep(50);

						if (POKEMON[your_POKEMON] != 1)
							POKEMON[your_POKEMON] = 10;
						twinkle_button();
						delete_speech_bubble();

						//Open the pokedex?
						alphabet('O', 18, 48);
						Sleep(50);
						alphabet('p', 27, 48);
						Sleep(50);
						alphabet('e', 34, 48);
						Sleep(50);
						alphabet('n', 45, 49);
						Sleep(50);

						alphabet('t', 60, 48);
						Sleep(50);
						alphabet('h', 67, 48);
						Sleep(50);
						alphabet('e', 76, 48);
						Sleep(50);

						alphabet('p', 18, 54);
						Sleep(50);
						alphabet('o', 25, 55);
						Sleep(50);
						alphabet('k', 34, 54);
						Sleep(50);
						alphabet('e', 41, 54);
						Sleep(50);
						alphabet('d', 52, 54);
						Sleep(50);
						alphabet('e', 61, 54);
						Sleep(50);
						alphabet('x', 72, 56);
						Sleep(50);
						alphabet('?', 82, 54);
						Sleep(50);

						//YES
						alphabet('Y', 158, 48);
						alphabet('E', 165, 48);
						alphabet('S', 174, 48);

						//NO
						alphabet('N', 158, 54);
						alphabet('O', 167, 54);

						name_arrow(150, yy);
						remove_input();
						while (BREAK1 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case UP:
									if (yy > 50) {
										erase_name_arrow(150, yy);
										yy -= 6;
										name_arrow(150, yy);
									}
									break;
								case DOWN:
									if (yy < 56) {
										erase_name_arrow(150, yy);
										yy += 6;
										name_arrow(150, yy);
									}
									break;
								case ENTER:
									if (yy == 50) {
										reset_display();
										pokedex(POKEMON);
									}
									BREAK1 = 1;
									break;
								}
							}
						}
						reset_hp = 1;
						BREAK = 1;
					}
					else {

						//FALE
						alphabet('F', 18, 48);
						Sleep(50);
						alphabet('A', 27, 48);
						Sleep(50);
						alphabet('I', 36, 48);
						Sleep(50);
						alphabet('L', 39, 48);
						Sleep(50);
						alphabet('!', 47, 48);
						Sleep(50);
						twinkle_button();
						delete_speech_bubble();
						goto reload;
					}
				}
				else if (x1 == 1 && y1 == 1) {
					run = battle_run();
					if (run == 1) {
						reset_hp = 1;
						BREAK = 1;
					}
					else
						goto reload;
				}
				break;
			}
		}
	}
	reset_display();
}

//랜덤으로 포켓몬 튀어나오기
int appear_Pokemon(int POKEMON[]) {
	srand((unsigned int)time(NULL));

	static int i = 0;
	i++;

	LV = rand() % 6 + 48;
	LV1 = rand() % 10 + 48;
	int random = rand() % 23;

	while (random == 21)
		random = rand() % 23;

	if (random == 1 || random == 2 || random == 3) {
		LV = rand() % 2 + 48;
		if (LV == 48)
			LV1 = rand() % 9 + 49;
		else
			LV1 = rand() % 6 + 48;
	}

	if (random == 4 || random == 5 || random == 6) {
		LV = rand() % 3 + 49;
		if (LV == 49)
			LV1 = rand() % 4 + 54;
		else if (LV == 50)
			LV1 = rand() % 10 + 48;
		else
			LV1 = rand() % 6 + 48;
	}

	if (random == 7 || random == 8 || random == 9) {
		LV = rand() % 3 + 51;
		if (LV == 51)
			LV1 = rand() % 4 + 54;
		else if (LV == 52)
			LV1 = rand() % 10 + 48;
		else
			LV1 = rand() % 6 + 48;
	}

	if (random == 10)
		LV = rand() % 3 + 48;

	if (random == 11)
		LV = rand() % 3 + 51;

	if (random == 12)
		LV = rand() % 3 + 48;

	if (random == 13)
		LV = rand() % 3 + 51;

	if (random == 14)
		LV = rand() % 3 + 48;

	if (random == 15)
		LV = rand() % 3 + 51;

	if (i <= 3) {
		random = rand() % 3 + 1;
		LV = rand() % 1 + 48;
		LV1 = rand() % 2 + 52;
	}
	else if (i <= 7) {
		random = rand() % 3 + 1;
		LV = rand() % 1 + 49;
		LV1 = rand() % 5 + 49;
	}

	while (LV == '0' && LV1 == '0') {
		LV = rand() % 6 + 48;
		LV1 = rand() % 9 + 48;
	}

	if (LV == '5')
		LV1 = 48;

	int mine = 0, my_lv, cnt = 0, your_POKEMONLV = (LV - 48) * 10 + (LV1 - 48);

	switch (random) {
	case 0:
		Pokemon_Nidorina(144, 3, 1, 0);
		alphabet('N', 13, 2);
		Sleep(50);
		alphabet('i', 22, 2);
		Sleep(50);
		alphabet('d', 25, 2);
		Sleep(50);
		alphabet('o', 34, 3);
		Sleep(50);
		alphabet('r', 43, 3);
		Sleep(50);
		alphabet('i', 52, 2);
		Sleep(50);
		alphabet('n', 55, 3);
		Sleep(50);
		alphabet('a', 66, 2);
		Sleep(50);
		break;
	case 1:
		Pokemon_Pyree(144, 3, 1, 0);
		alphabet('P', 13, 2);
		Sleep(50);
		alphabet('y', 22, 3);
		Sleep(50);
		alphabet('r', 31, 3);
		Sleep(50);
		alphabet('e', 40, 2);
		Sleep(50);
		alphabet('e', 51, 2);
		Sleep(50);
		break;
	case 2:
		Pokemon_twist(144, 3, 1, 0);
		alphabet('T', 13, 2);
		Sleep(50);
		alphabet('w', 20, 4);
		Sleep(50);
		alphabet('i', 31, 2);
		Sleep(50);
		alphabet('s', 34, 2);
		Sleep(50);
		alphabet('t', 41, 2);
		Sleep(50);
		break;
	case 3:
		Pokemon_Bulbasaur(144, 3, 1, 0);
		alphabet('B', 13, 2);
		Sleep(50);
		alphabet('u', 22, 4);
		Sleep(50);
		alphabet('l', 31, 2);
		Sleep(50);
		alphabet('b', 36, 2);
		Sleep(50);
		alphabet('a', 45, 2);
		Sleep(50);
		alphabet('s', 54, 2);
		Sleep(50);
		alphabet('a', 61, 2);
		Sleep(50);
		alphabet('u', 70, 4);
		Sleep(50);
		alphabet('r', 79, 3);
		Sleep(50);
		break;
	case 4:
		Pokemon_Charmeleon(144, 3, 1, 0);
		alphabet('R', 13, 2);
		Sleep(50);
		alphabet('i', 22, 2);
		Sleep(50);
		alphabet('z', 25, 3);
		Sleep(50);
		alphabet('a', 34, 2);
		Sleep(50);
		alphabet('r', 43, 3);
		Sleep(50);
		alphabet('d', 52, 2);
		Sleep(50);
		break;
	case 5:
		Pokemon_Wartortle(144, 3, 1, 0);
		alphabet('W', 13, 2);
		Sleep(50);
		alphabet('a', 24, 2);
		Sleep(50);
		alphabet('r', 33, 3);
		Sleep(50);
		alphabet('t', 42, 2);
		Sleep(50);
		alphabet('o', 49, 3);
		Sleep(50);
		alphabet('r', 58, 3);
		Sleep(50);
		alphabet('t', 67, 2);
		Sleep(50);
		alphabet('l', 74, 2);
		Sleep(50);
		alphabet('e', 79, 2);
		Sleep(50);
		break;
	case 6:
		Pokemon_Ivysaur(144, 3, 1, 0);
		alphabet('I', 13, 2);
		Sleep(50);
		alphabet('v', 16, 4);
		Sleep(50);
		alphabet('y', 23, 3);
		Sleep(50);
		alphabet('s', 32, 2);
		Sleep(50);
		alphabet('a', 39, 2);
		Sleep(50);
		alphabet('u', 48, 4);
		Sleep(50);
		alphabet('r', 57, 3);
		Sleep(50);
		break;
	case 7:
		Pokemon_Charizard(144, 3, 1, 0);
		alphabet('R', 13, 2);
		Sleep(50);
		alphabet('i', 22, 2);
		Sleep(50);
		alphabet('z', 25, 3);
		Sleep(50);
		alphabet('a', 34, 2);
		Sleep(50);
		alphabet('m', 43, 3);
		Sleep(50);
		alphabet('o', 54, 3);
		Sleep(50);
		alphabet('n', 63, 3);
		Sleep(50);
		alphabet('g', 74, 2);
		Sleep(50);
		break;
	case 8:
		Pokemon_Blastoise(144, 3, 1, 0);
		alphabet('B', 13, 2);
		Sleep(50);
		alphabet('l', 22, 2);
		Sleep(50);
		alphabet('a', 27, 2);
		Sleep(50);
		alphabet('s', 36, 2);
		Sleep(50);
		alphabet('t', 43, 2);
		Sleep(50);
		alphabet('o', 50, 3);
		Sleep(50);
		alphabet('i', 59, 2);
		Sleep(50);
		alphabet('s', 62, 2);
		Sleep(50);
		alphabet('e', 69, 2);
		Sleep(50);
		break;
	case 9:
		Pokemon_Venusaur(144, 3, 1, 0);
		alphabet('V', 13, 2);
		Sleep(50);
		alphabet('e', 24, 2);
		Sleep(50);
		alphabet('n', 35, 3);
		Sleep(50);
		alphabet('u', 46, 4);
		Sleep(50);
		alphabet('s', 55, 2);
		Sleep(50);
		alphabet('a', 62, 2);
		Sleep(50);
		alphabet('u', 71, 4);
		Sleep(50);
		alphabet('r', 80, 3);
		Sleep(50);
		break;
	case 10:
		Pokemon_Pidgey(144, 3, 1, 0);
		alphabet('P', 13, 2);
		Sleep(50);
		alphabet('i', 22, 2);
		Sleep(50);
		alphabet('d', 25, 2);
		Sleep(50);
		alphabet('g', 34, 2);
		Sleep(50);
		alphabet('e', 43, 2);
		Sleep(50);
		alphabet('y', 54, 3);
		Sleep(50);
		break;
	case 11:
		Pokemon_Pigeon(144, 3, 1, 0);
		alphabet('P', 13, 2);
		Sleep(50);
		alphabet('i', 22, 2);
		Sleep(50);
		alphabet('g', 25, 2);
		Sleep(50);
		alphabet('e', 34, 2);
		Sleep(50);
		alphabet('o', 45, 3);
		Sleep(50);
		alphabet('n', 54, 3);
		Sleep(50);
		break;
	case 12:
		Pokemon_Onix(144, 3, 1, 0);
		alphabet('O', 13, 2);
		Sleep(50);
		alphabet('n', 22, 3);
		Sleep(50);
		alphabet('i', 33, 2);
		Sleep(50);
		alphabet('x', 36, 4);
		Sleep(50);
		break;
	case 13:
		Pokemon_Steelix(144, 3, 1, 0);
		alphabet('S', 13, 2);
		Sleep(50);
		alphabet('t', 22, 2);
		Sleep(50);
		alphabet('e', 29, 2);
		Sleep(50);
		alphabet('e', 40, 2);
		Sleep(50);
		alphabet('l', 51, 2);
		Sleep(50);
		alphabet('i', 56, 2);
		Sleep(50);
		alphabet('x', 59, 4);
		Sleep(50);
		break;
	case 14:
		Pokemon_Machoke(144, 3, 1, 0);
		alphabet('M', 13, 2);
		Sleep(50);
		alphabet('a', 24, 2);
		Sleep(50);
		alphabet('c', 33, 3);
		Sleep(50);
		alphabet('h', 42, 2);
		Sleep(50);
		alphabet('o', 51, 3);
		Sleep(50);
		alphabet('k', 60, 2);
		Sleep(50);
		alphabet('e', 67, 2);
		Sleep(50);
		break;
	case 15:
		Pokemon_Machamp(144, 3, 1, 0);
		alphabet('M', 13, 2);
		Sleep(50);
		alphabet('a', 24, 2);
		Sleep(50);
		alphabet('c', 33, 3);
		Sleep(50);
		alphabet('h', 42, 2);
		Sleep(50);
		alphabet('a', 51, 2);
		Sleep(50);
		alphabet('m', 60, 3);
		Sleep(50);
		alphabet('p', 71, 2);
		Sleep(50);
		break;
	case 16:
		Pokemon_Lapras(144, 3, 1, 0);
		alphabet('L', 13, 2);
		Sleep(50);
		alphabet('a', 20, 2);
		Sleep(50);
		alphabet('p', 29, 2);
		Sleep(50);
		alphabet('r', 36, 3);
		Sleep(50);
		alphabet('a', 45, 2);
		Sleep(50);
		alphabet('s', 54, 2);
		Sleep(50);
		break;
	case 17:
		Pokemon_Phantom(144, 3, 1, 0);
		alphabet('P', 13, 2);
		Sleep(50);
		alphabet('h', 22, 2);
		Sleep(50);
		alphabet('a', 31, 2);
		Sleep(50);
		alphabet('n', 40, 3);
		Sleep(50);
		alphabet('t', 51, 2);
		Sleep(50);
		alphabet('o', 58, 3);
		Sleep(50);
		alphabet('m', 67, 3);
		Sleep(50);
		break;
	case 18:
		Pokemon_Arbok(144, 3, 1, 0);
		alphabet('A', 13, 2);
		Sleep(50);
		alphabet('r', 22, 3);
		Sleep(50);
		alphabet('b', 31, 2);
		Sleep(50);
		alphabet('o', 40, 3);
		Sleep(50);
		alphabet('k', 49, 2);
		Sleep(50);
		break;
	case 19:
		Pokemon_Lucario(144, 2, 1, 0);
		alphabet('L', 13, 2);
		Sleep(50);
		alphabet('u', 20, 4);
		Sleep(50);
		alphabet('c', 29, 3);
		Sleep(50);
		alphabet('a', 38, 2);
		Sleep(50);
		alphabet('r', 47, 3);
		Sleep(50);
		alphabet('i', 56, 2);
		Sleep(50);
		alphabet('o', 59, 3);
		Sleep(50);
		break;
	case 20:
		Pokemon_Weezing(144, 3, 1, 0);
		alphabet('W', 13, 2);
		Sleep(50);
		alphabet('e', 24, 2);
		Sleep(50);
		alphabet('e', 35, 2);
		Sleep(50);
		alphabet('z', 46, 3);
		Sleep(50);
		alphabet('i', 55, 2);
		Sleep(50);
		alphabet('n', 58, 3);
		Sleep(50);
		alphabet('g', 69, 2);
		Sleep(50);
		break;
	case 21:
		Pokemon_metamon(144, 6, 1, 0);
		alphabet('M', 13, 2);
		Sleep(50);
		alphabet('e', 24, 2);
		Sleep(50);
		alphabet('t', 35, 2);
		Sleep(50);
		alphabet('a', 42, 2);
		Sleep(50);
		alphabet('m', 51, 3);
		Sleep(50);
		alphabet('o', 62, 3);
		Sleep(50);
		alphabet('n', 71, 3);
		Sleep(50);
		break;
	case 22:
		Pokemon_Arceus(144, 3, 1, 0);
		LV = 53;
		LV1 = 48;
		alphabet('A', 13, 2);
		Sleep(50);
		alphabet('r', 22, 3);
		Sleep(50);
		alphabet('c', 31, 3);
		Sleep(50);
		alphabet('e', 40, 2);
		Sleep(50);
		alphabet('u', 51, 4);
		Sleep(50);
		alphabet('s', 60, 2);
		Sleep(50);
		break;
	}


	//LV ??
	alphabet('L', 92, 2);
	Sleep(50);
	alphabet('V', 96, 2);
	Sleep(50);
	if (LV != '0') {
		alphabet(LV, 108, 2);
		Sleep(50);
	}
	if (LV == '1')
		alphabet(LV1, 115, 2);
	else
		alphabet(LV1, 117, 2);
	Sleep(50);

	//HP
	alphabet('H', 13, 9);
	Sleep(50);
	alphabet('P', 23, 9);
	Sleep(50);
	HP();

	ColorSet(BLACK, BLACK);
	for (int i = 2; i < 15; i++) {
		gotoxy(9, i);
		printf("  ");
	}
	for (int i = 11; i < 132; i += 2) {
		gotoxy(i, 15);
		printf("  ");
	}
	gotoxy(126, 13);
	printf("  ");
	gotoxy(126, 14);
	printf("  ");
	gotoxy(128, 14);
	printf("  ");
	ColorSet(WHITE, WHITE);

	speech_bubble();
	//Wild Pokemon
	alphabet('W', 18, 48);
	Sleep(50);
	alphabet('i', 29, 48);
	Sleep(50);
	alphabet('l', 32, 48);
	Sleep(50);
	alphabet('d', 37, 48);
	Sleep(50);

	switch (random) {
	case 0:
		alphabet('N', 51, 48);
		Sleep(50);
		alphabet('i', 60, 48);
		Sleep(50);
		alphabet('d', 63, 48);
		Sleep(50);
		alphabet('o', 72, 49);
		Sleep(50);
		alphabet('r', 81, 49);
		Sleep(50);
		alphabet('i', 90, 48);
		Sleep(50);
		alphabet('n', 93, 49);
		Sleep(50);
		alphabet('a', 104, 48);
		Sleep(50);
		break;
	case 1:
		alphabet('P', 51, 48);
		Sleep(50);
		alphabet('y', 60, 49);
		Sleep(50);
		alphabet('r', 69, 49);
		Sleep(50);
		alphabet('e', 80, 48);
		Sleep(50);
		alphabet('e', 91, 48);
		Sleep(50);
		break;
	case 2:
		alphabet('T', 51, 48);
		Sleep(50);
		alphabet('w', 58, 50);
		Sleep(50);
		alphabet('i', 69, 48);
		Sleep(50);
		alphabet('s', 72, 48);
		Sleep(50);
		alphabet('t', 79, 48);
		Sleep(50);
		break;
	case 3:
		alphabet('B', 51, 48);
		Sleep(50);
		alphabet('u', 60, 50);
		Sleep(50);
		alphabet('l', 69, 48);
		Sleep(50);
		alphabet('b', 74, 48);
		Sleep(50);
		alphabet('a', 83, 48);
		Sleep(50);
		alphabet('s', 92, 48);
		Sleep(50);
		alphabet('a', 99, 48);
		Sleep(50);
		alphabet('u', 108, 50);
		Sleep(50);
		alphabet('r', 117, 49);
		Sleep(50);
		break;
	case 4:
		alphabet('R', 51, 48);
		Sleep(50);
		alphabet('i', 60, 48);
		Sleep(50);
		alphabet('z', 63, 49);
		Sleep(50);
		alphabet('a', 72, 48);
		Sleep(50);
		alphabet('r', 81, 49);
		Sleep(50);
		alphabet('d', 90, 48);
		Sleep(50);
		break;
	case 5:
		alphabet('W', 51, 48);
		Sleep(50);
		alphabet('a', 62, 48);
		Sleep(50);
		alphabet('r', 71, 49);
		Sleep(50);
		alphabet('t', 80, 48);
		Sleep(50);
		alphabet('o', 87, 49);
		Sleep(50);
		alphabet('r', 96, 49);
		Sleep(50);
		alphabet('t', 105, 48);
		Sleep(50);
		alphabet('l', 112, 48);
		Sleep(50);
		alphabet('e', 117, 48);
		Sleep(50);
		break;
	case 6:
		alphabet('I', 51, 48);
		Sleep(50);
		alphabet('v', 54, 50);
		Sleep(50);
		alphabet('y', 61, 49);
		Sleep(50);
		alphabet('s', 70, 48);
		Sleep(50);
		alphabet('a', 77, 48);
		Sleep(50);
		alphabet('u', 86, 50);
		Sleep(50);
		alphabet('r', 95, 49);
		Sleep(50);
		break;
	case 7:
		alphabet('R', 51, 48);
		Sleep(50);
		alphabet('i', 60, 48);
		Sleep(50);
		alphabet('z', 63, 49);
		Sleep(50);
		alphabet('a', 72, 48);
		Sleep(50);
		alphabet('m', 81, 49);
		Sleep(50);
		alphabet('o', 92, 49);
		Sleep(50);
		alphabet('n', 101, 49);
		Sleep(50);
		alphabet('g', 112, 48);
		Sleep(50);
		break;
	case 8:
		alphabet('B', 51, 48);
		Sleep(50);
		alphabet('l', 60, 48);
		Sleep(50);
		alphabet('a', 65, 48);
		Sleep(50);
		alphabet('s', 74, 48);
		Sleep(50);
		alphabet('t', 81, 48);
		Sleep(50);
		alphabet('o', 88, 49);
		Sleep(50);
		alphabet('i', 97, 48);
		Sleep(50);
		alphabet('s', 100, 48);
		Sleep(50);
		alphabet('e', 107, 48);
		Sleep(50);
		break;
	case 9:
		alphabet('V', 51, 48);
		Sleep(50);
		alphabet('e', 62, 48);
		Sleep(50);
		alphabet('n', 73, 49);
		Sleep(50);
		alphabet('u', 84, 50);
		Sleep(50);
		alphabet('s', 93, 48);
		Sleep(50);
		alphabet('a', 100, 48);
		Sleep(50);
		alphabet('u', 109, 50);
		Sleep(50);
		alphabet('r', 118, 49);
		Sleep(50);
		break;
	case 10:
		alphabet('P', 51, 48);
		Sleep(50);
		alphabet('i', 60, 48);
		Sleep(50);
		alphabet('d', 63, 48);
		Sleep(50);
		alphabet('g', 72, 48);
		Sleep(50);
		alphabet('e', 81, 48);
		Sleep(50);
		alphabet('y', 92, 49);
		Sleep(50);
		break;
	case 11:
		alphabet('P', 51, 48);
		Sleep(50);
		alphabet('i', 60, 48);
		Sleep(50);
		alphabet('g', 63, 48);
		Sleep(50);
		alphabet('e', 72, 48);
		Sleep(50);
		alphabet('o', 83, 49);
		Sleep(50);
		alphabet('n', 92, 49);
		Sleep(50);
		break;
	case 12:
		alphabet('O', 51, 48);
		Sleep(50);
		alphabet('n', 60, 49);
		Sleep(50);
		alphabet('i', 71, 48);
		Sleep(50);
		alphabet('x', 74, 50);
		Sleep(50);
		break;
	case 13:
		alphabet('S', 51, 48);
		Sleep(50);
		alphabet('t', 60, 48);
		Sleep(50);
		alphabet('e', 67, 48);
		Sleep(50);
		alphabet('e', 78, 48);
		Sleep(50);
		alphabet('l', 89, 48);
		Sleep(50);
		alphabet('i', 94, 48);
		Sleep(50);
		alphabet('x', 97, 50);
		Sleep(50);
		break;
	case 14:
		alphabet('M', 51, 48);
		Sleep(50);
		alphabet('a', 62, 48);
		Sleep(50);
		alphabet('c', 71, 49);
		Sleep(50);
		alphabet('h', 80, 48);
		Sleep(50);
		alphabet('o', 89, 49);
		Sleep(50);
		alphabet('k', 98, 48);
		Sleep(50);
		alphabet('e', 105, 48);
		Sleep(50);
		break;
	case 15:
		alphabet('M', 51, 48);
		Sleep(50);
		alphabet('a', 62, 48);
		Sleep(50);
		alphabet('c', 71, 49);
		Sleep(50);
		alphabet('h', 80, 48);
		Sleep(50);
		alphabet('a', 89, 48);
		Sleep(50);
		alphabet('m', 98, 49);
		Sleep(50);
		alphabet('p', 109, 48);
		Sleep(50);
		break;
	case 16:
		alphabet('L', 51, 48);
		Sleep(50);
		alphabet('a', 58, 48);
		Sleep(50);
		alphabet('p', 67, 48);
		Sleep(50);
		alphabet('r', 74, 49);
		Sleep(50);
		alphabet('a', 83, 48);
		Sleep(50);
		alphabet('s', 92, 48);
		Sleep(50);
		break;
	case 17:
		alphabet('P', 51, 48);
		Sleep(50);
		alphabet('h', 60, 48);
		Sleep(50);
		alphabet('a', 69, 48);
		Sleep(50);
		alphabet('n', 78, 49);
		Sleep(50);
		alphabet('t', 89, 48);
		Sleep(50);
		alphabet('o', 96, 49);
		Sleep(50);
		alphabet('m', 105, 49);
		Sleep(50);
		break;
	case 18:
		alphabet('A', 51, 48);
		Sleep(50);
		alphabet('r', 60, 49);
		Sleep(50);
		alphabet('b', 69, 48);
		Sleep(50);
		alphabet('o', 78, 49);
		Sleep(50);
		alphabet('k', 87, 48);
		Sleep(50);
		break;
	case 19:
		alphabet('L', 51, 48);
		Sleep(50);
		alphabet('u', 58, 50);
		Sleep(50);
		alphabet('c', 67, 49);
		Sleep(50);
		alphabet('a', 76, 48);
		Sleep(50);
		alphabet('r', 85, 49);
		Sleep(50);
		alphabet('i', 94, 48);
		Sleep(50);
		alphabet('o', 97, 49);
		Sleep(50);
		break;
	case 20:
		alphabet('W', 51, 48);
		Sleep(50);
		alphabet('e', 62, 48);
		Sleep(50);
		alphabet('e', 73, 48);
		Sleep(50);
		alphabet('z', 84, 49);
		Sleep(50);
		alphabet('i', 93, 48);
		Sleep(50);
		alphabet('n', 96, 49);
		Sleep(50);
		alphabet('g', 107, 48);
		Sleep(50);
		break;
	case 22:
		LV = 53;
		LV1 = 48;
		alphabet('A', 51, 48);
		Sleep(50);
		alphabet('r', 60, 49);
		Sleep(50);
		alphabet('c', 69, 49);
		Sleep(50);
		alphabet('e', 78, 48);
		Sleep(50);
		alphabet('u', 89, 50);
		Sleep(50);
		alphabet('s', 98, 48);
		Sleep(50);
		break;
	}


	//appeared!
	alphabet('a', 18, 54);
	Sleep(50);
	alphabet('p', 27, 54);
	Sleep(50);
	alphabet('p', 34, 54);
	Sleep(50);
	alphabet('e', 41, 54);
	Sleep(50);
	alphabet('a', 52, 54);
	Sleep(50);
	alphabet('r', 61, 55);
	Sleep(50);
	alphabet('e', 70, 54);
	Sleep(50);
	alphabet('d', 81, 54);
	Sleep(50);
	alphabet('!', 91, 54);
	Sleep(50);

	for (int i = 0; POKEMON[i] != 1; i++) {
		mine = i + 1;
	}

	switch (mine) {
	case 1:
		Pokemon_Pyree(46, 26, 2, 0);
		alphabet('P', 81, 25);
		Sleep(50);
		alphabet('y', 90, 26);
		Sleep(50);
		alphabet('r', 99, 26);
		Sleep(50);
		alphabet('e', 108, 25);
		Sleep(50);
		alphabet('e', 119, 25);
		Sleep(50);
		break;
	case 2:
		Pokemon_twist(46, 26, 2, 0);
		alphabet('T', 81, 25);
		Sleep(50);
		alphabet('w', 88, 27);
		Sleep(50);
		alphabet('i', 99, 25);
		Sleep(50);
		alphabet('s', 102, 25);
		Sleep(50);
		alphabet('t', 109, 25);
		Sleep(50);
		break;
	case 3:
		Pokemon_Bulbasaur(46, 26, 2, 0);
		alphabet('B', 81, 25);
		Sleep(50);
		alphabet('u', 90, 27);
		Sleep(50);
		alphabet('l', 99, 25);
		Sleep(50);
		alphabet('b', 104, 25);
		Sleep(50);
		alphabet('a', 113, 25);
		Sleep(50);
		alphabet('s', 122, 25);
		Sleep(50);
		alphabet('a', 129, 25);
		Sleep(50);
		alphabet('u', 138, 27);
		Sleep(50);
		alphabet('r', 147, 26);
		Sleep(50);
		break;
	case 4:
		Pokemon_Charmeleon(46, 25, 2, 0);
		alphabet('R', 81, 25);
		Sleep(50);
		alphabet('i', 90, 25);
		Sleep(50);
		alphabet('z', 93, 26);
		Sleep(50);
		alphabet('a', 102, 25);
		Sleep(50);
		alphabet('r', 111, 26);
		Sleep(50);
		alphabet('d', 120, 25);
		Sleep(50);
		break;
	case 5:
		Pokemon_Wartortle(46, 25, 2, 0);
		alphabet('W', 81, 25);
		Sleep(50);
		alphabet('a', 92, 25);
		Sleep(50);
		alphabet('r', 101, 26);
		Sleep(50);
		alphabet('t', 110, 25);
		Sleep(50);
		alphabet('o', 117, 26);
		Sleep(50);
		alphabet('r', 126, 26);
		Sleep(50);
		alphabet('t', 135, 25);
		Sleep(50);
		alphabet('l', 142, 25);
		Sleep(50);
		alphabet('e', 147, 25);
		Sleep(50);
		break;
	case 6:
		Pokemon_Ivysaur(46, 25, 2, 0);
		alphabet('I', 81, 25);
		Sleep(50);
		alphabet('v', 84, 27);
		Sleep(50);
		alphabet('y', 28, 26);
		Sleep(50);
		alphabet('s', 37, 25);
		Sleep(50);
		alphabet('a', 44, 25);
		Sleep(50);
		alphabet('u', 53, 27);
		Sleep(50);
		alphabet('r', 62, 26);
		Sleep(50);
		break;
	case 7:
		Pokemon_Charizard(46, 25, 2, 0);
		alphabet('R', 81, 25);
		Sleep(50);
		alphabet('i', 90, 25);
		Sleep(50);
		alphabet('z', 93, 26);
		Sleep(50);
		alphabet('a', 102, 25);
		Sleep(50);
		alphabet('m', 111, 26);
		Sleep(50);
		alphabet('o', 122, 26);
		Sleep(50);
		alphabet('n', 131, 26);
		Sleep(50);
		alphabet('g', 142, 25);
		Sleep(50);
		break;
	case 8:
		Pokemon_Blastoise(46, 25, 2, 0);
		alphabet('B', 81, 25);
		Sleep(50);
		alphabet('l', 90, 25);
		Sleep(50);
		alphabet('a', 95, 25);
		Sleep(50);
		alphabet('s', 104, 25);
		Sleep(50);
		alphabet('t', 111, 25);
		Sleep(50);
		alphabet('o', 118, 26);
		Sleep(50);
		alphabet('i', 127, 25);
		Sleep(50);
		alphabet('s', 130, 25);
		Sleep(50);
		alphabet('e', 137, 25);
		Sleep(50);
		break;
	case 9:
		Pokemon_Venusaur(46, 25, 2, 0);
		alphabet('V', 81, 25);
		Sleep(50);
		alphabet('e', 92, 25);
		Sleep(50);
		alphabet('n', 103, 26);
		Sleep(50);
		alphabet('u', 114, 27);
		Sleep(50);
		alphabet('s', 123, 25);
		Sleep(50);
		alphabet('a', 130, 25);
		Sleep(50);
		alphabet('u', 139, 27);
		Sleep(50);
		alphabet('r', 148, 26);
		Sleep(50);
		break;
	}




	//LV ??
	alphabet('L', 160, 25);
	Sleep(50);
	alphabet('V', 164, 25);
	Sleep(50);
	for (int i = 0; POKEMON[i] != 1; i++)
		cnt++;
	if (POKEMON_LV[cnt] < 10)
		alphabet(POKEMON_LV[cnt] + 48, 187, 25);
	else {
		if (POKEMON_LV[cnt] / 10 == 1) {
			alphabet(POKEMON_LV[cnt] / 10 + 48, 176, 25);
			my_lv = POKEMON_LV[cnt] % 10;
			alphabet(my_lv + 48, 183, 25);
		}
		else {
			alphabet(POKEMON_LV[cnt] / 10 + 48, 176, 25);
			my_lv = POKEMON_LV[cnt] % 10;
			alphabet(my_lv + 48, 185, 25);
		}
	}

	//HP
	alphabet('H', 81, 32);
	Sleep(50);
	alphabet('P', 91, 32);
	Sleep(50);
	HP1();

	ColorSet(BLACK, BLACK);
	for (int i = 25; i < 38; i++) {
		gotoxy(200, i);
		printf("  ");
	}
	for (int i = 199; i > 72; i--) {
		gotoxy(i, 38);
		printf(" ");
	}
	gotoxy(75, 37);
	printf("  ");
	gotoxy(77, 36);
	printf("  ");
	gotoxy(77, 37);
	printf("  ");
	ColorSet(WHITE, WHITE);

	twinkle_button();
	delete_speech_bubble();

	return random;
}

//상대 포켓몬 hp
void HP() {
	ColorSet(BLACK, BLACK);

	for (int i = 42; i < 118; i += 2) {
		gotoxy(i, 9);
		printf("  ");
		gotoxy(i, 13);
		printf("  ");
	}
	gotoxy(38, 11);
	printf("  ");
	gotoxy(120, 11);
	printf("  ");
	gotoxy(40, 10);
	printf("  ");
	gotoxy(118, 10);
	printf("  ");
	gotoxy(40, 12);
	printf("  ");
	gotoxy(118, 12);
	printf("  ");

	ColorSet(RED, RED);
	gotoxy(40, 11);
	printf("  ");
	for (int i = 42; i < 118; i += 2) {
		for (int j = 10; j < 13; j++) {
			gotoxy(i, j);
			printf("  ");
		}
		Sleep(30);
	}
	gotoxy(118, 11);
	printf("  ");

	ColorSet(WHITE, WHITE);
}

//자기 포켓몬 hp
void HP1() {
	ColorSet(BLACK, BLACK);

	for (int i = 110; i < 185; i += 2) {
		gotoxy(i, 32);
		printf("  ");
		gotoxy(i, 36);
		printf("  ");
	}
	gotoxy(106, 34);
	printf("  ");
	gotoxy(188, 34);
	printf("  ");
	gotoxy(186, 33);
	printf("  ");
	gotoxy(108, 33);
	printf("  ");
	gotoxy(186, 35);
	printf("  ");
	gotoxy(108, 35);
	printf("  ");

	ColorSet(RED, RED);
	gotoxy(108, 34);
	printf("  ");
	for (int i = 110; i < 186; i += 2) {
		for (int j = 33; j < 36; j++) {
			gotoxy(i, j);
			printf("  ");
		}
		Sleep(30);
	}
	gotoxy(186, 34);
	printf("  ");

	ColorSet(WHITE, WHITE);
}

//공격
int battel_attack(int POKEMON[], int your_POKEMON) {

	srand((unsigned int)time(NULL));

	int mine = 0, skillx = 0, skilly = 0, BREAK = 0, BREAK1 = 0, BREAK2 = 0, szChoice, szChoice1, x = 1, y = 1, min = 2, damage_void = 1, skill_num = 0, your_POKEMONLV = (LV - 48) * 10 + (LV1 - 48), cnt = 1, speed = 0, turn = 0, yy = 50, count = 0;
	float damage = 1, attack = 40, defense = 0, down_damage = 0, my_level = 0, critical = 1, damage1 = 1, attack1 = 40, defense1 = 0;
	static float hp = 75, hp1 = 75;
	static int skill[20] = { 1,2,0,0 }, POKEMON_EXP[22] = { 0 };
	int random, add_EXP = rand() % 100 + 100;
	float random_damage = (rand() % 38 + 217) * 100 / 255;



	if (reset_hp == 1) {
		hp = 75;
		hp1 = 75;
		reset_hp = 0;
	}

	for (int i = 1; i < your_POKEMONLV; i++) {
		attack1 += 20;
		defense += 20;
		if (your_POKEMONLV > 10)
			defense += 5;
		if (your_POKEMONLV > 20)
			defense += 5;
		if (your_POKEMONLV > 30)
			defense += 10;
		if (your_POKEMONLV > 40)
			defense += 10;
	}


	for (int i = 0; POKEMON[i] != 1; i++) {
		mine = i + 1;
	}

	for (int i = 1; i < POKEMON_LV[mine]; i++) {
		attack += 20;
		defense1 += 20;
		if (your_POKEMONLV > 10)
			defense1 += 5;
		if (your_POKEMONLV > 20)
			defense1 += 5;
		if (your_POKEMONLV > 30)
			defense1 += 10;
		if (your_POKEMONLV > 40)
			defense1 += 10;
	}

	if (your_POKEMONLV < POKEMON_LV[mine])
		defense += 8 * (POKEMON_LV[mine] - your_POKEMONLV);
	else
		defense1 += 8 * (your_POKEMONLV - POKEMON_LV[mine]);

	if (your_POKEMONLV > POKEMON_LV[mine])
		speed = 1;
	else
		speed = 0;

	//scrach
	if (skill[0] != 0) {
		if (skill[0] == 1) {
			damage = 40;
			color = 2;
		}
		if (skill[0] == 2 || skill[0] == 4)
			skillx = 92;
		if (skill[0] == 3 || skill[0] == 4)
			skilly = 6;
		alphabet('s', 18 + skillx, 48 + skilly);
		alphabet('c', 25 + skillx, 49 + skilly);
		alphabet('r', 34 + skillx, 49 + skilly);
		alphabet('a', 43 + skillx, 48 + skilly);
		alphabet('c', 52 + skillx, 49 + skilly);
		alphabet('h', 61 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//growl
	if (skill[1] != 0) {
		if (skill[1] == 1)
			color = 2;
		if (skill[1] == 2 || skill[1] == 4)
			skillx = 92;
		if (skill[1] == 3 || skill[1] == 4)
			skilly = 6;
		alphabet('g', 18 + skillx, 48 + skilly);
		alphabet('r', 27 + skillx, 49 + skilly);
		alphabet('o', 36 + skillx, 49 + skilly);
		alphabet('w', 45 + skillx, 50 + skilly);
		alphabet('l', 56 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//ember
	if (skill[2] != 0) {
		if (skill[2] == 1)
			color = 2;
		if (skill[2] == 2 || skill[2] == 4)
			skillx = 92;
		if (skill[2] == 3 || skill[2] == 4)
			skilly = 6;
		alphabet('e', 18 + skillx, 48 + skilly);
		alphabet('m', 29 + skillx, 49 + skilly);
		alphabet('b', 40 + skillx, 48 + skilly);
		alphabet('e', 49 + skillx, 48 + skilly);
		alphabet('r', 60 + skillx, 49 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//fire fang
	if (skill[3] != 0) {
		if (skill[3] == 1)
			color = 2;
		if (skill[3] == 2 || skill[3] == 4)
			skillx = 92;
		if (skill[3] == 3 || skill[3] == 4)
			skilly = 6;
		alphabet('f', 18 + skillx, 48 + skilly);
		alphabet('i', 25 + skillx, 48 + skilly);
		alphabet('r', 28 + skillx, 49 + skilly);
		alphabet('e', 37 + skillx, 48 + skilly);

		alphabet('f', 52 + skillx, 48 + skilly);
		alphabet('a', 59 + skillx, 48 + skilly);
		alphabet('n', 68 + skillx, 49 + skilly);
		alphabet('g', 79 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//slash
	if (skill[4] != 0) {
		if (skill[4] == 1) {
			damage = 70;
			color = 2;
		}
		if (skill[4] == 2 || skill[4] == 4)
			skillx = 92;
		if (skill[4] == 3 || skill[4] == 4)
			skilly = 6;
		alphabet('s', 18 + skillx, 48 + skilly);
		alphabet('l', 25 + skillx, 48 + skilly);
		alphabet('a', 30 + skillx, 48 + skilly);
		alphabet('s', 39 + skillx, 48 + skilly);
		alphabet('h', 46 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//fire spin
	if (skill[5] != 0) {
		if (skill[5] == 1) {
			damage = 80;
			color = 2;
		}
		if (skill[5] == 2 || skill[5] == 4)
			skillx = 92;
		if (skill[5] == 3 || skill[5] == 4)
			skilly = 6;
		alphabet('f', 18 + skillx, 48 + skilly);
		alphabet('i', 25 + skillx, 48 + skilly);
		alphabet('r', 28 + skillx, 49 + skilly);
		alphabet('e', 37 + skillx, 48 + skilly);

		alphabet('s', 48 + skillx, 48 + skilly);
		alphabet('p', 55 + skillx, 48 + skilly);
		alphabet('i', 62 + skillx, 48 + skilly);
		alphabet('n', 65 + skillx, 49 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//inferno
	if (skill[6] != 0) {
		if (skill[6] == 1) {
			damage = 100;
			color = 2;
		}
		if (skill[6] == 2 || skill[6] == 4)
			skillx = 92;
		if (skill[6] == 3 || skill[6] == 4)
			skilly = 6;
		alphabet('i', 18 + skillx, 48 + skilly);
		alphabet('n', 21 + skillx, 49 + skilly);
		alphabet('f', 32 + skillx, 48 + skilly);
		alphabet('e', 39 + skillx, 48 + skilly);
		alphabet('r', 50 + skillx, 49 + skilly);
		alphabet('n', 59 + skillx, 49 + skilly);
		alphabet('o', 70 + skillx, 49 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//outrage
	if (skill[7] != 0) {
		if (skill[7] == 1) {
			damage = 120;
			color = 2;
		}
		if (skill[7] == 2 || skill[7] == 4)
			skillx = 92;
		if (skill[7] == 3 || skill[7] == 4)
			skilly = 6;
		alphabet('o', 18 + skillx, 49 + skilly);
		alphabet('u', 27 + skillx, 50 + skilly);
		alphabet('t', 36 + skillx, 48 + skilly);
		alphabet('r', 43 + skillx, 49 + skilly);
		alphabet('a', 52 + skillx, 48 + skilly);
		alphabet('g', 61 + skillx, 48 + skilly);
		alphabet('e', 70 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//tackle
	if (skill[8] != 0) {
		if (skill[8] == 1) {
			damage = 45;
			color = 2;
		}
		if (skill[8] == 2 || skill[8] == 4)
			skillx = 92;
		if (skill[8] == 3 || skill[8] == 4)
			skilly = 6;
		alphabet('t', 18 + skillx, 48 + skilly);
		alphabet('a', 25 + skillx, 48 + skilly);
		alphabet('c', 34 + skillx, 49 + skilly);
		alphabet('k', 43 + skillx, 48 + skilly);
		alphabet('l', 50 + skillx, 48 + skilly);
		alphabet('e', 55 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//water gun
	if (skill[9] != 0) {
		if (skill[9] == 1) {
			damage = 40;
			color = 2;
		}
		if (skill[9] == 2 || skill[9] == 4)
			skillx = 92;
		if (skill[9] == 3 || skill[9] == 4)
			skilly = 6;
		alphabet('w', 18 + skillx, 50 + skilly);
		alphabet('a', 29 + skillx, 48 + skilly);
		alphabet('t', 38 + skillx, 48 + skilly);
		alphabet('e', 45 + skillx, 48 + skilly);
		alphabet('r', 56 + skillx, 49 + skilly);

		alphabet('g', 69 + skillx, 48 + skilly);
		alphabet('u', 78 + skillx, 50 + skilly);
		alphabet('n', 87 + skillx, 49 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//scald
	if (skill[10] != 0) {
		if (skill[10] == 1) {
			damage = 80;
			color = 2;
		}
		if (skill[10] == 2 || skill[10] == 4)
			skillx = 92;
		if (skill[10] == 3 || skill[10] == 4)
			skilly = 6;
		alphabet('s', 18 + skillx, 48 + skilly);
		alphabet('c', 25 + skillx, 49 + skilly);
		alphabet('a', 34 + skillx, 48 + skilly);
		alphabet('l', 43 + skillx, 48 + skilly);
		alphabet('d', 48 + skillx, 48 + skilly);
		color = 1;
	}

	//aqua tail
	if (skill[11] != 0) {
		if (skill[11] == 1) {
			damage = 90;
			color = 2;
		}
		if (skill[11] == 2 || skill[11] == 4)
			skillx = 92;
		if (skill[11] == 3 || skill[11] == 4)
			skilly = 6;
		alphabet('a', 18 + skillx, 48 + skilly);
		alphabet('q', 27 + skillx, 48 + skilly);
		alphabet('u', 34 + skillx, 50 + skilly);
		alphabet('a', 43 + skillx, 48 + skilly);

		alphabet('t', 56 + skillx, 48 + skilly);
		alphabet('a', 63 + skillx, 48 + skilly);
		alphabet('i', 72 + skillx, 48 + skilly);
		alphabet('l', 75 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//surf
	if (skill[12] != 0) {
		if (skill[12] == 1) {
			damage = 100;
			color = 2;
		}
		if (skill[12] == 2 || skill[12] == 4)
			skillx = 92;
		if (skill[12] == 3 || skill[12] == 4)
			skilly = 6;
		alphabet('s', 18 + skillx, 48 + skilly);
		alphabet('u', 25 + skillx, 50 + skilly);
		alphabet('r', 34 + skillx, 49 + skilly);
		alphabet('f', 43 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//hydro pump
	if (skill[13] != 0) {
		if (skill[13] == 1) {
			damage = 120;
			color = 2;
		}
		if (skill[13] == 2 || skill[13] == 4)
			skillx = 92;
		if (skill[13] == 3 || skill[13] == 4)
			skilly = 6;
		alphabet('h', 18 + skillx, 48 + skilly);
		alphabet('y', 27 + skillx, 49 + skilly);
		alphabet('d', 36 + skillx, 48 + skilly);
		alphabet('r', 45 + skillx, 49 + skilly);
		alphabet('o', 54 + skillx, 49 + skilly);

		alphabet('p', 67 + skillx, 48 + skilly);
		alphabet('u', 74 + skillx, 50 + skilly);
		alphabet('m', 83 + skillx, 49 + skilly);
		alphabet('p', 94 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//vine whip
	if (skill[14] != 0) {
		if (skill[14] == 1) {
			damage = 40;
			color = 2;
		}
		if (skill[14] == 2 || skill[14] == 4)
			skillx = 92;
		if (skill[14] == 3 || skill[14] == 4)
			skilly = 6;
		alphabet('v', 18 + skillx, 50 + skilly);
		alphabet('i', 25 + skillx, 48 + skilly);
		alphabet('n', 28 + skillx, 49 + skilly);
		alphabet('e', 39 + skillx, 48 + skilly);

		alphabet('w', 54 + skillx, 50 + skilly);
		alphabet('h', 65 + skillx, 48 + skilly);
		alphabet('i', 74 + skillx, 48 + skilly);
		alphabet('p', 87 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//razor leaf
	if (skill[15] != 0) {
		if (skill[15] == 1) {
			damage = 60;
			color = 2;
		}
		if (skill[15] == 2 || skill[15] == 4)
			skillx = 92;
		if (skill[15] == 3 || skill[15] == 4)
			skilly = 6;
		alphabet('r', 18 + skillx, 49 + skilly);
		alphabet('a', 27 + skillx, 48 + skilly);
		alphabet('z', 36 + skillx, 49 + skilly);
		alphabet('o', 45 + skillx, 49 + skilly);
		alphabet('r', 54 + skillx, 49 + skilly);

		alphabet('l', 67 + skillx, 48 + skilly);
		alphabet('e', 72 + skillx, 48 + skilly);
		alphabet('a', 83 + skillx, 48 + skilly);
		alphabet('f', 92 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//seed bomb
	if (skill[16] != 0) {
		if (skill[16] == 1) {
			damage = 80;
			color = 2;
		}
		if (skill[16] == 2 || skill[16] == 4)
			skillx = 92;
		if (skill[16] == 3 || skill[16] == 4)
			skilly = 6;
		alphabet('s', 18 + skillx, 48 + skilly);
		alphabet('e', 25 + skillx, 48 + skilly);
		alphabet('e', 36 + skillx, 48 + skilly);
		alphabet('d', 47 + skillx, 48 + skilly);

		alphabet('b', 60 + skillx, 48 + skilly);
		alphabet('o', 69 + skillx, 49 + skilly);
		alphabet('m', 78 + skillx, 49 + skilly);
		alphabet('b', 89 + skillx, 48 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	//leaf blade
	if (skill[17] != 0) {
		if (skill[17] == 1) {
			damage = 100;
			color = 2;
		}
		if (skill[17] == 2 || skill[17] == 4)
			skillx = 92;
		if (skill[17] == 3 || skill[17] == 4)
			skilly = 6;
		alphabet('l', 18 + skillx, 48 + skilly);
		alphabet('e', 23 + skillx, 48 + skilly);
		alphabet('a', 34 + skillx, 48 + skilly);
		alphabet('f', 43 + skillx, 48 + skilly);

		alphabet('b', 54 + skillx, 48 + skilly);
		alphabet('l', 63 + skillx, 48 + skilly);
		alphabet('a', 68 + skillx, 48 + skilly);
		alphabet('d', 77 + skillx, 48 + skilly);
		alphabet('e', 86 + skillx, 48 + skilly);
		color = 1;
	}

	//solar beam
	if (skill[18] != 0) {
		if (skill[18] == 1) {
			damage = 120;
			color = 2;
		}
		if (skill[18] == 2 || skill[18] == 4)
			skillx = 92;
		if (skill[18] == 3 || skill[18] == 4)
			skilly = 6;
		alphabet('s', 18 + skillx, 48 + skilly);
		alphabet('o', 25 + skillx, 49 + skilly);
		alphabet('l', 34 + skillx, 48 + skilly);
		alphabet('a', 39 + skillx, 48 + skilly);
		alphabet('r', 48 + skillx, 49 + skilly);

		alphabet('b', 61 + skillx, 48 + skilly);
		alphabet('e', 70 + skillx, 48 + skilly);
		alphabet('a', 81 + skillx, 48 + skilly);
		alphabet('m', 90 + skillx, 49 + skilly);
		color = 1;
	}

	skillx = 0;
	skilly = 0;

	while (BREAK == 0) {
		while (BREAK1 == 0) {
			if (kbhit()) {
				szChoice = getch();
				BREAK1 = 1;
				switch (szChoice) {
				case LEFT:
					x = 1;
					break;
				case RIGHT:
					for (int i = 0; i < 20; i++) {
						if (skill[i] == 3 && x == 1)
							x = 2;
						if (skill[i] == 1 && x == 1)
							x = 2;
					}
					break;
				case UP:
					y = 1;
					break;
				case DOWN:
					for (int i = 0; i < 20; i++) {
						if (skill[i] == 3 && x == 1)
							y = 2;
						if (skill[i] == 4 && x == 2)
							y = 2;
					}
					break;
				case ENTER:
					BREAK = 1;
					break;
				}
			}
		}
		color = 1;
		BREAK1 = 0;

		skillx = 0;
		skilly = 0;

		if (BREAK == 0) {
			if (skill[0] != 0) {
				if (skill[0] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 0;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[0] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 0;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[0] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 0;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[0] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 0;
					damage = 40;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[0] == 2 || skill[0] == 4)
					skillx = 92;
				if (skill[0] == 3 || skill[0] == 4)
					skilly = 6;
				alphabet('s', 18 + skillx, 48 + skilly);
				alphabet('c', 25 + skillx, 49 + skilly);
				alphabet('r', 34 + skillx, 49 + skilly);
				alphabet('a', 43 + skillx, 48 + skilly);
				alphabet('c', 52 + skillx, 49 + skilly);
				alphabet('h', 61 + skillx, 48 + skilly);
				color = 1;
			}

			skillx = 0;
			skilly = 0;

			if (skill[1] != 0) {
				if (skill[1] == 1 && x == 1 && y == 1) {
					color = 2;
					down_damage = 4;
					skill_num = 1;
					damage_void = 0;
				}
				else if (skill[1] == 2 && x == 2 && y == 1) {
					color = 2;
					down_damage = 4;
					skill_num = 1;
					damage_void = 0;
				}
				else if (skill[1] == 3 && x == 1 && y == 2) {
					color = 2;
					down_damage = 4;
					skill_num = 1;
					damage_void = 0;
				}
				else if (skill[1] == 4 && x == 2 && y == 2) {
					color = 2;
					down_damage = 4;
					skill_num = 1;
					damage_void = 0;
				}
				else
					color = 1;
				if (skill[1] == 2 || skill[1] == 4)
					skillx = 92;
				if (skill[1] == 3 || skill[1] == 4)
					skilly = 6;
				alphabet('g', 18 + skillx, 48 + skilly);
				alphabet('r', 27 + skillx, 49 + skilly);
				alphabet('o', 36 + skillx, 49 + skilly);
				alphabet('w', 45 + skillx, 50 + skilly);
				alphabet('l', 56 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;


			if (skill[2] != 0) {
				if (skill[2] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 2;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[2] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 2;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[2] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 2;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[2] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 2;
					damage = 40;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[2] == 2 || skill[2] == 4)
					skillx = 92;
				if (skill[2] == 3 || skill[2] == 4)
					skilly = 6;
				alphabet('e', 18 + skillx, 48 + skilly);
				alphabet('m', 29 + skillx, 49 + skilly);
				alphabet('b', 40 + skillx, 48 + skilly);
				alphabet('e', 49 + skillx, 48 + skilly);
				alphabet('r', 60 + skillx, 49 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[3] != 0) {
				if (skill[3] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 3;
					damage = 60;
					damage_void = 1;
				}
				else if (skill[3] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 3;
					damage = 60;
					damage_void = 1;
				}
				else if (skill[3] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 3;
					damage = 60;
					damage_void = 1;
				}
				else if (skill[3] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 3;
					damage = 60;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[3] == 2 || skill[3] == 4)
					skillx = 92;
				if (skill[3] == 3 || skill[3] == 4)
					skilly = 6;
				alphabet('f', 18 + skillx, 48 + skilly);
				alphabet('i', 25 + skillx, 48 + skilly);
				alphabet('r', 28 + skillx, 49 + skilly);
				alphabet('e', 37 + skillx, 48 + skilly);

				alphabet('f', 52 + skillx, 48 + skilly);
				alphabet('a', 59 + skillx, 48 + skilly);
				alphabet('n', 68 + skillx, 49 + skilly);
				alphabet('g', 79 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[4] != 0) {
				if (skill[4] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 4;
					damage = 70;
					damage_void = 1;
				}
				else if (skill[4] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 4;
					damage = 70;
					damage_void = 1;
				}
				else if (skill[4] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 4;
					damage = 70;
					damage_void = 1;
				}
				else if (skill[4] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 4;
					damage = 70;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[4] == 2 || skill[4] == 4)
					skillx = 92;
				if (skill[4] == 3 || skill[4] == 4)
					skilly = 6;
				alphabet('s', 18 + skillx, 48 + skilly);
				alphabet('l', 25 + skillx, 48 + skilly);
				alphabet('a', 30 + skillx, 48 + skilly);
				alphabet('s', 39 + skillx, 48 + skilly);
				alphabet('h', 46 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[5] != 0) {
				if (skill[5] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 5;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[5] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 5;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[5] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 5;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[5] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 5;
					damage = 80;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[5] == 2 || skill[5] == 4)
					skillx = 92;
				if (skill[5] == 3 || skill[5] == 4)
					skilly = 6;
				alphabet('f', 18 + skillx, 48 + skilly);
				alphabet('i', 25 + skillx, 48 + skilly);
				alphabet('r', 28 + skillx, 49 + skilly);
				alphabet('e', 37 + skillx, 48 + skilly);

				alphabet('s', 48 + skillx, 48 + skilly);
				alphabet('p', 55 + skillx, 48 + skilly);
				alphabet('i', 62 + skillx, 48 + skilly);
				alphabet('n', 65 + skillx, 49 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[6] != 0) {
				if (skill[6] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 6;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[6] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 6;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[6] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 6;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[6] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 6;
					damage = 100;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[6] == 2 || skill[6] == 4)
					skillx = 92;
				if (skill[6] == 3 || skill[6] == 4)
					skilly = 6;
				alphabet('i', 18 + skillx, 48 + skilly);
				alphabet('n', 21 + skillx, 49 + skilly);
				alphabet('f', 32 + skillx, 48 + skilly);
				alphabet('e', 39 + skillx, 48 + skilly);
				alphabet('r', 50 + skillx, 49 + skilly);
				alphabet('n', 59 + skillx, 49 + skilly);
				alphabet('o', 70 + skillx, 49 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[7] != 0) {
				if (skill[7] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 7;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[7] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 7;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[7] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 7;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[7] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 7;
					damage = 120;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[7] == 2 || skill[7] == 4)
					skillx = 92;
				if (skill[7] == 3 || skill[7] == 4)
					skilly = 6;
				alphabet('o', 18 + skillx, 49 + skilly);
				alphabet('u', 27 + skillx, 50 + skilly);
				alphabet('t', 36 + skillx, 48 + skilly);
				alphabet('r', 43 + skillx, 49 + skilly);
				alphabet('a', 52 + skillx, 48 + skilly);
				alphabet('g', 61 + skillx, 48 + skilly);
				alphabet('e', 70 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[8] != 0) {
				if (skill[8] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 8;
					damage = 45;
					damage_void = 1;
				}
				else if (skill[8] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 8;
					damage = 45;
					damage_void = 1;
				}
				else if (skill[8] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 8;
					damage = 45;
					damage_void = 1;
				}
				else if (skill[8] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 8;
					damage = 45;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[8] == 2 || skill[8] == 4)
					skillx = 92;
				if (skill[8] == 3 || skill[8] == 4)
					skilly = 6;
				alphabet('t', 18 + skillx, 48 + skilly);
				alphabet('a', 25 + skillx, 48 + skilly);
				alphabet('c', 34 + skillx, 49 + skilly);
				alphabet('k', 43 + skillx, 48 + skilly);
				alphabet('l', 50 + skillx, 48 + skilly);
				alphabet('e', 55 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[9] != 0) {
				if (skill[9] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 9;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[9] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 9;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[9] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 9;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[9] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 9;
					damage = 40;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[9] == 2 || skill[9] == 4)
					skillx = 92;
				if (skill[9] == 3 || skill[9] == 4)
					skilly = 6;
				alphabet('w', 18 + skillx, 50 + skilly);
				alphabet('a', 29 + skillx, 48 + skilly);
				alphabet('t', 38 + skillx, 48 + skilly);
				alphabet('e', 45 + skillx, 48 + skilly);
				alphabet('r', 56 + skillx, 49 + skilly);

				alphabet('g', 69 + skillx, 48 + skilly);
				alphabet('u', 78 + skillx, 50 + skilly);
				alphabet('n', 87 + skillx, 49 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[10] != 0) {
				if (skill[10] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 10;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[10] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 10;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[10] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 10;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[10] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 10;
					damage = 80;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[10] == 2 || skill[10] == 4)
					skillx = 92;
				if (skill[10] == 3 || skill[10] == 4)
					skilly = 6;
				alphabet('s', 18 + skillx, 48 + skilly);
				alphabet('c', 25 + skillx, 49 + skilly);
				alphabet('a', 34 + skillx, 48 + skilly);
				alphabet('l', 43 + skillx, 48 + skilly);
				alphabet('d', 48 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[11] != 0) {
				if (skill[11] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 11;
					damage = 90;
					damage_void = 1;
				}
				else if (skill[11] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 11;
					damage = 90;
					damage_void = 1;
				}
				else if (skill[11] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 11;
					damage = 90;
					damage_void = 1;
				}
				else if (skill[11] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 11;
					damage = 90;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[11] == 2 || skill[11] == 4)
					skillx = 92;
				if (skill[11] == 3 || skill[11] == 4)
					skilly = 6;
				alphabet('a', 18 + skillx, 48 + skilly);
				alphabet('q', 27 + skillx, 48 + skilly);
				alphabet('u', 34 + skillx, 50 + skilly);
				alphabet('a', 43 + skillx, 48 + skilly);

				alphabet('t', 56 + skillx, 48 + skilly);
				alphabet('a', 63 + skillx, 48 + skilly);
				alphabet('i', 72 + skillx, 48 + skilly);
				alphabet('l', 75 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[12] != 0) {
				if (skill[12] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 12;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[12] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 12;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[12] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 12;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[12] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 12;
					damage = 100;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[12] == 2 || skill[12] == 4)
					skillx = 92;
				if (skill[12] == 3 || skill[12] == 4)
					skilly = 6;
				alphabet('s', 18 + skillx, 48 + skilly);
				alphabet('u', 25 + skillx, 50 + skilly);
				alphabet('r', 34 + skillx, 49 + skilly);
				alphabet('f', 43 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[13] != 0) {
				if (skill[13] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 13;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[13] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 13;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[13] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 13;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[13] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 13;
					damage = 120;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[13] == 2 || skill[13] == 4)
					skillx = 92;
				if (skill[13] == 3 || skill[13] == 4)
					skilly = 6;
				alphabet('h', 18 + skillx, 48 + skilly);
				alphabet('y', 27 + skillx, 49 + skilly);
				alphabet('d', 36 + skillx, 48 + skilly);
				alphabet('r', 45 + skillx, 49 + skilly);
				alphabet('o', 54 + skillx, 49 + skilly);

				alphabet('p', 67 + skillx, 48 + skilly);
				alphabet('u', 74 + skillx, 50 + skilly);
				alphabet('m', 83 + skillx, 49 + skilly);
				alphabet('p', 94 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[14] != 0) {
				if (skill[14] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 14;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[14] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 14;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[14] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 14;
					damage = 40;
					damage_void = 1;
				}
				else if (skill[14] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 14;
					damage = 40;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[14] == 2 || skill[14] == 4)
					skillx = 92;
				if (skill[14] == 3 || skill[14] == 4)
					skilly = 6;
				alphabet('v', 18 + skillx, 50 + skilly);
				alphabet('i', 25 + skillx, 48 + skilly);
				alphabet('n', 28 + skillx, 49 + skilly);
				alphabet('e', 39 + skillx, 48 + skilly);

				alphabet('w', 54 + skillx, 50 + skilly);
				alphabet('h', 65 + skillx, 48 + skilly);
				alphabet('i', 74 + skillx, 48 + skilly);
				alphabet('p', 87 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[15] != 0) {
				if (skill[15] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 15;
					damage = 60;
					damage_void = 1;
				}
				else if (skill[15] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 15;
					damage = 60;
					damage_void = 1;
				}
				else if (skill[15] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 15;
					damage = 60;
					damage_void = 1;
				}
				else if (skill[15] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 15;
					damage = 60;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[15] == 2 || skill[15] == 4)
					skillx = 92;
				if (skill[15] == 3 || skill[15] == 4)
					skilly = 6;
				alphabet('r', 18 + skillx, 49 + skilly);
				alphabet('a', 27 + skillx, 48 + skilly);
				alphabet('z', 36 + skillx, 49 + skilly);
				alphabet('o', 45 + skillx, 49 + skilly);
				alphabet('r', 54 + skillx, 49 + skilly);

				alphabet('l', 67 + skillx, 48 + skilly);
				alphabet('e', 72 + skillx, 48 + skilly);
				alphabet('a', 83 + skillx, 48 + skilly);
				alphabet('f', 92 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[16] != 0) {
				if (skill[16] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 16;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[16] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 16;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[16] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 16;
					damage = 80;
					damage_void = 1;
				}
				else if (skill[16] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 16;
					damage = 80;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[16] == 2 || skill[16] == 4)
					skillx = 92;
				if (skill[16] == 3 || skill[16] == 4)
					skilly = 6;
				alphabet('s', 18 + skillx, 48 + skilly);
				alphabet('e', 25 + skillx, 48 + skilly);
				alphabet('e', 36 + skillx, 48 + skilly);
				alphabet('d', 47 + skillx, 48 + skilly);

				alphabet('b', 60 + skillx, 48 + skilly);
				alphabet('o', 69 + skillx, 49 + skilly);
				alphabet('m', 78 + skillx, 49 + skilly);
				alphabet('b', 89 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[17] != 0) {
				if (skill[17] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 17;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[17] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 17;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[17] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 17;
					damage = 100;
					damage_void = 1;
				}
				else if (skill[17] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 17;
					damage = 100;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[17] == 2 || skill[17] == 4)
					skillx = 92;
				if (skill[17] == 3 || skill[17] == 4)
					skilly = 6;
				alphabet('l', 18 + skillx, 48 + skilly);
				alphabet('e', 23 + skillx, 48 + skilly);
				alphabet('a', 34 + skillx, 48 + skilly);
				alphabet('f', 43 + skillx, 48 + skilly);

				alphabet('b', 54 + skillx, 48 + skilly);
				alphabet('l', 63 + skillx, 48 + skilly);
				alphabet('a', 68 + skillx, 48 + skilly);
				alphabet('d', 77 + skillx, 48 + skilly);
				alphabet('e', 86 + skillx, 48 + skilly);
			}

			skillx = 0;
			skilly = 0;

			if (skill[18] != 0) {
				if (skill[18] == 1 && x == 1 && y == 1) {
					color = 2;
					skill_num = 18;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[18] == 2 && x == 2 && y == 1) {
					color = 2;
					skill_num = 18;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[18] == 3 && x == 1 && y == 2) {
					color = 2;
					skill_num = 18;
					damage = 120;
					damage_void = 1;
				}
				else if (skill[18] == 4 && x == 2 && y == 2) {
					color = 2;
					skill_num = 18;
					damage = 120;
					damage_void = 1;
				}
				else
					color = 1;
				if (skill[18] == 2 || skill[18] == 4)
					skillx = 92;
				if (skill[18] == 3 || skill[18] == 4)
					skilly = 6;
				alphabet('s', 18 + skillx, 48 + skilly);
				alphabet('o', 25 + skillx, 49 + skilly);
				alphabet('l', 34 + skillx, 48 + skilly);
				alphabet('a', 39 + skillx, 48 + skilly);
				alphabet('r', 48 + skillx, 49 + skilly);

				alphabet('b', 61 + skillx, 48 + skilly);
				alphabet('e', 70 + skillx, 48 + skilly);
				alphabet('a', 81 + skillx, 48 + skilly);
				alphabet('m', 90 + skillx, 49 + skilly);
			}

			skillx = 0;
			skilly = 0;
		}
	}
	delete_speech_bubble();

	for (int i = 0; POKEMON[i] != 1; i++) {
		my_level = POKEMON_LV[i + 1];
	}

	if (damage_void == 0)
		goto turn;

	if (speed == 0) {
	turn:
		random = rand() % 8;
		if (random == 0)
			critical = 1.5;

		switch (mine) {
		case 1:
			alphabet('P', 18, 48);
			Sleep(50);
			alphabet('y', 27, 49);
			Sleep(50);
			alphabet('r', 36, 49);
			Sleep(50);
			alphabet('e', 45, 48);
			Sleep(50);
			alphabet('e', 56, 48);
			Sleep(50);
			break;
		case 2:
			alphabet('T', 18, 48);
			Sleep(50);
			alphabet('w', 25, 50);
			Sleep(50);
			alphabet('i', 36, 48);
			Sleep(50);
			alphabet('s', 39, 48);
			Sleep(50);
			alphabet('t', 46, 48);
			Sleep(50);
			break;
		case 3:
			alphabet('B', 18, 48);
			Sleep(50);
			alphabet('u', 27, 50);
			Sleep(50);
			alphabet('l', 36, 48);
			Sleep(50);
			alphabet('b', 41, 48);
			Sleep(50);
			alphabet('a', 50, 48);
			Sleep(50);
			alphabet('s', 59, 48);
			Sleep(50);
			alphabet('a', 66, 48);
			Sleep(50);
			alphabet('u', 75, 50);
			Sleep(50);
			alphabet('r', 84, 49);
			Sleep(50);
			break;
		case 4:
			alphabet('R', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('z', 30, 49);
			Sleep(50);
			alphabet('a', 39, 48);
			Sleep(50);
			alphabet('r', 48, 49);
			Sleep(50);
			alphabet('d', 57, 48);
			Sleep(50);
			break;
		case 5:
			alphabet('W', 18, 48);
			Sleep(50);
			alphabet('a', 29, 48);
			Sleep(50);
			alphabet('r', 38, 49);
			Sleep(50);
			alphabet('t', 47, 48);
			Sleep(50);
			alphabet('o', 54, 49);
			Sleep(50);
			alphabet('r', 63, 49);
			Sleep(50);
			alphabet('t', 72, 48);
			Sleep(50);
			alphabet('l', 79, 48);
			Sleep(50);
			alphabet('e', 84, 48);
			Sleep(50);
			break;
		case 6:
			alphabet('I', 18, 48);
			Sleep(50);
			alphabet('v', 21, 50);
			Sleep(50);
			alphabet('y', 28, 49);
			Sleep(50);
			alphabet('s', 37, 48);
			Sleep(50);
			alphabet('a', 44, 48);
			Sleep(50);
			alphabet('u', 53, 50);
			Sleep(50);
			alphabet('r', 62, 49);
			Sleep(50);
			break;
		case 7:
			alphabet('R', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('z', 30, 49);
			Sleep(50);
			alphabet('a', 39, 48);
			Sleep(50);
			alphabet('m', 48, 49);
			Sleep(50);
			alphabet('o', 59, 49);
			Sleep(50);
			alphabet('n', 68, 49);
			Sleep(50);
			alphabet('g', 79, 48);
			Sleep(50);
			break;
		case 8:
			alphabet('B', 18, 48);
			Sleep(50);
			alphabet('l', 27, 48);
			Sleep(50);
			alphabet('a', 32, 48);
			Sleep(50);
			alphabet('s', 41, 48);
			Sleep(50);
			alphabet('t', 48, 48);
			Sleep(50);
			alphabet('o', 55, 49);
			Sleep(50);
			alphabet('i', 64, 48);
			Sleep(50);
			alphabet('s', 67, 48);
			Sleep(50);
			alphabet('e', 74, 48);
			Sleep(50);
			break;
		case 9:
			alphabet('V', 18, 48);
			Sleep(50);
			alphabet('e', 29, 48);
			Sleep(50);
			alphabet('n', 40, 49);
			Sleep(50);
			alphabet('u', 51, 50);
			Sleep(50);
			alphabet('s', 60, 48);
			Sleep(50);
			alphabet('a', 67, 48);
			Sleep(50);
			alphabet('u', 76, 50);
			Sleep(50);
			alphabet('r', 85, 49);
			Sleep(50);
			break;
		}

		alphabet('u', 18, 56);
		Sleep(50);
		alphabet('s', 27, 54);
		Sleep(50);
		alphabet('e', 34, 54);
		Sleep(50);
		alphabet('d', 45, 54);
		Sleep(50);

		switch (skill_num) {
		case 0:
			alphabet('s', 58, 54);
			Sleep(50);
			alphabet('c', 65, 55);
			Sleep(50);
			alphabet('r', 74, 55);
			Sleep(50);
			alphabet('a', 83, 54);
			Sleep(50);
			alphabet('c', 92, 55);
			Sleep(50);
			alphabet('h', 101, 54);
			Sleep(50);
			break;
		case 1:
			alphabet('g', 58, 54);
			Sleep(50);
			alphabet('r', 67, 55);
			Sleep(50);
			alphabet('o', 76, 55);
			Sleep(50);
			alphabet('w', 85, 56);
			Sleep(50);
			alphabet('l', 96, 54);
			Sleep(50);
			break;
		case 2:
			alphabet('e', 58, 54);
			Sleep(50);
			alphabet('m', 69, 55);
			Sleep(50);
			alphabet('b', 80, 54);
			Sleep(50);
			alphabet('e', 89, 54);
			Sleep(50);
			alphabet('r', 100, 55);
			Sleep(50);
			break;
		case 3:
			alphabet('f', 58, 54);
			Sleep(50);
			alphabet('i', 65, 54);
			Sleep(50);
			alphabet('r', 68, 55);
			Sleep(50);
			alphabet('e', 77, 54);
			Sleep(50);

			alphabet('f', 92, 54);
			Sleep(50);
			alphabet('a', 99, 54);
			Sleep(50);
			alphabet('n', 108, 55);
			Sleep(50);
			alphabet('g', 119, 54);
			Sleep(50);
			break;
		case 4:
			alphabet('s', 58, 54);
			Sleep(50);
			alphabet('l', 65, 54);
			Sleep(50);
			alphabet('a', 70, 54);
			Sleep(50);
			alphabet('s', 79, 54);
			Sleep(50);
			alphabet('h', 86, 54);
			Sleep(50);
			break;
		case 5:
			alphabet('f', 58, 54);
			Sleep(50);
			alphabet('i', 65, 54);
			Sleep(50);
			alphabet('r', 68, 55);
			Sleep(50);
			alphabet('e', 77, 54);
			Sleep(50);

			alphabet('s', 88, 54);
			Sleep(50);
			alphabet('p', 95, 54);
			Sleep(50);
			alphabet('i', 102, 54);
			Sleep(50);
			alphabet('n', 105, 55);
			Sleep(50);
			break;
		case 6:
			alphabet('i', 58, 54);
			Sleep(50);
			alphabet('n', 61, 55);
			Sleep(50);
			alphabet('f', 72, 54);
			Sleep(50);
			alphabet('e', 79, 54);
			Sleep(50);
			alphabet('r', 90, 55);
			Sleep(50);
			alphabet('n', 99, 55);
			Sleep(50);
			alphabet('o', 110, 55);
			Sleep(50);
			break;
		case 7:
			alphabet('o', 58, 55);
			Sleep(50);
			alphabet('u', 67, 56);
			Sleep(50);
			alphabet('t', 76, 54);
			Sleep(50);
			alphabet('r', 83, 55);
			Sleep(50);
			alphabet('a', 92, 54);
			Sleep(50);
			alphabet('g', 101, 54);
			Sleep(50);
			alphabet('e', 110, 54);
			Sleep(50);
			break;
		case 8:
			alphabet('t', 58, 54);
			Sleep(50);
			alphabet('a', 65, 54);
			Sleep(50);
			alphabet('c', 74, 55);
			Sleep(50);
			alphabet('k', 83, 54);
			Sleep(50);
			alphabet('l', 90, 54);
			Sleep(50);
			alphabet('e', 95, 54);
			Sleep(50);
			break;
		case 9:
			alphabet('w', 58, 56);
			Sleep(50);
			alphabet('a', 69, 54);
			Sleep(50);
			alphabet('t', 78, 54);
			Sleep(50);
			alphabet('e', 85, 54);
			Sleep(50);
			alphabet('r', 96, 55);
			Sleep(50);

			alphabet('g', 109, 54);
			Sleep(50);
			alphabet('u', 118, 56);
			Sleep(50);
			alphabet('n', 127, 55);
			Sleep(50);
			break;
		case 10:
			alphabet('s', 58, 54);
			Sleep(50);
			alphabet('c', 65, 55);
			Sleep(50);
			alphabet('a', 74, 54);
			Sleep(50);
			alphabet('l', 83, 54);
			Sleep(50);
			alphabet('d', 88, 54);
			Sleep(50);
			break;
		case 11:
			alphabet('a', 58, 54);
			Sleep(50);
			alphabet('q', 67, 54);
			Sleep(50);
			alphabet('u', 74, 56);
			Sleep(50);
			alphabet('a', 83, 54);
			Sleep(50);

			alphabet('t', 96, 54);
			Sleep(50);
			alphabet('a', 103, 54);
			Sleep(50);
			alphabet('i', 112, 54);
			Sleep(50);
			alphabet('l', 115, 54);
			Sleep(50);
			break;
		case 12:
			alphabet('s', 58, 54);
			Sleep(50);
			alphabet('u', 65, 56);
			Sleep(50);
			alphabet('r', 74, 55);
			Sleep(50);
			alphabet('f', 83, 54);
			Sleep(50);
			break;
		case 13:
			alphabet('h', 58, 54);
			Sleep(50);
			alphabet('y', 67, 55);
			Sleep(50);
			alphabet('d', 76, 54);
			Sleep(50);
			alphabet('r', 85, 55);
			Sleep(50);
			alphabet('o', 94, 55);
			Sleep(50);

			alphabet('p', 107, 54);
			Sleep(50);
			alphabet('u', 114, 56);
			Sleep(50);
			alphabet('m', 123, 55);
			Sleep(50);
			alphabet('p', 134, 54);
			Sleep(50);
			break;
		case 14:
			alphabet('v', 58, 56);
			Sleep(50);
			alphabet('i', 65, 54);
			Sleep(50);
			alphabet('n', 68, 55);
			Sleep(50);
			alphabet('e', 79, 54);
			Sleep(50);

			alphabet('w', 94, 56);
			Sleep(50);
			alphabet('h', 105, 54);
			Sleep(50);
			alphabet('i', 114, 54);
			Sleep(50);
			alphabet('p', 117, 54);
			Sleep(50);
			break;
		case 15:
			alphabet('r', 58, 55);
			Sleep(50);
			alphabet('a', 67, 54);
			Sleep(50);
			alphabet('z', 76, 55);
			Sleep(50);
			alphabet('o', 85, 55);
			Sleep(50);
			alphabet('r', 94, 55);
			Sleep(50);

			alphabet('l', 107, 54);
			Sleep(50);
			alphabet('e', 112, 54);
			Sleep(50);
			alphabet('a', 123, 54);
			Sleep(50);
			alphabet('f', 132, 54);
			Sleep(50);
			break;
		case 16:
			alphabet('s', 58, 54);
			Sleep(50);
			alphabet('e', 65, 54);
			Sleep(50);
			alphabet('e', 76, 54);
			Sleep(50);
			alphabet('d', 87, 54);
			Sleep(50);

			alphabet('b', 100, 54);
			Sleep(50);
			alphabet('o', 109, 55);
			Sleep(50);
			alphabet('m', 118, 55);
			Sleep(50);
			alphabet('b', 129, 54);
			Sleep(50);
			break;
		case 17:
			alphabet('l', 58, 54);
			Sleep(50);
			alphabet('e', 63, 54);
			Sleep(50);
			alphabet('a', 74, 54);
			Sleep(50);
			alphabet('f', 83, 54);
			Sleep(50);

			alphabet('b', 94, 54);
			Sleep(50);
			alphabet('l', 103, 54);
			Sleep(50);
			alphabet('a', 108, 54);
			Sleep(50);
			alphabet('d', 117, 54);
			Sleep(50);
			alphabet('e', 126, 54);
			Sleep(50);
			break;
		case 18:
			alphabet('s', 58, 54);
			Sleep(50);
			alphabet('o', 65, 55);
			Sleep(50);
			alphabet('l', 74, 54);
			Sleep(50);
			alphabet('a', 79, 54);
			Sleep(50);
			alphabet('r', 88, 55);
			Sleep(50);

			alphabet('b', 101, 54);
			Sleep(50);
			alphabet('e', 110, 54);
			Sleep(50);
			alphabet('a', 121, 54);
			Sleep(50);
			alphabet('m', 130, 55);
			Sleep(50);
			break;
		}

		current_hp = hp1;

		if (damage_void == 1) {
			hp1 -= (damage * ((my_level / 5 + 4) * critical * attack / 20 + 2) / defense / 50) * random_damage;
			hp1 = (int)(hp1 + 0.5);
		}
		if (hp1 == current_hp && damage_void == 1)
			hp1 = current_hp - 1;

		ColorSet(WHITE, WHITE);
		Sleep(100);

		if (hp1 != current_hp) {
			gotoxy(118, 11);
			printf("  ");
		}
		for (; hp1 < current_hp; current_hp--) {
			if (current_hp >= 0) {
				for (int j = 0; j < 3; j++) {
					gotoxy(current_hp + 42, 10 + j);
					printf(" ");
				}
			}
			if (current_hp == 1) {
				for (int i = 0; i < 3; i++) {
					gotoxy(42, 10 + i);
					printf(" ");
				}
				gotoxy(41, 11);
				printf(" ");
				Sleep(50);
				gotoxy(40, 11);
				printf(" ");
				break;
			}
			Sleep(50);
		}

		if (critical == 1.5 && damage_void == 1) {
			delete_speech_bubble();

			//critical hit
			alphabet('c', 18, 49);
			Sleep(50);
			alphabet('r', 27, 49);
			Sleep(50);
			alphabet('i', 36, 48);
			Sleep(50);
			alphabet('t', 39, 48);
			Sleep(50);
			alphabet('i', 46, 48);
			Sleep(50);
			alphabet('c', 49, 49);
			Sleep(50);
			alphabet('a', 58, 48);
			Sleep(50);
			alphabet('l', 67, 48);
			Sleep(50);

			alphabet('h', 76, 48);
			Sleep(50);
			alphabet('i', 85, 48);
			Sleep(50);
			alphabet('t', 88, 48);
			Sleep(50);
			alphabet('!', 96, 48);
		}

		if (damage_void == 0) {
			delete_speech_bubble();

			//enemy attack power
			alphabet('e', 18, 48);
			Sleep(50);
			alphabet('n', 29, 49);
			Sleep(50);
			alphabet('e', 40, 48);
			Sleep(50);
			alphabet('m', 51, 49);
			Sleep(50);
			alphabet('y', 62, 49);
			Sleep(50);

			alphabet('a', 75, 48);
			Sleep(50);
			alphabet('t', 84, 48);
			Sleep(50);
			alphabet('t', 91, 48);
			Sleep(50);
			alphabet('a', 98, 48);
			Sleep(50);
			alphabet('c', 107, 49);
			Sleep(50);
			alphabet('k', 116, 48);
			Sleep(50);

			alphabet('p', 127, 48);
			Sleep(50);
			alphabet('o', 134, 49);
			Sleep(50);
			alphabet('w', 143, 50);
			Sleep(50);
			alphabet('e', 154, 48);
			Sleep(50);
			alphabet('r', 165, 49);
			Sleep(50);

			//decresed
			alphabet('d', 18, 54);
			Sleep(50);
			alphabet('e', 27, 54);
			Sleep(50);
			alphabet('c', 38, 55);
			Sleep(50);
			alphabet('r', 47, 55);
			Sleep(50);
			alphabet('e', 56, 54);
			Sleep(50);
			alphabet('a', 67, 54);
			Sleep(50);
			alphabet('s', 76, 54);
			Sleep(50);
			alphabet('e', 83, 54);
			Sleep(50);
			alphabet('d', 94, 54);
			Sleep(50);
		}

		twinkle_button();
		delete_speech_bubble();

		if (hp1 <= 0)
			goto end;

		if (turn == 0)
			goto reload;
	}
	else {
	reload:
		turn++;

		random = rand() % 8;
		if (random == 0)
			critical = 1.5;

		switch (your_POKEMON) {
		case 0:
			alphabet('N', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('d', 30, 48);
			Sleep(50);
			alphabet('o', 39, 49);
			Sleep(50);
			alphabet('r', 48, 49);
			Sleep(50);
			alphabet('i', 57, 48);
			Sleep(50);
			alphabet('n', 60, 49);
			Sleep(50);
			alphabet('a', 71, 48);
			Sleep(50);
			break;
		case 1:
			alphabet('P', 18, 48);
			Sleep(50);
			alphabet('y', 27, 49);
			Sleep(50);
			alphabet('r', 36, 49);
			Sleep(50);
			alphabet('e', 45, 48);
			Sleep(50);
			alphabet('e', 56, 48);
			Sleep(50);
			break;
		case 2:
			alphabet('T', 18, 48);
			Sleep(50);
			alphabet('w', 25, 50);
			Sleep(50);
			alphabet('i', 36, 48);
			Sleep(50);
			alphabet('s', 39, 48);
			Sleep(50);
			alphabet('t', 46, 48);
			Sleep(50);
			break;
		case 3:
			alphabet('B', 18, 48);
			Sleep(50);
			alphabet('u', 27, 50);
			Sleep(50);
			alphabet('l', 36, 48);
			Sleep(50);
			alphabet('b', 41, 48);
			Sleep(50);
			alphabet('a', 50, 48);
			Sleep(50);
			alphabet('s', 59, 48);
			Sleep(50);
			alphabet('a', 66, 48);
			Sleep(50);
			alphabet('u', 75, 50);
			Sleep(50);
			alphabet('r', 84, 49);
			Sleep(50);
			break;
		case 4:
			alphabet('R', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('z', 30, 49);
			Sleep(50);
			alphabet('a', 39, 48);
			Sleep(50);
			alphabet('r', 48, 49);
			Sleep(50);
			alphabet('d', 57, 48);
			Sleep(50);
			break;
		case 5:
			alphabet('W', 18, 48);
			Sleep(50);
			alphabet('a', 29, 48);
			Sleep(50);
			alphabet('r', 38, 49);
			Sleep(50);
			alphabet('t', 47, 48);
			Sleep(50);
			alphabet('o', 54, 49);
			Sleep(50);
			alphabet('r', 63, 49);
			Sleep(50);
			alphabet('t', 72, 48);
			Sleep(50);
			alphabet('l', 79, 48);
			Sleep(50);
			alphabet('e', 84, 48);
			Sleep(50);
			break;
		case 6:
			alphabet('I', 18, 48);
			Sleep(50);
			alphabet('v', 21, 50);
			Sleep(50);
			alphabet('y', 28, 49);
			Sleep(50);
			alphabet('s', 37, 48);
			Sleep(50);
			alphabet('a', 44, 48);
			Sleep(50);
			alphabet('u', 53, 50);
			Sleep(50);
			alphabet('r', 62, 49);
			Sleep(50);
			break;
		case 7:
			alphabet('R', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('z', 30, 49);
			Sleep(50);
			alphabet('a', 39, 48);
			Sleep(50);
			alphabet('m', 48, 49);
			Sleep(50);
			alphabet('o', 59, 49);
			Sleep(50);
			alphabet('n', 68, 49);
			Sleep(50);
			alphabet('g', 79, 48);
			Sleep(50);
			break;
		case 8:
			alphabet('B', 18, 48);
			Sleep(50);
			alphabet('l', 27, 48);
			Sleep(50);
			alphabet('a', 32, 48);
			Sleep(50);
			alphabet('s', 41, 48);
			Sleep(50);
			alphabet('t', 48, 48);
			Sleep(50);
			alphabet('o', 55, 49);
			Sleep(50);
			alphabet('i', 64, 48);
			Sleep(50);
			alphabet('s', 67, 48);
			Sleep(50);
			alphabet('e', 74, 48);
			Sleep(50);
			break;
		case 9:
			alphabet('V', 18, 48);
			Sleep(50);
			alphabet('e', 29, 48);
			Sleep(50);
			alphabet('n', 40, 49);
			Sleep(50);
			alphabet('u', 51, 50);
			Sleep(50);
			alphabet('s', 60, 48);
			Sleep(50);
			alphabet('a', 67, 48);
			Sleep(50);
			alphabet('u', 76, 50);
			Sleep(50);
			alphabet('r', 85, 49);
			Sleep(50);
			break;
		case 10:
			alphabet('P', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('d', 30, 48);
			Sleep(50);
			alphabet('g', 39, 48);
			Sleep(50);
			alphabet('e', 48, 48);
			Sleep(50);
			alphabet('y', 59, 49);
			Sleep(50);
			break;
		case 11:
			alphabet('P', 18, 48);
			Sleep(50);
			alphabet('i', 27, 48);
			Sleep(50);
			alphabet('g', 30, 48);
			Sleep(50);
			alphabet('e', 39, 48);
			Sleep(50);
			alphabet('o', 50, 49);
			Sleep(50);
			alphabet('n', 59, 49);
			Sleep(50);
			break;
		case 12:
			alphabet('O', 18, 48);
			Sleep(50);
			alphabet('n', 27, 49);
			Sleep(50);
			alphabet('i', 38, 48);
			Sleep(50);
			alphabet('x', 41, 50);
			Sleep(50);
			break;
		case 13:
			alphabet('S', 18, 48);
			Sleep(50);
			alphabet('t', 27, 48);
			Sleep(50);
			alphabet('e', 34, 48);
			Sleep(50);
			alphabet('e', 45, 48);
			Sleep(50);
			alphabet('l', 56, 48);
			Sleep(50);
			alphabet('i', 61, 48);
			Sleep(50);
			alphabet('x', 64, 50);
			Sleep(50);
			break;
		case 14:
			alphabet('M', 18, 48);
			Sleep(50);
			alphabet('a', 29, 48);
			Sleep(50);
			alphabet('c', 38, 49);
			Sleep(50);
			alphabet('h', 47, 48);
			Sleep(50);
			alphabet('o', 56, 49);
			Sleep(50);
			alphabet('k', 65, 48);
			Sleep(50);
			alphabet('e', 72, 48);
			Sleep(50);
			break;
		case 15:
			alphabet('M', 18, 48);
			Sleep(50);
			alphabet('a', 29, 48);
			Sleep(50);
			alphabet('c', 38, 49);
			Sleep(50);
			alphabet('h', 47, 48);
			Sleep(50);
			alphabet('a', 56, 48);
			Sleep(50);
			alphabet('m', 65, 49);
			Sleep(50);
			alphabet('p', 76, 48);
			Sleep(50);
			break;
		case 16:
			alphabet('L', 18, 48);
			Sleep(50);
			alphabet('a', 25, 48);
			Sleep(50);
			alphabet('p', 34, 48);
			Sleep(50);
			alphabet('r', 41, 49);
			Sleep(50);
			alphabet('a', 50, 48);
			Sleep(50);
			alphabet('s', 59, 48);
			Sleep(50);
			break;
		case 17:
			alphabet('P', 18, 48);
			Sleep(50);
			alphabet('h', 27, 48);
			Sleep(50);
			alphabet('a', 36, 48);
			Sleep(50);
			alphabet('n', 45, 49);
			Sleep(50);
			alphabet('t', 56, 48);
			Sleep(50);
			alphabet('o', 63, 49);
			Sleep(50);
			alphabet('m', 72, 49);
			Sleep(50);
			break;
		case 18:
			alphabet('A', 18, 48);
			Sleep(50);
			alphabet('r', 27, 49);
			Sleep(50);
			alphabet('b', 36, 48);
			Sleep(50);
			alphabet('o', 45, 49);
			Sleep(50);
			alphabet('k', 54, 48);
			Sleep(50);
			break;
		case 19:
			alphabet('L', 18, 48);
			Sleep(50);
			alphabet('u', 25, 50);
			Sleep(50);
			alphabet('c', 34, 49);
			Sleep(50);
			alphabet('a', 43, 48);
			Sleep(50);
			alphabet('r', 52, 49);
			Sleep(50);
			alphabet('i', 61, 48);
			Sleep(50);
			alphabet('o', 64, 49);
			Sleep(50);
			break;
		case 20:
			alphabet('W', 18, 48);
			Sleep(50);
			alphabet('e', 29, 48);
			Sleep(50);
			alphabet('e', 40, 48);
			Sleep(50);
			alphabet('z', 51, 49);
			Sleep(50);
			alphabet('i', 60, 48);
			Sleep(50);
			alphabet('n', 63, 49);
			Sleep(50);
			alphabet('g', 74, 48);
			Sleep(50);
			break;
		case 21:
			alphabet('M', 18, 48);
			Sleep(50);
			alphabet('e', 29, 48);
			Sleep(50);
			alphabet('t', 40, 48);
			Sleep(50);
			alphabet('a', 47, 48);
			Sleep(50);
			alphabet('m', 56, 49);
			Sleep(50);
			alphabet('o', 67, 49);
			Sleep(50);
			alphabet('n', 76, 49);
			Sleep(50);
			break;
		case 22:
			LV = 53;
			LV1 = 48;
			alphabet('A', 18, 48);
			Sleep(50);
			alphabet('r', 27, 49);
			Sleep(50);
			alphabet('c', 36, 49);
			Sleep(50);
			alphabet('e', 45, 48);
			Sleep(50);
			alphabet('u', 56, 50);
			Sleep(50);
			alphabet('s', 65, 48);
			Sleep(50);
			break;
		}

		alphabet('u', 18, 56);
		Sleep(50);
		alphabet('s', 27, 54);
		Sleep(50);
		alphabet('e', 34, 54);
		Sleep(50);
		alphabet('d', 45, 54);
		Sleep(50);

		switch (your_POKEMON) {
		case 0:
			if (your_POKEMONLV <= 8) {
				damage1 = 40;

				//tackle
				alphabet('t', 58, 54);
				Sleep(50);
				alphabet('a', 65, 54);
				Sleep(50);
				alphabet('c', 74, 55);
				Sleep(50);
				alphabet('k', 83, 54);
				Sleep(50);
				alphabet('l', 90, 54);
				Sleep(50);
				alphabet('e', 95, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 26) {
				damage1 = 40;

				//scrach
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('c', 65, 55);
				Sleep(50);
				alphabet('r', 74, 55);
				Sleep(50);
				alphabet('a', 83, 54);
				Sleep(50);
				alphabet('c', 92, 55);
				Sleep(50);
				alphabet('h', 101, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 60;

				//bite
				alphabet('b', 58, 54);
				Sleep(50);
				alphabet('i', 67, 54);
				Sleep(50);
				alphabet('t', 70, 54);
				Sleep(50);
				alphabet('e', 77, 54);
				Sleep(50);
			}
			break;
		case 1:
			if (your_POKEMONLV <= 8) {
				damage1 = 40;

				//scrach
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('c', 65, 55);
				Sleep(50);
				alphabet('r', 74, 55);
				Sleep(50);
				alphabet('a', 83, 54);
				Sleep(50);
				alphabet('c', 92, 55);
				Sleep(50);
				alphabet('h', 101, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 15) {
				damage1 = 40;

				//ember
				alphabet('e', 58, 54);
				Sleep(50);
				alphabet('m', 69, 55);
				Sleep(50);
				alphabet('b', 80, 54);
				Sleep(50);
				alphabet('e', 89, 54);
				Sleep(50);
				alphabet('r', 100, 55);
				Sleep(50);
			}
			break;
		case 2:
			if (your_POKEMONLV <= 8) {
				damage1 = 40;

				//bubble
				alphabet('b', 58, 54);
				Sleep(50);
				alphabet('u', 67, 56);
				Sleep(50);
				alphabet('b', 76, 54);
				Sleep(50);
				alphabet('b', 85, 54);
				Sleep(50);
				alphabet('l', 94, 54);
				Sleep(50);
				alphabet('e', 101, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 15) {
				damage1 = 40;

				//water gun
				alphabet('w', 58, 56);
				Sleep(50);
				alphabet('a', 69, 54);
				Sleep(50);
				alphabet('t', 78, 54);
				Sleep(50);
				alphabet('e', 85, 54);
				Sleep(50);
				alphabet('r', 96, 55);
				Sleep(50);

				alphabet('g', 109, 54);
				Sleep(50);
				alphabet('u', 118, 56);
				Sleep(50);
				alphabet('n', 127, 55);
				Sleep(50);
			}
			break;
		case 3:
			if (your_POKEMONLV <= 8) {
				damage1 = 40;

				//tackle
				alphabet('t', 58, 54);
				Sleep(50);
				alphabet('a', 65, 54);
				Sleep(50);
				alphabet('c', 74, 55);
				Sleep(50);
				alphabet('k', 83, 54);
				Sleep(50);
				alphabet('l', 90, 54);
				Sleep(50);
				alphabet('e', 95, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 15) {
				damage1 = 40;

				//vine whip
				alphabet('v', 58, 56);
				Sleep(50);
				alphabet('i', 65, 54);
				Sleep(50);
				alphabet('n', 68, 55);
				Sleep(50);
				alphabet('e', 79, 54);
				Sleep(50);

				alphabet('w', 94, 56);
				Sleep(50);
				alphabet('h', 105, 54);
				Sleep(50);
				alphabet('i', 114, 54);
				Sleep(50);
				alphabet('p', 117, 54);
				Sleep(50);
			}
			break;
		case 4:
			if (your_POKEMONLV <= 26) {
				damage1 = 65;

				//fire fang
				alphabet('f', 58, 54);
				Sleep(50);
				alphabet('i', 65, 54);
				Sleep(50);
				alphabet('r', 68, 55);
				Sleep(50);
				alphabet('e', 77, 54);
				Sleep(50);

				alphabet('f', 92, 54);
				Sleep(50);
				alphabet('a', 99, 54);
				Sleep(50);
				alphabet('n', 108, 55);
				Sleep(50);
				alphabet('g', 119, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 35) {
				damage1 = 70;

				//slash
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('l', 65, 54);
				Sleep(50);
				alphabet('a', 70, 54);
				Sleep(50);
				alphabet('s', 79, 54);
				Sleep(50);
				alphabet('h', 86, 54);
				Sleep(50);
			}
			break;
		case 5:
			if (your_POKEMONLV <= 26) {
				damage1 = 60;

				//bite
				alphabet('b', 58, 54);
				Sleep(50);
				alphabet('i', 67, 54);
				Sleep(50);
				alphabet('t', 70, 54);
				Sleep(50);
				alphabet('e', 77, 54);
			}
			else if (your_POKEMONLV <= 35) {
				damage1 = 90;

				//aqua tail
				alphabet('a', 58, 54);
				Sleep(50);
				alphabet('q', 67, 54);
				Sleep(50);
				alphabet('u', 74, 56);
				Sleep(50);
				alphabet('a', 83, 54);
				Sleep(50);

				alphabet('t', 96, 54);
				Sleep(50);
				alphabet('a', 103, 54);
				Sleep(50);
				alphabet('i', 112, 54);
				Sleep(50);
				alphabet('l', 115, 54);
				Sleep(50);
			}
			break;
		case 6:
			if (your_POKEMONLV <= 26) {
				damage1 = 55;

				//razor leaf
				alphabet('r', 58, 55);
				Sleep(50);
				alphabet('a', 67, 54);
				Sleep(50);
				alphabet('z', 76, 55);
				Sleep(50);
				alphabet('o', 85, 55);
				Sleep(50);
				alphabet('r', 94, 55);
				Sleep(50);

				alphabet('l', 107, 54);
				Sleep(50);
				alphabet('e', 112, 54);
				Sleep(50);
				alphabet('a', 123, 54);
				Sleep(50);
				alphabet('f', 132, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 35) {
				damage1 = 80;

				//seed bomb
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('e', 65, 54);
				Sleep(50);
				alphabet('e', 76, 54);
				Sleep(50);
				alphabet('d', 87, 54);
				Sleep(50);

				alphabet('b', 100, 54);
				Sleep(50);
				alphabet('o', 109, 55);
				Sleep(50);
				alphabet('m', 118, 55);
				Sleep(50);
				alphabet('b', 129, 54);
				Sleep(50);
			}
			break;
		case 7:
			if (your_POKEMONLV <= 42) {
				damage1 = 100;

				//inferno
				alphabet('i', 58, 54);
				Sleep(50);
				alphabet('n', 61, 55);
				Sleep(50);
				alphabet('f', 72, 54);
				Sleep(50);
				alphabet('e', 79, 54);
				Sleep(50);
				alphabet('r', 90, 55);
				Sleep(50);
				alphabet('n', 99, 55);
				Sleep(50);
				alphabet('o', 110, 55);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 120;

				//outrage
				alphabet('o', 58, 55);
				Sleep(50);
				alphabet('u', 67, 56);
				Sleep(50);
				alphabet('t', 76, 54);
				Sleep(50);
				alphabet('r', 83, 55);
				Sleep(50);
				alphabet('a', 92, 54);
				Sleep(50);
				alphabet('g', 101, 54);
				Sleep(50);
				alphabet('e', 110, 54);
				Sleep(50);
			}
			break;
		case 8:
			if (your_POKEMONLV <= 50) {
				damage1 = 110;

				//hydro pump
				alphabet('h', 58, 54);
				Sleep(50);
				alphabet('y', 67, 55);
				Sleep(50);
				alphabet('d', 76, 54);
				Sleep(50);
				alphabet('r', 85, 55);
				Sleep(50);
				alphabet('o', 94, 55);
				Sleep(50);

				alphabet('p', 107, 54);
				Sleep(50);
				alphabet('u', 114, 56);
				Sleep(50);
				alphabet('m', 123, 55);
				Sleep(50);
				alphabet('p', 134, 54);
				Sleep(50);
			}
			break;
		case 9:
			if (your_POKEMONLV <= 50) {
				damage1 = 120;

				//solar beam
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('o', 65, 55);
				Sleep(50);
				alphabet('l', 74, 54);
				Sleep(50);
				alphabet('a', 79, 54);
				Sleep(50);
				alphabet('r', 88, 55);
				Sleep(50);

				alphabet('b', 101, 54);
				Sleep(50);
				alphabet('e', 110, 54);
				Sleep(50);
				alphabet('a', 121, 54);
				Sleep(50);
				alphabet('m', 130, 55);
				Sleep(50);

			}
			break;
		case 10:
			if (your_POKEMONLV <= 8) {
				damage1 = 40;

				//tackle
				alphabet('t', 58, 54);
				Sleep(50);
				alphabet('a', 65, 54);
				Sleep(50);
				alphabet('c', 74, 55);
				Sleep(50);
				alphabet('k', 83, 54);
				Sleep(50);
				alphabet('l', 90, 54);
				Sleep(50);
				alphabet('e', 95, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV > 8) {
				damage1 = 40;

				//twister
				alphabet('t', 58, 54);
				Sleep(50);
				alphabet('w', 65, 56);
				Sleep(50);
				alphabet('i', 76, 54);
				Sleep(50);
				alphabet('s', 79, 54);
				Sleep(50);
				alphabet('t', 86, 54);
				Sleep(50);
				alphabet('e', 93, 54);
				Sleep(50);
				alphabet('r', 104, 55);
				Sleep(50);

			}
			break;
		case 11:
			if (your_POKEMONLV <= 26) {
				damage1 = 60;

				//wing attack
				alphabet('w', 58, 56);
				Sleep(50);
				alphabet('i', 69, 54);
				Sleep(50);
				alphabet('n', 72, 55);
				Sleep(50);
				alphabet('g', 83, 54);
				Sleep(50);

				alphabet('a', 96, 54);
				Sleep(50);
				alphabet('t', 105, 54);
				Sleep(50);
				alphabet('t', 112, 54);
				Sleep(50);
				alphabet('a', 119, 54);
				Sleep(50);
				alphabet('c', 128, 55);
				Sleep(50);
				alphabet('k', 137, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 35) {
				damage1 = 75;

				//air slash
				alphabet('a', 58, 54);
				Sleep(50);
				alphabet('i', 67, 54);
				Sleep(50);
				alphabet('r', 70, 55);
				Sleep(50);

				alphabet('s', 83, 54);
				Sleep(50);
				alphabet('l', 90, 54);
				Sleep(50);
				alphabet('a', 95, 54);
				Sleep(50);
				alphabet('s', 104, 54);
				Sleep(50);
				alphabet('h', 111, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 110;

				//hurricane
				alphabet('h', 58, 54);
				Sleep(50);
				alphabet('u', 67, 56);
				Sleep(50);
				alphabet('r', 76, 55);
				Sleep(50);
				alphabet('r', 85, 55);
				Sleep(50);
				alphabet('i', 94, 54);
				Sleep(50);
				alphabet('c', 97, 55);
				Sleep(50);
				alphabet('a', 106, 54);
				Sleep(50);
				alphabet('n', 115, 55);
				Sleep(50);
				alphabet('e', 126, 54);
				Sleep(50);
			}
			break;
		case 12:
			if (your_POKEMONLV <= 8) {
				damage1 = 50;

				//rock throw
				alphabet('r', 58, 55);
				Sleep(50);
				alphabet('o', 67, 55);
				Sleep(50);
				alphabet('c', 76, 55);
				Sleep(50);
				alphabet('k', 85, 54);
				Sleep(50);

				alphabet('t', 96, 54);
				Sleep(50);
				alphabet('h', 103, 54);
				Sleep(50);
				alphabet('r', 112, 55);
				Sleep(50);
				alphabet('o', 121, 55);
				Sleep(50);
				alphabet('w', 130, 56);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 20) {
				damage1 = 55;

				//rock slide
				alphabet('r', 58, 55);
				Sleep(50);
				alphabet('o', 67, 55);
				Sleep(50);
				alphabet('c', 76, 55);
				Sleep(50);
				alphabet('k', 85, 54);
				Sleep(50);

				alphabet('s', 96, 54);
				Sleep(50);
				alphabet('l', 103, 54);
				Sleep(50);
				alphabet('i', 108, 54);
				Sleep(50);
				alphabet('d', 111, 54);
				Sleep(50);
				alphabet('e', 120, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 30) {
				damage1 = 75;

				//iron tale
				alphabet('i', 58, 54);
				Sleep(50);
				alphabet('r', 61, 55);
				Sleep(50);
				alphabet('o', 70, 55);
				Sleep(50);
				alphabet('n', 79, 55);
				Sleep(50);

				alphabet('t', 94, 54);
				Sleep(50);
				alphabet('a', 101, 54);
				Sleep(50);
				alphabet('l', 110, 54);
				Sleep(50);
				alphabet('e', 115, 54);
				Sleep(50);
			}
			break;
		case 13:
			if (your_POKEMONLV <= 50) {
				damage1 = 100;

				//stone edge
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('t', 65, 54);
				Sleep(50);
				alphabet('o', 72, 55);
				Sleep(50);
				alphabet('n', 81, 55);
				Sleep(50);
				alphabet('e', 92, 54);
				Sleep(50);

				alphabet('e', 107, 54);
				Sleep(50);
				alphabet('d', 118, 54);
				Sleep(50);
				alphabet('g', 127, 54);
				Sleep(50);
				alphabet('e', 136, 54);
				Sleep(50);
			}
			break;
		case 14:
			if (your_POKEMONLV <= 12) {
				damage1 = 65;

				//low sweep
				alphabet('l', 58, 54);
				Sleep(50);
				alphabet('o', 63, 55);
				Sleep(50);
				alphabet('w', 72, 56);
				Sleep(50);

				alphabet('s', 87, 54);
				Sleep(50);
				alphabet('l', 84, 54);
				Sleep(50);
				alphabet('e', 89, 54);
				Sleep(50);
				alphabet('e', 100, 54);
				Sleep(50);
				alphabet('p', 111, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 24) {
				damage1 = 80;

				//strength
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('t', 65, 54);
				Sleep(50);
				alphabet('r', 72, 55);
				Sleep(50);
				alphabet('e', 81, 54);
				Sleep(50);
				alphabet('n', 92, 55);
				Sleep(50);
				alphabet('g', 103, 54);
				Sleep(50);
				alphabet('t', 112, 54);
				Sleep(50);
				alphabet('h', 119, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 30) {

				damage1 = 80;

				//mega punch
				alphabet('m', 58, 55);
				Sleep(50);
				alphabet('e', 69, 54);
				Sleep(50);
				alphabet('g', 80, 54);
				Sleep(50);
				alphabet('a', 89, 54);
				Sleep(50);

				alphabet('p', 102, 54);
				Sleep(50);
				alphabet('u', 109, 56);
				Sleep(50);
				alphabet('n', 118, 55);
				Sleep(50);
				alphabet('c', 129, 55);
				Sleep(50);
				alphabet('h', 138, 54);
				Sleep(50);
			}
			break;
		case 15:
			if (your_POKEMONLV <= 50) {
				damage1 = 120;

				//superpower
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('u', 65, 56);
				Sleep(50);
				alphabet('p', 74, 54);
				Sleep(50);
				alphabet('e', 81, 54);
				Sleep(50);
				alphabet('r', 92, 55);
				Sleep(50);
				alphabet('p', 101, 54);
				Sleep(50);
				alphabet('o', 108, 55);
				Sleep(50);
				alphabet('w', 117, 56);
				Sleep(50);
				alphabet('e', 128, 54);
				Sleep(50);
				alphabet('r', 139, 55);
				Sleep(50);
			}
			break;
		case 16:
			if (your_POKEMONLV <= 8) {
				damage1 = 40;

				//ice shard
				alphabet('i', 58, 54);
				Sleep(50);
				alphabet('c', 61, 55);
				Sleep(50);
				alphabet('e', 70, 54);
				Sleep(50);

				alphabet('s', 85, 54);
				Sleep(50);
				alphabet('h', 92, 54);
				Sleep(50);
				alphabet('a', 101, 54);
				Sleep(50);
				alphabet('r', 110, 55);
				Sleep(50);
				alphabet('d', 119, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 20) {
				damage1 = 40;

				//water gun
				alphabet('w', 58, 56);
				Sleep(50);
				alphabet('a', 69, 54);
				Sleep(50);
				alphabet('t', 78, 54);
				Sleep(50);
				alphabet('e', 85, 54);
				Sleep(50);
				alphabet('r', 96, 55);
				Sleep(50);

				alphabet('g', 109, 54);
				Sleep(50);
				alphabet('u', 118, 56);
				Sleep(50);
				alphabet('n', 127, 55);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 36) {
				damage1 = 95;

				//ice beam
				alphabet('i', 58, 54);
				Sleep(50);
				alphabet('c', 61, 55);
				Sleep(50);
				alphabet('e', 70, 54);
				Sleep(50);

				alphabet('b', 85, 54);
				Sleep(50);
				alphabet('e', 94, 54);
				Sleep(50);
				alphabet('a', 105, 54);
				Sleep(50);
				alphabet('m', 114, 55);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 110;

				//hydro pump
				alphabet('h', 58, 54);
				Sleep(50);
				alphabet('y', 67, 55);
				Sleep(50);
				alphabet('d', 76, 54);
				Sleep(50);
				alphabet('r', 85, 55);
				Sleep(50);
				alphabet('o', 94, 55);
				Sleep(50);

				alphabet('p', 107, 54);
				Sleep(50);
				alphabet('u', 114, 56);
				Sleep(50);
				alphabet('m', 123, 55);
				Sleep(50);
				alphabet('p', 134, 54);
				Sleep(50);
			}
			break;
		case 17:
			if (your_POKEMONLV <= 20) {
				damage1 = your_POKEMONLV * 3;

				//night head
				alphabet('n', 58, 55);
				Sleep(50);
				alphabet('i', 69, 54);
				Sleep(50);
				alphabet('g', 72, 54);
				Sleep(50);
				alphabet('h', 81, 54);
				Sleep(50);
				alphabet('t', 90, 54);
				Sleep(50);

				alphabet('h', 101, 54);
				Sleep(50);
				alphabet('e', 110, 54);
				Sleep(50);
				alphabet('a', 121, 54);
				Sleep(50);
				alphabet('d', 130, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 40) {
				damage1 = 80;

				//dark pulswe
				alphabet('d', 58, 54);
				Sleep(50);
				alphabet('a', 67, 54);
				Sleep(50);
				alphabet('r', 76, 55);
				Sleep(50);
				alphabet('k', 85, 54);
				Sleep(50);

				alphabet('p', 96, 54);
				Sleep(50);
				alphabet('u', 103, 56);
				Sleep(50);
				alphabet('l', 112, 54);
				Sleep(50);
				alphabet('s', 117, 54);
				Sleep(50);
				alphabet('e', 124, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 95;

				//holo play
				alphabet('h', 58, 54);
				Sleep(50);
				alphabet('o', 67, 55);
				Sleep(50);
				alphabet('l', 76, 54);
				Sleep(50);
				alphabet('o', 81, 55);
				Sleep(50);

				alphabet('p', 94, 54);
				Sleep(50);
				alphabet('l', 101, 54);
				Sleep(50);
				alphabet('a', 106, 54);
				Sleep(50);
				alphabet('y', 115, 55);
				Sleep(50);
			}
			break;
		case 18:
			if (your_POKEMONLV <= 20) {
				damage1 = 60;

				//bite
				alphabet('b', 58, 54);
				Sleep(50);
				alphabet('i', 67, 54);
				Sleep(50);
				alphabet('t', 70, 54);
				Sleep(50);
				alphabet('e', 77, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 36) {
				damage1 = 80;

				//dark pulswe
				alphabet('d', 58, 54);
				Sleep(50);
				alphabet('a', 67, 54);
				Sleep(50);
				alphabet('r', 76, 55);
				Sleep(50);
				alphabet('k', 85, 54);
				Sleep(50);

				alphabet('p', 96, 54);
				Sleep(50);
				alphabet('u', 103, 56);
				Sleep(50);
				alphabet('l', 112, 54);
				Sleep(50);
				alphabet('s', 117, 54);
				Sleep(50);
				alphabet('e', 124, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 120;

				//gunk shot
				alphabet('g', 58, 54);
				Sleep(50);
				alphabet('u', 67, 56);
				Sleep(50);
				alphabet('n', 76, 55);
				Sleep(50);
				alphabet('k', 87, 54);
				Sleep(50);

				alphabet('s', 98, 54);
				Sleep(50);
				alphabet('h', 105, 54);
				Sleep(50);
				alphabet('o', 114, 55);
				Sleep(50);
				alphabet('t', 123, 54);
				Sleep(50);
			}
			break;
		case 19:
			if (your_POKEMONLV <= 20) {
				damage1 = 55;

				//rock slide
				alphabet('r', 58, 55);
				Sleep(50);
				alphabet('o', 67, 55);
				Sleep(50);
				alphabet('c', 76, 55);
				Sleep(50);
				alphabet('k', 85, 54);
				Sleep(50);

				alphabet('s', 96, 54);
				Sleep(50);
				alphabet('l', 103, 54);
				Sleep(50);
				alphabet('i', 108, 54);
				Sleep(50);
				alphabet('d', 111, 54);
				Sleep(50);
				alphabet('e', 120, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 36) {
				damage1 = 100;

				//crossc chop
				alphabet('c', 58, 55);
				Sleep(50);
				alphabet('r', 67, 55);
				Sleep(50);
				alphabet('o', 76, 55);
				Sleep(50);
				alphabet('s', 85, 54);
				Sleep(50);
				alphabet('s', 92, 54);
				Sleep(50);

				alphabet('c', 103, 55);
				Sleep(50);
				alphabet('h', 112, 54);
				Sleep(50);
				alphabet('o', 121, 55);
				Sleep(50);
				alphabet('p', 130, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 120;

				//superpower
				alphabet('s', 58, 54);
				Sleep(50);
				alphabet('u', 65, 56);
				Sleep(50);
				alphabet('p', 74, 54);
				Sleep(50);
				alphabet('e', 81, 54);
				Sleep(50);
				alphabet('r', 92, 55);
				Sleep(50);
				alphabet('p', 101, 54);
				Sleep(50);
				alphabet('o', 108, 55);
				Sleep(50);
				alphabet('w', 117, 56);
				Sleep(50);
				alphabet('e', 128, 54);
				Sleep(50);
				alphabet('r', 139, 55);
				Sleep(50);
			}
			break;
		case 20:
			if (your_POKEMONLV <= 20) {
				damage1 = 65;

				//venoshock
				alphabet('v', 58, 56);
				Sleep(50);
				alphabet('e', 65, 54);
				Sleep(50);
				alphabet('n', 76, 55);
				Sleep(50);
				alphabet('o', 87, 55);
				Sleep(50);
				alphabet('s', 96, 54);
				Sleep(50);
				alphabet('h', 103, 54);
				Sleep(50);
				alphabet('o', 112, 55);
				Sleep(50);
				alphabet('c', 121, 55);
				Sleep(50);
				alphabet('k', 130, 54);
				Sleep(50);

			}
			else if (your_POKEMONLV <= 36) {
				damage1 = 80;

				//dark pulswe
				alphabet('d', 58, 54);
				Sleep(50);
				alphabet('a', 67, 54);
				Sleep(50);
				alphabet('r', 76, 55);
				Sleep(50);
				alphabet('k', 85, 54);
				Sleep(50);

				alphabet('p', 96, 54);
				Sleep(50);
				alphabet('u', 103, 56);
				Sleep(50);
				alphabet('l', 112, 54);
				Sleep(50);
				alphabet('s', 115, 54);
				Sleep(50);
				alphabet('e', 122, 54);
				Sleep(50);
			}
			else if (your_POKEMONLV <= 50) {
				damage1 = 120;

				//gunk shot
				alphabet('g', 58, 54);
				Sleep(50);
				alphabet('u', 67, 56);
				Sleep(50);
				alphabet('n', 76, 55);
				Sleep(50);
				alphabet('k', 87, 54);
				Sleep(50);

				alphabet('s', 98, 54);
				Sleep(50);
				alphabet('h', 105, 54);
				Sleep(50);
				alphabet('o', 114, 55);
				Sleep(50);
				alphabet('t', 123, 54);
				Sleep(50);
			}
			break;
		case 22:
			damage1 = 150;

			alphabet('j', 58, 54);
			Sleep(50);
			alphabet('u', 65, 56);
			Sleep(50);
			alphabet('d', 74, 54);
			Sleep(50);
			alphabet('g', 83, 54);
			Sleep(50);
			alphabet('e', 92, 54);
			Sleep(50);
			alphabet('m', 103, 55);
			Sleep(50);
			alphabet('e', 114, 54);
			Sleep(50);
			alphabet('n', 125, 55);
			Sleep(50);
			alphabet('t', 136, 54);
			Sleep(50);
			break;
		}

		current_hp1 = hp;

		hp -= (damage1 * ((your_POKEMONLV / 5 + 4) * critical * attack1 / 20 + 2) / defense1 / 50) * random_damage;
		hp = (int)(hp + 0.5);
		hp += down_damage;
		if (hp == current_hp1)
			hp = current_hp1 - 1;

		if (hp != current_hp1) {
			gotoxy(186, 34);
			printf("  ");
		}
		for (; hp < current_hp1; current_hp1--) {
			if (current_hp1 >= 0) {
				for (int j = 0; j < 3; j++) {
					gotoxy(current_hp1 + 110, 33 + j);
					printf(" ");
				}
			}
			if (current_hp1 == 1) {
				for (int i = 0; i < 3; i++) {
					gotoxy(110, 33 + i);
					printf(" ");
				}
				gotoxy(109, 34);
				printf(" ");
				Sleep(50);
				gotoxy(108, 34);
				printf(" ");
				break;
			}
			Sleep(50);
		}

		if (critical == 1.5) {
			delete_speech_bubble();

			//critical hit
			alphabet('c', 18, 49);
			Sleep(50);
			alphabet('r', 27, 49);
			Sleep(50);
			alphabet('i', 36, 48);
			Sleep(50);
			alphabet('t', 39, 48);
			Sleep(50);
			alphabet('i', 46, 48);
			Sleep(50);
			alphabet('c', 49, 49);
			Sleep(50);
			alphabet('a', 58, 48);
			Sleep(50);
			alphabet('l', 67, 48);
			Sleep(50);

			alphabet('h', 76, 48);
			Sleep(50);
			alphabet('i', 85, 48);
			Sleep(50);
			alphabet('t', 88, 48);
			Sleep(50);
			alphabet('!', 96, 48);
		}

		twinkle_button();
		delete_speech_bubble();

		if (hp <= 0)
			goto end;

		if (speed == 1) {
			critical = 1;
			goto turn;
		}
	}

end:

	if (hp1 <= 0) {
		hp1 = 75;
		hp = 75;

		//Enemy fainted
		alphabet('E', 18, 48);
		Sleep(50);
		alphabet('n', 27, 49);
		Sleep(50);
		alphabet('e', 38, 48);
		Sleep(50);
		alphabet('m', 49, 49);
		Sleep(50);
		alphabet('y', 60, 49);
		Sleep(50);

		alphabet('f', 74, 48);
		Sleep(50);
		alphabet('a', 81, 48);
		Sleep(50);
		alphabet('i', 90, 48);
		Sleep(50);
		alphabet('n', 93, 49);
		Sleep(50);
		alphabet('t', 104, 48);
		Sleep(50);
		alphabet('e', 111, 48);
		Sleep(50);
		alphabet('d', 121, 48);
		Sleep(50);
		alphabet('!', 131, 48);

		twinkle_button();
		delete_speech_bubble();
		for (int i = 1; i < 50; i++) {
			if (your_POKEMONLV == i) {
				break;
			}
			cnt++;
		}
		POKEMON_EXP[mine] += 650 * cnt + add_EXP;
		if (POKEMON_LV[mine] * 100 <= POKEMON_EXP[mine] && POKEMON_LV[mine] < 50) {
			while (POKEMON_LV[mine] * 100 < POKEMON_EXP[mine] && POKEMON_LV[mine] < 50) {
				POKEMON_LV[mine]++;
				POKEMON_EXP[mine] -= POKEMON_LV[mine] * 100;

				//level up!
				alphabet('l', 18, 48);
				Sleep(50);
				alphabet('e', 23, 48);
				Sleep(50);
				alphabet('V', 34, 48);
				Sleep(50);
				alphabet('e', 45, 48);
				Sleep(50);
				alphabet('l', 56, 48);
				Sleep(50);

				alphabet('u', 65, 50);
				Sleep(50);
				alphabet('p', 74, 48);
				Sleep(50);
				alphabet('!', 82, 48);
				Sleep(50);

				twinkle_button();
				delete_speech_bubble();

				//파이리 ember스킬 배우기
				if (POKEMON_LV[mine] == 8 && mine == 1) {
					skill[2] = 3;
					delete_speech_bubble();

					//Pyree learned
					alphabet('P', 18, 48);
					Sleep(50);
					alphabet('y', 27, 49);
					Sleep(50);
					alphabet('r', 36, 49);
					Sleep(50);
					alphabet('e', 45, 48);
					Sleep(50);
					alphabet('e', 56, 48);
					Sleep(50);

					alphabet('l', 71, 48);
					Sleep(50);
					alphabet('e', 76, 48);
					Sleep(50);
					alphabet('a', 87, 48);
					Sleep(50);
					alphabet('r', 96, 49);
					Sleep(50);
					alphabet('n', 105, 49);
					Sleep(50);
					alphabet('e', 116, 48);
					Sleep(50);
					alphabet('d', 127, 48);
					Sleep(50);

					//ember!
					alphabet('e', 18, 54);
					Sleep(50);
					alphabet('m', 29, 55);
					Sleep(50);
					alphabet('b', 40, 54);
					Sleep(50);
					alphabet('e', 49, 54);
					Sleep(50);
					alphabet('r', 60, 55);
					Sleep(50);
					alphabet('!', 70, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();
				}

				//파이리 fire fang스킬 배우기
				if (POKEMON_LV[mine] == 15 && mine == 1) {
					skill[3] = 4;
					delete_speech_bubble();

					//Pyree learned
					alphabet('P', 18, 48);
					Sleep(50);
					alphabet('y', 27, 49);
					Sleep(50);
					alphabet('r', 36, 49);
					Sleep(50);
					alphabet('e', 45, 48);
					Sleep(50);
					alphabet('e', 56, 48);
					Sleep(50);

					alphabet('l', 71, 48);
					Sleep(50);
					alphabet('e', 76, 48);
					Sleep(50);
					alphabet('a', 87, 48);
					Sleep(50);
					alphabet('r', 96, 49);
					Sleep(50);
					alphabet('n', 105, 49);
					Sleep(50);
					alphabet('e', 116, 48);
					Sleep(50);
					alphabet('d', 127, 48);
					Sleep(50);

					//fire fang!
					alphabet('f', 18, 54);
					Sleep(50);
					alphabet('i', 25, 54);
					Sleep(50);
					alphabet('r', 28, 55);
					Sleep(50);
					alphabet('e', 37, 54);
					Sleep(50);

					alphabet('f', 52, 54);
					Sleep(50);
					alphabet('a', 59, 54);
					Sleep(50);
					alphabet('n', 68, 55);
					Sleep(50);
					alphabet('g', 79, 54);
					Sleep(50);
					alphabet('!', 89, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();
				}

				//리자드 slash스킬 배우기
				if (POKEMON_LV[mine] == 26 && mine == 4) {
					delete_speech_bubble();

					//Rizard learned
					alphabet('R', 18, 48);
					Sleep(50);
					alphabet('i', 27, 48);
					Sleep(50);
					alphabet('z', 30, 49);
					Sleep(50);
					alphabet('a', 39, 48);
					Sleep(50);
					alphabet('r', 48, 49);
					Sleep(50);
					alphabet('d', 57, 48);
					Sleep(50);

					alphabet('l', 70, 48);
					Sleep(50);
					alphabet('e', 75, 48);
					Sleep(50);
					alphabet('a', 86, 48);
					Sleep(50);
					alphabet('r', 95, 49);
					Sleep(50);
					alphabet('n', 104, 49);
					Sleep(50);
					alphabet('e', 115, 48);
					Sleep(50);
					alphabet('d', 126, 48);
					Sleep(50);

					//slash!
					alphabet('s', 18, 54);
					Sleep(50);
					alphabet('l', 25, 54);
					Sleep(50);
					alphabet('a', 30, 54);
					Sleep(50);
					alphabet('s', 39, 54);
					Sleep(50);
					alphabet('h', 46, 54);
					Sleep(50);
					alphabet('!', 56, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Rizard 
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('R', 47, 48);
					Sleep(50);
					alphabet('i', 56, 48);
					Sleep(50);
					alphabet('z', 59, 49);
					Sleep(50);
					alphabet('a', 68, 48);
					Sleep(50);
					alphabet('r', 77, 49);
					Sleep(50);
					alphabet('d', 86, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[4] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[4] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[4] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[4] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}

				}

				//리자드 fire spin스킬 배우기
				if (POKEMON_LV[mine] == 34 && mine == 4) {
					delete_speech_bubble();

					//Rizard learned
					alphabet('R', 18, 48);
					Sleep(50);
					alphabet('i', 27, 48);
					Sleep(50);
					alphabet('z', 30, 49);
					Sleep(50);
					alphabet('a', 39, 48);
					Sleep(50);
					alphabet('r', 48, 49);
					Sleep(50);
					alphabet('d', 57, 48);
					Sleep(50);

					alphabet('l', 70, 48);
					Sleep(50);
					alphabet('e', 75, 48);
					Sleep(50);
					alphabet('a', 86, 48);
					Sleep(50);
					alphabet('r', 95, 49);
					Sleep(50);
					alphabet('n', 104, 49);
					Sleep(50);
					alphabet('e', 115, 48);
					Sleep(50);
					alphabet('d', 126, 48);
					Sleep(50);

					//fire spin!
					alphabet('f', 18, 54);
					Sleep(50);
					alphabet('i', 25, 54);
					Sleep(50);
					alphabet('r', 28, 55);
					Sleep(50);
					alphabet('e', 37, 54);
					Sleep(50);

					alphabet('s', 48, 54);
					Sleep(50);
					alphabet('p', 55, 54);
					Sleep(50);
					alphabet('i', 62, 54);
					Sleep(50);
					alphabet('n', 65, 55);
					Sleep(50);
					alphabet('!', 77, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Rizard 
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('R', 47, 48);
					Sleep(50);
					alphabet('i', 56, 48);
					Sleep(50);
					alphabet('z', 59, 49);
					Sleep(50);
					alphabet('a', 68, 48);
					Sleep(50);
					alphabet('r', 77, 49);
					Sleep(50);
					alphabet('d', 86, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[5] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[5] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[5] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[5] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//리자몽 inferno스킬 배우기
				if (POKEMON_LV[mine] == 40 && mine == 7) {
					delete_speech_bubble();

					//Rizamong learned
					alphabet('R', 18, 48);
					Sleep(50);
					alphabet('i', 27, 48);
					Sleep(50);
					alphabet('z', 30, 49);
					Sleep(50);
					alphabet('a', 39, 48);
					Sleep(50);
					alphabet('m', 48, 49);
					Sleep(50);
					alphabet('o', 59, 49);
					Sleep(50);
					alphabet('n', 68, 49);
					Sleep(50);
					alphabet('g', 79, 48);
					Sleep(50);

					alphabet('l', 92, 48);
					Sleep(50);
					alphabet('e', 97, 48);
					Sleep(50);
					alphabet('a', 108, 48);
					Sleep(50);
					alphabet('r', 117, 49);
					Sleep(50);
					alphabet('n', 126, 49);
					Sleep(50);
					alphabet('e', 137, 48);
					Sleep(50);
					alphabet('d', 148, 48);
					Sleep(50);

					//inferno!
					alphabet('i', 18, 54);
					Sleep(50);
					alphabet('n', 21, 55);
					Sleep(50);
					alphabet('f', 32, 54);
					Sleep(50);
					alphabet('e', 39, 54);
					Sleep(50);
					alphabet('r', 50, 55);
					Sleep(50);
					alphabet('n', 59, 55);
					Sleep(50);
					alphabet('o', 70, 55);
					Sleep(50);
					alphabet('!', 80, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Rizamong
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('R', 47, 48);
					Sleep(50);
					alphabet('i', 56, 48);
					Sleep(50);
					alphabet('z', 59, 49);
					Sleep(50);
					alphabet('a', 68, 48);
					Sleep(50);
					alphabet('m', 77, 49);
					Sleep(50);
					alphabet('o', 88, 49);
					Sleep(50);
					alphabet('n', 97, 49);
					Sleep(50);
					alphabet('g', 108, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[6] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[6] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[6] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[6] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//리자몽 outrage스킬 배우기
				if (POKEMON_LV[mine] == 46 && mine == 7) {
					delete_speech_bubble();

					//Rizamong learned
					alphabet('R', 18, 48);
					Sleep(50);
					alphabet('i', 27, 48);
					Sleep(50);
					alphabet('z', 30, 49);
					Sleep(50);
					alphabet('a', 39, 48);
					Sleep(50);
					alphabet('m', 48, 49);
					Sleep(50);
					alphabet('o', 59, 49);
					Sleep(50);
					alphabet('n', 68, 49);
					Sleep(50);
					alphabet('g', 79, 48);
					Sleep(50);

					alphabet('l', 92, 48);
					Sleep(50);
					alphabet('e', 97, 48);
					Sleep(50);
					alphabet('a', 108, 48);
					Sleep(50);
					alphabet('r', 117, 49);
					Sleep(50);
					alphabet('n', 126, 49);
					Sleep(50);
					alphabet('e', 137, 48);
					Sleep(50);
					alphabet('d', 148, 48);
					Sleep(50);

					//outrage!
					alphabet('o', 18, 55);
					Sleep(50);
					alphabet('u', 27, 56);
					Sleep(50);
					alphabet('t', 36, 54);
					Sleep(50);
					alphabet('r', 43, 55);
					Sleep(50);
					alphabet('a', 52, 54);
					Sleep(50);
					alphabet('g', 61, 54);
					Sleep(50);
					alphabet('e', 70, 54);
					Sleep(50);
					alphabet('!', 82, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Rizamong
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('R', 47, 48);
					Sleep(50);
					alphabet('i', 56, 48);
					Sleep(50);
					alphabet('z', 59, 49);
					Sleep(50);
					alphabet('a', 68, 48);
					Sleep(50);
					alphabet('m', 77, 49);
					Sleep(50);
					alphabet('o', 88, 49);
					Sleep(50);
					alphabet('n', 97, 49);
					Sleep(50);
					alphabet('g', 108, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[7] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[7] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[7] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[7] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//꼬부기 tackle스킬 배우기
				if (POKEMON_LV[mine] == 8 && (mine == 2 || mine == 3)) {
					skill[8] = 3;
					delete_speech_bubble();
					if (mine == 2) {
						//Twist learned
						alphabet('T', 18, 48);
						Sleep(50);
						alphabet('w', 25, 50);
						Sleep(50);
						alphabet('i', 36, 48);
						Sleep(50);
						alphabet('s', 39, 48);
						Sleep(50);
						alphabet('t', 46, 48);
						Sleep(50);

						alphabet('l', 57, 48);
						Sleep(50);
						alphabet('e', 62, 48);
						Sleep(50);
						alphabet('a', 73, 48);
						Sleep(50);
						alphabet('r', 82, 49);
						Sleep(50);
						alphabet('n', 91, 49);
						Sleep(50);
						alphabet('e', 102, 48);
						Sleep(50);
						alphabet('d', 113, 48);
						Sleep(50);
					}
					else {
						alphabet('B', 18, 48);
						Sleep(50);
						alphabet('u', 27, 50);
						Sleep(50);
						alphabet('l', 36, 48);
						Sleep(50);
						alphabet('b', 41, 48);
						Sleep(50);
						alphabet('a', 50, 48);
						Sleep(50);
						alphabet('s', 59, 48);
						Sleep(50);
						alphabet('a', 66, 48);
						Sleep(50);
						alphabet('u', 75, 50);
						Sleep(50);
						alphabet('r', 84, 49);
						Sleep(50);

						alphabet('l', 97, 48);
						Sleep(50);
						alphabet('e', 102, 48);
						Sleep(50);
						alphabet('a', 113, 48);
						Sleep(50);
						alphabet('r', 122, 49);
						Sleep(50);
						alphabet('n', 131, 49);
						Sleep(50);
						alphabet('e', 142, 48);
						Sleep(50);
						alphabet('d', 153, 48);
						Sleep(50);
					}
					//tackle
					alphabet('t', 18, 54);
					Sleep(50);
					alphabet('a', 25, 54);
					Sleep(50);
					alphabet('c', 34, 55);
					Sleep(50);
					alphabet('k', 43, 54);
					Sleep(50);
					alphabet('l', 50, 54);
					Sleep(50);
					alphabet('e', 55, 54);
					Sleep(50);
				}

				//꼬부기 water gun스킬 배우기
				if (POKEMON_LV[mine] == 15 && mine == 2) {
					skill[9] = 4;
					delete_speech_bubble();

					//Twist learned
					alphabet('T', 18, 48);
					Sleep(50);
					alphabet('w', 25, 50);
					Sleep(50);
					alphabet('i', 36, 48);
					Sleep(50);
					alphabet('s', 39, 48);
					Sleep(50);
					alphabet('t', 46, 48);
					Sleep(50);

					alphabet('l', 57, 48);
					Sleep(50);
					alphabet('e', 62, 48);
					Sleep(50);
					alphabet('a', 73, 48);
					Sleep(50);
					alphabet('r', 82, 49);
					Sleep(50);
					alphabet('n', 91, 49);
					Sleep(50);
					alphabet('e', 102, 48);
					Sleep(50);
					alphabet('d', 113, 48);
					Sleep(50);

					//water gun
					alphabet('w', 18, 56);
					Sleep(50);
					alphabet('a', 29, 54);
					Sleep(50);
					alphabet('t', 38, 54);
					Sleep(50);
					alphabet('e', 45, 54);
					Sleep(50);
					alphabet('r', 56, 55);
					Sleep(50);

					alphabet('g', 69, 54);
					Sleep(50);
					alphabet('u', 78, 56);
					Sleep(50);
					alphabet('n', 87, 55);
					Sleep(50);
				}

				//어니부기 scald스킬 배우기
				if (POKEMON_LV[mine] == 26 && mine == 5) {
					delete_speech_bubble();

					//Wartortle learned
					alphabet('W', 18, 48);
					Sleep(50);
					alphabet('a', 29, 48);
					Sleep(50);
					alphabet('r', 38, 49);
					Sleep(50);
					alphabet('t', 47, 48);
					Sleep(50);
					alphabet('o', 54, 49);
					Sleep(50);
					alphabet('r', 63, 49);
					Sleep(50);
					alphabet('t', 72, 48);
					Sleep(50);
					alphabet('l', 79, 48);
					Sleep(50);
					alphabet('e', 84, 48);
					Sleep(50);

					alphabet('l', 99, 48);
					Sleep(50);
					alphabet('e', 104, 48);
					Sleep(50);
					alphabet('a', 115, 48);
					Sleep(50);
					alphabet('r', 124, 49);
					Sleep(50);
					alphabet('n', 133, 49);
					Sleep(50);
					alphabet('e', 144, 48);
					Sleep(50);
					alphabet('d', 155, 48);
					Sleep(50);

					//scald
					alphabet('s', 18, 54);
					Sleep(50);
					alphabet('c', 25, 55);
					Sleep(50);
					alphabet('a', 34, 54);
					Sleep(50);
					alphabet('l', 43, 54);
					Sleep(50);
					alphabet('d', 48, 54);
					Sleep(50);
					alphabet('!', 58, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Wartortle
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('W', 47, 48);
					Sleep(50);
					alphabet('a', 58, 48);
					Sleep(50);
					alphabet('r', 67, 49);
					Sleep(50);
					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('o', 83, 49);
					Sleep(50);
					alphabet('r', 92, 49);
					Sleep(50);
					alphabet('t', 101, 48);
					Sleep(50);
					alphabet('l', 108, 48);
					Sleep(50);
					alphabet('e', 113, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[10] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[10] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[10] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[10] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//어니부기 aqua tail스킬 배우기
				if (POKEMON_LV[mine] == 34 && mine == 5) {
					delete_speech_bubble();

					//Wartortle learned
					alphabet('W', 18, 48);
					Sleep(50);
					alphabet('a', 29, 48);
					Sleep(50);
					alphabet('r', 38, 49);
					Sleep(50);
					alphabet('t', 47, 48);
					Sleep(50);
					alphabet('o', 54, 49);
					Sleep(50);
					alphabet('r', 63, 49);
					Sleep(50);
					alphabet('t', 72, 48);
					Sleep(50);
					alphabet('l', 79, 48);
					Sleep(50);
					alphabet('e', 84, 48);
					Sleep(50);

					alphabet('l', 99, 48);
					Sleep(50);
					alphabet('e', 104, 48);
					Sleep(50);
					alphabet('a', 115, 48);
					Sleep(50);
					alphabet('r', 124, 49);
					Sleep(50);
					alphabet('n', 133, 49);
					Sleep(50);
					alphabet('e', 144, 48);
					Sleep(50);
					alphabet('d', 155, 48);
					Sleep(50);

					//aqua tail
					alphabet('a', 18, 48);
					Sleep(50);
					alphabet('q', 27, 48);
					Sleep(50);
					alphabet('u', 34, 50);
					Sleep(50);
					alphabet('a', 43, 48);
					Sleep(50);

					alphabet('t', 56, 48);
					Sleep(50);
					alphabet('a', 63, 48);
					Sleep(50);
					alphabet('i', 72, 48);
					Sleep(50);
					alphabet('l', 75, 48);
					Sleep(50);
					alphabet('!', 81, 48);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Wartortle
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('W', 47, 48);
					Sleep(50);
					alphabet('a', 58, 48);
					Sleep(50);
					alphabet('r', 67, 49);
					Sleep(50);
					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('o', 83, 49);
					Sleep(50);
					alphabet('r', 92, 49);
					Sleep(50);
					alphabet('t', 101, 48);
					Sleep(50);
					alphabet('l', 108, 48);
					Sleep(50);
					alphabet('e', 113, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[11] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[11] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[11] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[11] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//거북왕 surf스킬 배우기
				if (POKEMON_LV[mine] == 40 && mine == 8) {
					delete_speech_bubble();

					//Blastoise learned
					alphabet('B', 18, 48);
					Sleep(50);
					alphabet('l', 27, 48);
					Sleep(50);
					alphabet('a', 32, 48);
					Sleep(50);
					alphabet('s', 41, 48);
					Sleep(50);
					alphabet('t', 48, 48);
					Sleep(50);
					alphabet('o', 55, 49);
					Sleep(50);
					alphabet('i', 64, 48);
					Sleep(50);
					alphabet('s', 67, 48);
					Sleep(50);
					alphabet('e', 74, 48);
					Sleep(50);

					alphabet('l', 89, 48);
					Sleep(50);
					alphabet('e', 94, 48);
					Sleep(50);
					alphabet('a', 105, 48);
					Sleep(50);
					alphabet('r', 114, 49);
					Sleep(50);
					alphabet('n', 123, 49);
					Sleep(50);
					alphabet('e', 134, 48);
					Sleep(50);
					alphabet('d', 145, 48);
					Sleep(50);

					//surf!	
					alphabet('s', 18, 54);
					Sleep(50);
					alphabet('u', 25, 56);
					Sleep(50);
					alphabet('r', 34, 55);
					Sleep(50);
					alphabet('f', 43, 54);
					Sleep(50);
					alphabet('!', 61, 48);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Wartortle
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('B', 47, 48);
					Sleep(50);
					alphabet('l', 56, 48);
					Sleep(50);
					alphabet('a', 61, 48);
					Sleep(50);
					alphabet('s', 70, 48);
					Sleep(50);
					alphabet('t', 77, 48);
					Sleep(50);
					alphabet('o', 84, 49);
					Sleep(50);
					alphabet('i', 93, 48);
					Sleep(50);
					alphabet('s', 96, 48);
					Sleep(50);
					alphabet('e', 103, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[12] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[12] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[12] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[12] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//거북왕 hydro pump스킬 배우기
				if (POKEMON_LV[mine] == 46 && mine == 8) {
					delete_speech_bubble();

					//Blastoise learned
					alphabet('B', 18, 48);
					Sleep(50);
					alphabet('l', 27, 48);
					Sleep(50);
					alphabet('a', 32, 48);
					Sleep(50);
					alphabet('s', 41, 48);
					Sleep(50);
					alphabet('t', 48, 48);
					Sleep(50);
					alphabet('o', 55, 49);
					Sleep(50);
					alphabet('i', 64, 48);
					Sleep(50);
					alphabet('s', 67, 48);
					Sleep(50);
					alphabet('e', 74, 48);
					Sleep(50);

					alphabet('l', 89, 48);
					Sleep(50);
					alphabet('e', 94, 48);
					Sleep(50);
					alphabet('a', 105, 48);
					Sleep(50);
					alphabet('r', 114, 49);
					Sleep(50);
					alphabet('n', 123, 49);
					Sleep(50);
					alphabet('e', 134, 48);
					Sleep(50);
					alphabet('d', 145, 48);
					Sleep(50);

					//hydro pump
					alphabet('h', 18, 54);
					Sleep(50);
					alphabet('y', 27, 55);
					Sleep(50);
					alphabet('d', 36, 54);
					Sleep(50);
					alphabet('r', 45, 55);
					Sleep(50);
					alphabet('o', 54, 55);
					Sleep(50);

					alphabet('p', 67, 54);
					Sleep(50);
					alphabet('u', 74, 56);
					Sleep(50);
					alphabet('m', 83, 55);
					Sleep(50);
					alphabet('p', 94, 54);
					Sleep(50);
					alphabet('!', 102, 48);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Wartortle
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('B', 47, 48);
					Sleep(50);
					alphabet('l', 56, 48);
					Sleep(50);
					alphabet('a', 61, 48);
					Sleep(50);
					alphabet('s', 70, 48);
					Sleep(50);
					alphabet('t', 77, 48);
					Sleep(50);
					alphabet('o', 84, 49);
					Sleep(50);
					alphabet('i', 93, 48);
					Sleep(50);
					alphabet('s', 96, 48);
					Sleep(50);
					alphabet('e', 103, 48);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[13] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[13] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[13] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[13] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//이상해씨 vine whip스킬 배우기
				if (POKEMON_LV[mine] == 15 && mine == 3) {
					skill[14] = 4;
					delete_speech_bubble();

					//Bulbasaur learned
					alphabet('B', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('l', 36, 48);
					Sleep(50);
					alphabet('b', 41, 48);
					Sleep(50);
					alphabet('a', 50, 48);
					Sleep(50);
					alphabet('s', 59, 48);
					Sleep(50);
					alphabet('a', 66, 48);
					Sleep(50);
					alphabet('u', 75, 50);
					Sleep(50);
					alphabet('r', 84, 49);
					Sleep(50);

					alphabet('l', 97, 48);
					Sleep(50);
					alphabet('e', 102, 48);
					Sleep(50);
					alphabet('a', 113, 48);
					Sleep(50);
					alphabet('r', 122, 49);
					Sleep(50);
					alphabet('n', 131, 49);
					Sleep(50);
					alphabet('e', 142, 48);
					Sleep(50);
					alphabet('d', 153, 48);
					Sleep(50);

					//vine whip!
					alphabet('v', 18, 56);
					Sleep(50);
					alphabet('i', 25, 54);
					Sleep(50);
					alphabet('n', 28, 55);
					Sleep(50);
					alphabet('e', 39, 54);
					Sleep(50);

					alphabet('w', 54, 56);
					Sleep(50);
					alphabet('h', 65, 54);
					Sleep(50);
					alphabet('i', 74, 54);
					Sleep(50);
					alphabet('p', 77, 54);
					Sleep(50);
					alphabet('!', 85, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();
				}

				//이상해풀 razor leaf스킬 배우기
				if (POKEMON_LV[mine] == 26 && mine == 6) {
					delete_speech_bubble();

					//Ivysaur learned
					alphabet('I', 18, 48);
					Sleep(50);
					alphabet('v', 21, 50);
					Sleep(50);
					alphabet('y', 28, 49);
					Sleep(50);
					alphabet('s', 37, 48);
					Sleep(50);
					alphabet('a', 44, 48);
					Sleep(50);
					alphabet('u', 53, 50);
					Sleep(50);
					alphabet('r', 62, 49);
					Sleep(50);

					alphabet('l', 75, 48);
					Sleep(50);
					alphabet('e', 80, 48);
					Sleep(50);
					alphabet('a', 91, 48);
					Sleep(50);
					alphabet('r', 99, 49);
					Sleep(50);
					alphabet('n', 108, 49);
					Sleep(50);
					alphabet('e', 119, 48);
					Sleep(50);
					alphabet('d', 130, 48);
					Sleep(50);

					//razor leaf!
					alphabet('r', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('z', 36, 55);
					Sleep(50);
					alphabet('o', 45, 55);
					Sleep(50);
					alphabet('r', 54, 55);
					Sleep(50);

					alphabet('l', 67, 54);
					Sleep(50);
					alphabet('e', 72, 54);
					Sleep(50);
					alphabet('a', 83, 54);
					Sleep(50);
					alphabet('f', 92, 54);
					Sleep(50);
					alphabet('!', 100, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Ivysaur
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('I', 47, 54);
					Sleep(50);
					alphabet('v', 50, 56);
					Sleep(50);
					alphabet('y', 67, 55);
					Sleep(50);
					alphabet('s', 76, 54);
					Sleep(50);
					alphabet('a', 83, 54);
					Sleep(50);
					alphabet('u', 92, 56);
					Sleep(50);
					alphabet('r', 101, 55);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[15] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[15] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[15] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[15] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//이상해풀 seed bomb스킬 배우기
				if (POKEMON_LV[mine] == 34 && mine == 6) {
					delete_speech_bubble();

					//Ivysaur learned
					alphabet('I', 18, 48);
					Sleep(50);
					alphabet('v', 21, 50);
					Sleep(50);
					alphabet('y', 28, 49);
					Sleep(50);
					alphabet('s', 37, 48);
					Sleep(50);
					alphabet('a', 44, 48);
					Sleep(50);
					alphabet('u', 53, 50);
					Sleep(50);
					alphabet('r', 62, 49);
					Sleep(50);

					alphabet('l', 75, 48);
					Sleep(50);
					alphabet('e', 80, 48);
					Sleep(50);
					alphabet('a', 91, 48);
					Sleep(50);
					alphabet('r', 99, 49);
					Sleep(50);
					alphabet('n', 108, 49);
					Sleep(50);
					alphabet('e', 119, 48);
					Sleep(50);
					alphabet('d', 130, 48);
					Sleep(50);

					//seed bomb!
					alphabet('s', 18, 54);
					Sleep(50);
					alphabet('e', 25, 54);
					Sleep(50);
					alphabet('e', 36, 54);
					Sleep(50);
					alphabet('d', 47, 54);
					Sleep(50);

					alphabet('b', 60, 54);
					Sleep(50);
					alphabet('o', 69, 55);
					Sleep(50);
					alphabet('m', 78, 55);
					Sleep(50);
					alphabet('b', 89, 54);
					Sleep(50);
					alphabet('!', 99, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Ivysaur
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('I', 47, 54);
					Sleep(50);
					alphabet('v', 50, 56);
					Sleep(50);
					alphabet('y', 67, 55);
					Sleep(50);
					alphabet('s', 76, 54);
					Sleep(50);
					alphabet('a', 83, 54);
					Sleep(50);
					alphabet('u', 92, 56);
					Sleep(50);
					alphabet('r', 101, 55);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[16] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[16] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[16] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[16] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//이상해꽃 leaf blade스킬 배우기
				if (POKEMON_LV[mine] == 40 && mine == 9) {
					delete_speech_bubble();

					//Venusaur learned
					alphabet('V', 18, 48);
					Sleep(50);
					alphabet('e', 29, 48);
					Sleep(50);
					alphabet('n', 40, 49);
					Sleep(50);
					alphabet('u', 51, 50);
					Sleep(50);
					alphabet('s', 60, 48);
					Sleep(50);
					alphabet('a', 67, 48);
					Sleep(50);
					alphabet('u', 76, 50);
					Sleep(50);
					alphabet('r', 85, 49);
					Sleep(50);

					alphabet('l', 98, 48);
					Sleep(50);
					alphabet('e', 103, 48);
					Sleep(50);
					alphabet('a', 114, 48);
					Sleep(50);
					alphabet('r', 123, 49);
					Sleep(50);
					alphabet('n', 131, 49);
					Sleep(50);
					alphabet('e', 142, 48);
					Sleep(50);
					alphabet('d', 153, 48);
					Sleep(50);

					//leaf blade!
					alphabet('l', 18, 54);
					Sleep(50);
					alphabet('e', 23, 54);
					Sleep(50);
					alphabet('a', 34, 54);
					Sleep(50);
					alphabet('f', 43, 54);
					Sleep(50);

					alphabet('b', 54, 54);
					Sleep(50);
					alphabet('l', 63, 54);
					Sleep(50);
					alphabet('a', 68, 54);
					Sleep(50);
					alphabet('d', 77, 54);
					Sleep(50);
					alphabet('e', 86, 54);
					Sleep(50);
					alphabet('!', 98, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Ivysaur
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('V', 47, 48);
					Sleep(50);
					alphabet('e', 58, 48);
					Sleep(50);
					alphabet('n', 69, 49);
					Sleep(50);
					alphabet('u', 80, 50);
					Sleep(50);
					alphabet('s', 89, 48);
					Sleep(50);
					alphabet('a', 96, 48);
					Sleep(50);
					alphabet('u', 105, 50);
					Sleep(50);
					alphabet('r', 114, 49);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[17] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[17] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[17] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[17] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}

				//이상해꽃 solar beam스킬 배우기
				if (POKEMON_LV[mine] == 46 && mine == 9) {
					delete_speech_bubble();

					//Venusaur learned
					alphabet('V', 18, 48);
					Sleep(50);
					alphabet('e', 29, 48);
					Sleep(50);
					alphabet('n', 40, 49);
					Sleep(50);
					alphabet('u', 51, 50);
					Sleep(50);
					alphabet('s', 60, 48);
					Sleep(50);
					alphabet('a', 67, 48);
					Sleep(50);
					alphabet('u', 76, 50);
					Sleep(50);
					alphabet('r', 85, 49);
					Sleep(50);

					alphabet('l', 98, 48);
					Sleep(50);
					alphabet('e', 103, 48);
					Sleep(50);
					alphabet('a', 114, 48);
					Sleep(50);
					alphabet('r', 123, 49);
					Sleep(50);
					alphabet('n', 131, 49);
					Sleep(50);
					alphabet('e', 142, 48);
					Sleep(50);
					alphabet('d', 153, 48);
					Sleep(50);

					//solar beam!
					alphabet('s', 18, 54);
					Sleep(50);
					alphabet('o', 25, 55);
					Sleep(50);
					alphabet('l', 34, 54);
					Sleep(50);
					alphabet('a', 39, 54);
					Sleep(50);
					alphabet('r', 48, 55);
					Sleep(50);

					alphabet('b', 61, 54);
					Sleep(50);
					alphabet('e', 70, 54);
					Sleep(50);
					alphabet('a', 81, 54);
					Sleep(50);
					alphabet('m', 90, 55);
					Sleep(50);
					alphabet('!', 102, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//but Venysaur
					alphabet('b', 18, 48);
					Sleep(50);
					alphabet('u', 27, 50);
					Sleep(50);
					alphabet('t', 36, 48);
					Sleep(50);

					alphabet('V', 47, 48);
					Sleep(50);
					alphabet('e', 58, 48);
					Sleep(50);
					alphabet('n', 69, 49);
					Sleep(50);
					alphabet('u', 80, 50);
					Sleep(50);
					alphabet('s', 89, 48);
					Sleep(50);
					alphabet('a', 96, 48);
					Sleep(50);
					alphabet('u', 105, 50);
					Sleep(50);
					alphabet('r', 114, 49);
					Sleep(50);

					//cant learn more
					alphabet('c', 18, 55);
					Sleep(50);
					alphabet('a', 27, 54);
					Sleep(50);
					alphabet('n', 36, 55);
					Sleep(50);
					alphabet('t', 47, 54);
					Sleep(50);

					alphabet('l', 58, 54);
					Sleep(50);
					alphabet('e', 63, 54);
					Sleep(50);
					alphabet('a', 74, 54);
					Sleep(50);
					alphabet('r', 83, 55);
					Sleep(50);
					alphabet('n', 92, 55);
					Sleep(50);

					alphabet('m', 107, 55);
					Sleep(50);
					alphabet('o', 118, 55);
					Sleep(50);
					alphabet('r', 127, 55);
					Sleep(50);
					alphabet('e', 136, 54);
					Sleep(50);

					twinkle_button();
					delete_speech_bubble();

					//delete the skill?
					alphabet('d', 18, 48);
					Sleep(50);
					alphabet('e', 27, 48);
					Sleep(50);
					alphabet('l', 38, 48);
					Sleep(50);
					alphabet('e', 43, 48);
					Sleep(50);
					alphabet('t', 54, 48);
					Sleep(50);
					alphabet('e', 61, 48);
					Sleep(50);

					alphabet('t', 76, 48);
					Sleep(50);
					alphabet('h', 83, 48);
					Sleep(50);
					alphabet('e', 92, 48);
					Sleep(50);

					alphabet('s', 107, 48);
					Sleep(50);
					alphabet('k', 114, 48);
					Sleep(50);
					alphabet('i', 121, 48);
					Sleep(50);
					alphabet('l', 124, 48);
					Sleep(50);
					alphabet('l', 129, 48);
					Sleep(50);
					alphabet('?', 135, 48);
					Sleep(50);

					//YES
					alphabet('Y', 158, 48);
					alphabet('E', 165, 48);
					alphabet('S', 174, 48);

					//NO
					alphabet('N', 158, 54);
					alphabet('O', 167, 54);

					name_arrow(150, yy);
					remove_input();
					while (BREAK2 == 0) {
						if (kbhit()) {
							szChoice1 = getch();
							switch (szChoice1) {
							case UP:
								if (yy > 50) {
									erase_name_arrow(150, yy);
									yy -= 6;
									name_arrow(150, yy);
								}
								break;
							case DOWN:
								if (yy < 56) {
									erase_name_arrow(150, yy);
									yy += 6;
									name_arrow(150, yy);
								}
								break;
							case ENTER:
								if (yy == 50) {
									delete_speech_bubble();

									//press the number of the skill
									alphabet('p', 18, 48);
									Sleep(50);
									alphabet('r', 25, 49);
									Sleep(50);
									alphabet('e', 34, 48);
									Sleep(50);
									alphabet('s', 45, 48);
									Sleep(50);
									alphabet('s', 52, 48);
									Sleep(50);

									alphabet('t', 63, 48);
									Sleep(50);
									alphabet('h', 70, 48);
									Sleep(50);
									alphabet('e', 79, 48);
									Sleep(50);

									alphabet('n', 94, 49);
									Sleep(50);
									alphabet('u', 105, 50);
									Sleep(50);
									alphabet('m', 114, 49);
									Sleep(50);
									alphabet('b', 125, 48);
									Sleep(50);
									alphabet('e', 134, 48);
									Sleep(50);
									alphabet('r', 145, 49);
									Sleep(50);

									alphabet('o', 158, 49);
									Sleep(50);
									alphabet('f', 167, 48);
									Sleep(50);

									alphabet('t', 18, 54);
									Sleep(50);
									alphabet('h', 25, 54);
									Sleep(50);
									alphabet('e', 34, 54);
									Sleep(50);

									alphabet('s', 49, 54);
									Sleep(50);
									alphabet('k', 56, 54);
									Sleep(50);
									alphabet('i', 63, 54);
									Sleep(50);
									alphabet('l', 66, 54);
									Sleep(50);
									alphabet('l', 71, 54);
									Sleep(50);
								}
								BREAK2 = 1;
								break;
							}
						}
					}
					BREAK2 = 0;
					remove_input();
					if (yy == 50) {
						while (BREAK2 == 0) {
							if (kbhit()) {
								szChoice1 = getch();
								switch (szChoice1) {
								case 49:
									while (skill[count] != 1) {
										count++;
									}
									skill[count] = 0;
									skill[18] = 1;
									BREAK2 = 1;
									break;
								case 50:
									while (skill[count] != 2) {
										count++;
									}
									skill[count] = 0;
									skill[18] = 2;
									BREAK2 = 1;
									break;
								case 51:
									while (skill[count] != 3) {
										count++;
									}
									skill[count] = 0;
									skill[18] = 3;
									BREAK2 = 1;
									break;
								case 52:
									while (skill[count] != 4) {
										count++;
									}
									skill[count] = 0;
									skill[18] = 4;
									BREAK2 = 1;
									break;
								}
							}
						}
						BREAK2 = 0;
					}
				}
				delete_speech_bubble();
			}

			//파이리 리자드로 진화
			if (POKEMON_LV[mine] >= 16 && mine == 1) {
				delete_display();
				Pokemon_Pyree(85, 15, 1, 0);

				//what? Pyree
				alphabet('w', 18, 50);
				Sleep(50);
				alphabet('h', 29, 48);
				Sleep(50);
				alphabet('a', 38, 48);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('?', 55, 48);
				Sleep(50);

				alphabet('P', 66, 48);
				Sleep(50);
				alphabet('y', 75, 49);
				Sleep(50);
				alphabet('r', 84, 49);
				Sleep(50);
				alphabet('e', 93, 48);
				Sleep(50);
				alphabet('e', 104, 48);
				Sleep(50);

				//is evolving!
				alphabet('i', 18, 54);
				Sleep(50);
				alphabet('s', 21, 54);
				Sleep(50);

				alphabet('e', 32, 54);
				Sleep(50);
				alphabet('v', 43, 56);
				Sleep(50);
				alphabet('o', 50, 55);
				Sleep(50);
				alphabet('l', 59, 54);
				Sleep(50);
				alphabet('v', 64, 56);
				Sleep(50);
				alphabet('i', 71, 54);
				Sleep(50);
				alphabet('n', 74, 55);
				Sleep(50);
				alphabet('g', 85, 54);
				Sleep(50);

				for (int i = 0; i < 5; i++) {
					Pokemon_Charmeleon(85, 15, 1, 1);
					Sleep(270 - i * 50);
					Pokemon_Pyree(85, 15, 1, 0);
					Sleep(270 - i * 50);
				}
				for (int i = 0; i < 7; i++) {
					Pokemon_Charmeleon(85, 15, 1, 1);
					Sleep(20);
					Pokemon_Pyree(85, 15, 1, 0);
					Sleep(20);
				}
				Pokemon_Charmeleon(85, 15, 1, 0);

				delete_speech_bubble();

				//Pyree
				alphabet('P', 18, 48);
				Sleep(50);
				alphabet('y', 27, 49);
				Sleep(50);
				alphabet('r', 36, 49);
				Sleep(50);
				alphabet('e', 45, 48);
				Sleep(50);
				alphabet('e', 56, 48);
				Sleep(50);

				//evolved Charmeleon
				alphabet('e', 18, 54);
				Sleep(50);
				alphabet('v', 29, 56);
				Sleep(50);
				alphabet('o', 36, 55);
				Sleep(50);
				alphabet('l', 45, 54);
				Sleep(50);
				alphabet('v', 50, 56);
				Sleep(50);
				alphabet('e', 57, 54);
				Sleep(50);
				alphabet('d', 68, 54);
				Sleep(50);

				alphabet('R', 81, 54);
				Sleep(50);
				alphabet('i', 90, 54);
				Sleep(50);
				alphabet('z', 93, 55);
				Sleep(50);
				alphabet('a', 102, 54);
				Sleep(50);
				alphabet('r', 111, 55);
				Sleep(50);
				alphabet('d', 120, 54);
				Sleep(50);
				alphabet('!', 130, 54);
				Sleep(50);

				POKEMON[1] = 10;
				POKEMON[4] = 1;

				twinkle_button();
				delete_speech_bubble();
			}

			//리자드 리자몽으로 진화
			if (POKEMON_LV[mine] >= 36 && mine == 4) {
				delete_display();
				Pokemon_Charmeleon(85, 15, 1, 0);

				//what? Rizard
				alphabet('w', 18, 50);
				Sleep(50);
				alphabet('h', 29, 48);
				Sleep(50);
				alphabet('a', 38, 48);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('?', 55, 48);
				Sleep(50);

				alphabet('R', 66, 48);
				Sleep(50);
				alphabet('i', 75, 48);
				Sleep(50);
				alphabet('z', 78, 49);
				Sleep(50);
				alphabet('a', 87, 48);
				Sleep(50);
				alphabet('r', 96, 49);
				Sleep(50);
				alphabet('d', 105, 48);
				Sleep(50);

				//is evolving!
				alphabet('i', 18, 54);
				Sleep(50);
				alphabet('s', 21, 54);
				Sleep(50);

				alphabet('e', 32, 54);
				Sleep(50);
				alphabet('v', 43, 56);
				Sleep(50);
				alphabet('o', 50, 55);
				Sleep(50);
				alphabet('l', 59, 54);
				Sleep(50);
				alphabet('v', 64, 56);
				Sleep(50);
				alphabet('i', 71, 54);
				Sleep(50);
				alphabet('n', 74, 55);
				Sleep(50);
				alphabet('g', 85, 54);
				Sleep(50);

				for (int i = 0; i < 5; i++) {
					Pokemon_Charizard(85, 15, 1, 1);
					Sleep(270 - i * 50);
					Pokemon_Charmeleon(85, 15, 1, 0);
					Sleep(270 - i * 50);
				}
				for (int i = 0; i < 7; i++) {
					Pokemon_Charizard(85, 15, 1, 1);
					Sleep(20);
					Pokemon_Charmeleon(85, 15, 1, 0);
					Sleep(20);
				}
				Pokemon_Charizard(85, 15, 1, 0);

				delete_speech_bubble();

				//Rizard
				alphabet('R', 18, 48);
				Sleep(50);
				alphabet('i', 27, 48);
				Sleep(50);
				alphabet('z', 30, 49);
				Sleep(50);
				alphabet('a', 39, 48);
				Sleep(50);
				alphabet('r', 48, 49);
				Sleep(50);
				alphabet('d', 57, 48);
				Sleep(50);

				//evolved Rizamong
				alphabet('e', 18, 54);
				Sleep(50);
				alphabet('v', 29, 56);
				Sleep(50);
				alphabet('o', 36, 55);
				Sleep(50);
				alphabet('l', 45, 54);
				Sleep(50);
				alphabet('v', 50, 56);
				Sleep(50);
				alphabet('e', 57, 54);
				Sleep(50);
				alphabet('d', 68, 54);
				Sleep(50);

				alphabet('R', 81, 54);
				Sleep(50);
				alphabet('i', 90, 54);
				Sleep(50);
				alphabet('z', 93, 55);
				Sleep(50);
				alphabet('a', 102, 54);
				Sleep(50);
				alphabet('m', 111, 55);
				Sleep(50);
				alphabet('o', 122, 55);
				Sleep(50);
				alphabet('n', 131, 55);
				Sleep(50);
				alphabet('g', 142, 54);
				Sleep(50);
				alphabet('!', 152, 54);
				Sleep(50);

				POKEMON[4] = 10;
				POKEMON[7] = 1;

				twinkle_button();
				delete_speech_bubble();
			}

			//꼬부기 어니부기로 진화
			if (POKEMON_LV[mine] >= 16 && mine == 2) {
				delete_display();
				Pokemon_twist(85, 15, 1, 0);

				//what? Twist
				alphabet('w', 18, 50);
				Sleep(50);
				alphabet('h', 29, 48);
				Sleep(50);
				alphabet('a', 38, 48);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('?', 55, 48);
				Sleep(50);

				alphabet('T', 66, 48);
				Sleep(50);
				alphabet('w', 73, 50);
				Sleep(50);
				alphabet('i', 84, 48);
				Sleep(50);
				alphabet('s', 87, 48);
				Sleep(50);
				alphabet('t', 93, 48);
				Sleep(50);

				//is evolving!
				alphabet('i', 18, 54);
				Sleep(50);
				alphabet('s', 21, 54);
				Sleep(50);

				alphabet('e', 32, 54);
				Sleep(50);
				alphabet('v', 43, 56);
				Sleep(50);
				alphabet('o', 50, 55);
				Sleep(50);
				alphabet('l', 59, 54);
				Sleep(50);
				alphabet('v', 64, 56);
				Sleep(50);
				alphabet('i', 71, 54);
				Sleep(50);
				alphabet('n', 74, 55);
				Sleep(50);
				alphabet('g', 85, 54);
				Sleep(50);

				for (int i = 0; i < 5; i++) {
					Pokemon_Wartortle(85, 15, 1, 1);
					Sleep(270 - i * 50);
					Pokemon_twist(85, 15, 1, 0);
					Sleep(270 - i * 50);
				}
				for (int i = 0; i < 7; i++) {
					Pokemon_Wartortle(85, 15, 1, 1);
					Sleep(20);
					Pokemon_twist(85, 15, 1, 0);
					Sleep(20);
				}
				Pokemon_Wartortle(85, 15, 1, 0);

				delete_speech_bubble();

				//twist
				alphabet('T', 18, 48);
				Sleep(50);
				alphabet('w', 25, 50);
				Sleep(50);
				alphabet('i', 36, 48);
				Sleep(50);
				alphabet('s', 39, 48);
				Sleep(50);
				alphabet('t', 46, 48);
				Sleep(50);

				//evolved Wartortle
				alphabet('e', 18, 54);
				Sleep(50);
				alphabet('v', 29, 56);
				Sleep(50);
				alphabet('o', 36, 55);
				Sleep(50);
				alphabet('l', 45, 54);
				Sleep(50);
				alphabet('v', 50, 56);
				Sleep(50);
				alphabet('e', 57, 54);
				Sleep(50);
				alphabet('d', 68, 54);
				Sleep(50);

				alphabet('W', 81, 54);
				Sleep(50);
				alphabet('a', 92, 54);
				Sleep(50);
				alphabet('r', 101, 55);
				Sleep(50);
				alphabet('t', 110, 54);
				Sleep(50);
				alphabet('o', 117, 55);
				Sleep(50);
				alphabet('r', 126, 55);
				Sleep(50);
				alphabet('t', 135, 54);
				Sleep(50);
				alphabet('l', 142, 54);
				Sleep(50);
				alphabet('e', 147, 54);
				Sleep(50);

				POKEMON[2] = 10;
				POKEMON[5] = 1;

				twinkle_button();
				delete_speech_bubble();
			}

			//어니부기 거북왕으로 진화
			if (POKEMON_LV[mine] >= 36 && mine == 5) {
				delete_display();
				Pokemon_Wartortle(85, 15, 1, 0);

				//what? Wartortle
				alphabet('w', 18, 50);
				Sleep(50);
				alphabet('h', 29, 48);
				Sleep(50);
				alphabet('a', 38, 48);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('?', 55, 48);
				Sleep(50);

				alphabet('W', 66, 54);
				Sleep(50);
				alphabet('a', 77, 54);
				Sleep(50);
				alphabet('r', 86, 55);
				Sleep(50);
				alphabet('t', 95, 54);
				Sleep(50);
				alphabet('o', 102, 55);
				Sleep(50);
				alphabet('r', 111, 55);
				Sleep(50);
				alphabet('t', 120, 54);
				Sleep(50);
				alphabet('l', 127, 54);
				Sleep(50);
				alphabet('e', 132, 54);
				Sleep(50);

				//is evolving!
				alphabet('i', 18, 54);
				Sleep(50);
				alphabet('s', 21, 54);
				Sleep(50);

				alphabet('e', 32, 54);
				Sleep(50);
				alphabet('v', 43, 56);
				Sleep(50);
				alphabet('o', 50, 55);
				Sleep(50);
				alphabet('l', 59, 54);
				Sleep(50);
				alphabet('v', 64, 56);
				Sleep(50);
				alphabet('i', 71, 54);
				Sleep(50);
				alphabet('n', 74, 55);
				Sleep(50);
				alphabet('g', 85, 54);
				Sleep(50);

				for (int i = 0; i < 5; i++) {
					Pokemon_Blastoise(85, 15, 1, 0);
					Sleep(270 - i * 50);
					Pokemon_Wartortle(85, 15, 1, 1);
					Sleep(270 - i * 50);
				}
				for (int i = 0; i < 7; i++) {
					Pokemon_Blastoise(85, 15, 1, 1);
					Sleep(20);
					Pokemon_Wartortle(85, 15, 1, 0);
					Sleep(20);
				}
				Pokemon_Blastoise(85, 15, 1, 0);

				delete_speech_bubble();

				//Wartortle
				alphabet('W', 18, 48);
				Sleep(50);
				alphabet('a', 29, 48);
				Sleep(50);
				alphabet('r', 38, 49);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('o', 54, 49);
				Sleep(50);
				alphabet('r', 63, 49);
				Sleep(50);
				alphabet('t', 72, 48);
				Sleep(50);
				alphabet('l', 79, 48);
				Sleep(50);
				alphabet('e', 84, 48);
				Sleep(50);

				//evolved Blastoise
				alphabet('e', 18, 54);
				Sleep(50);
				alphabet('v', 29, 56);
				Sleep(50);
				alphabet('o', 36, 55);
				Sleep(50);
				alphabet('l', 45, 54);
				Sleep(50);
				alphabet('v', 50, 56);
				Sleep(50);
				alphabet('e', 57, 54);
				Sleep(50);
				alphabet('d', 68, 54);
				Sleep(50);

				alphabet('B', 81, 54);
				Sleep(50);
				alphabet('l', 90, 54);
				Sleep(50);
				alphabet('a', 95, 54);
				Sleep(50);
				alphabet('s', 104, 54);
				Sleep(50);
				alphabet('t', 111, 54);
				Sleep(50);
				alphabet('o', 118, 55);
				Sleep(50);
				alphabet('i', 127, 54);
				Sleep(50);
				alphabet('s', 130, 54);
				Sleep(50);
				alphabet('e', 137, 54);
				Sleep(50);

				POKEMON[5] = 10;
				POKEMON[8] = 1;

				twinkle_button();
				delete_speech_bubble();
			}

			//이상해씨 이상해풀로 진화
			if (POKEMON_LV[mine] >= 16 && mine == 3) {
				delete_display();
				Pokemon_twist(85, 15, 1, 0);

				//what? Bulbasaur
				alphabet('w', 18, 50);
				Sleep(50);
				alphabet('h', 29, 48);
				Sleep(50);
				alphabet('a', 38, 48);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('?', 55, 48);
				Sleep(50);

				alphabet('B', 66, 48);
				Sleep(50);
				alphabet('u', 75, 50);
				Sleep(50);
				alphabet('l', 84, 48);
				Sleep(50);
				alphabet('b', 89, 48);
				Sleep(50);
				alphabet('a', 98, 48);
				Sleep(50);
				alphabet('s', 107, 48);
				Sleep(50);
				alphabet('a', 114, 48);
				Sleep(50);
				alphabet('u', 123, 50);
				Sleep(50);
				alphabet('r', 132, 49);
				Sleep(50);

				//is evolving!
				alphabet('i', 18, 54);
				Sleep(50);
				alphabet('s', 21, 54);
				Sleep(50);

				alphabet('e', 32, 54);
				Sleep(50);
				alphabet('v', 43, 56);
				Sleep(50);
				alphabet('o', 50, 55);
				Sleep(50);
				alphabet('l', 59, 54);
				Sleep(50);
				alphabet('v', 64, 56);
				Sleep(50);
				alphabet('i', 71, 54);
				Sleep(50);
				alphabet('n', 74, 55);
				Sleep(50);
				alphabet('g', 85, 54);
				Sleep(50);

				for (int i = 0; i < 5; i++) {
					Pokemon_Ivysaur(85, 15, 1, 0);
					Sleep(270 - i * 50);
					Pokemon_Bulbasaur(85, 15, 1, 1);
					Sleep(270 - i * 50);
				}
				for (int i = 0; i < 7; i++) {
					Pokemon_Ivysaur(85, 15, 1, 1);
					Sleep(20);
					Pokemon_Bulbasaur(85, 15, 1, 0);
					Sleep(20);
				}
				Pokemon_Ivysaur(85, 15, 1, 0);

				delete_speech_bubble();

				//Bulbasaur
				alphabet('B', 18, 48);
				Sleep(50);
				alphabet('u', 27, 50);
				Sleep(50);
				alphabet('l', 36, 48);
				Sleep(50);
				alphabet('b', 41, 48);
				Sleep(50);
				alphabet('a', 50, 48);
				Sleep(50);
				alphabet('s', 59, 48);
				Sleep(50);
				alphabet('a', 66, 48);
				Sleep(50);
				alphabet('u', 75, 50);
				Sleep(50);
				alphabet('r', 84, 49);
				Sleep(50);

				//evolved Ivysaur
				alphabet('e', 18, 54);
				Sleep(50);
				alphabet('v', 29, 56);
				Sleep(50);
				alphabet('o', 36, 55);
				Sleep(50);
				alphabet('l', 45, 54);
				Sleep(50);
				alphabet('v', 50, 56);
				Sleep(50);
				alphabet('e', 57, 54);
				Sleep(50);
				alphabet('d', 68, 54);
				Sleep(50);

				alphabet('I', 81, 54);
				Sleep(50);
				alphabet('v', 84, 56);
				Sleep(50);
				alphabet('y', 91, 55);
				Sleep(50);
				alphabet('s', 100, 54);
				Sleep(50);
				alphabet('a', 107, 54);
				Sleep(50);
				alphabet('u', 116, 55);
				Sleep(50);
				alphabet('r', 125, 55);
				Sleep(50);

				POKEMON[3] = 10;
				POKEMON[6] = 1;

				twinkle_button();
				delete_speech_bubble();
			}

			//이상해풀 이상해꽃으로 진화
			if (POKEMON_LV[mine] >= 36 && mine == 6) {
				delete_display();
				Pokemon_Bulbasaur(85, 15, 1, 0);

				//what? Ivysaur
				alphabet('w', 18, 50);
				Sleep(50);
				alphabet('h', 29, 48);
				Sleep(50);
				alphabet('a', 38, 48);
				Sleep(50);
				alphabet('t', 47, 48);
				Sleep(50);
				alphabet('?', 55, 48);
				Sleep(50);

				alphabet('I', 66, 48);
				Sleep(50);
				alphabet('v', 69, 50);
				Sleep(50);
				alphabet('y', 76, 49);
				Sleep(50);
				alphabet('s', 85, 48);
				Sleep(50);
				alphabet('a', 92, 48);
				Sleep(50);
				alphabet('u', 101, 50);
				Sleep(50);
				alphabet('r', 110, 49);
				Sleep(50);

				//is evolving!
				alphabet('i', 18, 54);
				Sleep(50);
				alphabet('s', 21, 54);
				Sleep(50);

				alphabet('e', 32, 54);
				Sleep(50);
				alphabet('v', 43, 56);
				Sleep(50);
				alphabet('o', 50, 55);
				Sleep(50);
				alphabet('l', 59, 54);
				Sleep(50);
				alphabet('v', 64, 56);
				Sleep(50);
				alphabet('i', 71, 54);
				Sleep(50);
				alphabet('n', 74, 55);
				Sleep(50);
				alphabet('g', 85, 54);
				Sleep(50);

				for (int i = 0; i < 5; i++) {
					Pokemon_Venusaur(85, 15, 1, 0);
					Sleep(270 - i * 50);
					Pokemon_Ivysaur(85, 15, 1, 1);
					Sleep(270 - i * 50);
				}
				for (int i = 0; i < 7; i++) {
					Pokemon_Venusaur(85, 15, 1, 1);
					Sleep(20);
					Pokemon_Ivysaur(85, 15, 1, 0);
					Sleep(20);
				}
				Pokemon_Venusaur(85, 15, 1, 0);

				delete_speech_bubble();

				//Ivysaur
				alphabet('I', 18, 48);
				Sleep(50);
				alphabet('v', 21, 50);
				Sleep(50);
				alphabet('y', 28, 49);
				Sleep(50);
				alphabet('s', 37, 48);
				Sleep(50);
				alphabet('a', 44, 48);
				Sleep(50);
				alphabet('u', 53, 50);
				Sleep(50);
				alphabet('r', 62, 49);
				Sleep(50);

				//evolved Venusaur
				alphabet('e', 18, 54);
				Sleep(50);
				alphabet('v', 29, 56);
				Sleep(50);
				alphabet('o', 36, 55);
				Sleep(50);
				alphabet('l', 45, 54);
				Sleep(50);
				alphabet('v', 50, 56);
				Sleep(50);
				alphabet('e', 57, 54);
				Sleep(50);
				alphabet('d', 68, 54);
				Sleep(50);

				alphabet('V', 81, 48);
				Sleep(50);
				alphabet('e', 92, 48);
				Sleep(50);
				alphabet('n', 103, 49);
				Sleep(50);
				alphabet('u', 114, 50);
				Sleep(50);
				alphabet('s', 123, 48);
				Sleep(50);
				alphabet('a', 130, 48);
				Sleep(50);
				alphabet('u', 139, 50);
				Sleep(50);
				alphabet('r', 148, 49);
				Sleep(50);

				POKEMON[6] = 10;
				POKEMON[9] = 1;

				twinkle_button();
				delete_speech_bubble();
			}
		}
		cnt = 0;
		return 1;
	}
	else if (hp <= 0) {
		alphabet('Y', 18, 48);
		Sleep(50);
		alphabet('O', 25, 48);
		Sleep(50);
		alphabet('U', 34, 48);
		Sleep(50);

		alphabet('D', 48, 48);
		Sleep(50);
		alphabet('I', 57, 48);
		Sleep(50);
		alphabet('E', 60, 48);
		Sleep(50);

		twinkle_button();
		delete_speech_bubble();

		hp1 = 75;
		hp = 75;
		return 1;
	}
	else
		return hp1;

}

//포켓몬 잡기
int battle_catch(int your_POKEMON, int die) {
	for (int i = 144; i < 200; i++) {
		for (int j = 2; j < 24; j++) {
			gotoxy(i, j);
			printf(" ");
		}
	}
	if (shaking_monsterball(die) == 1)
		return 1;
	else {
		switch (your_POKEMON) {
		case 0:
			Pokemon_Nidorina(144, 3, 1, 0);
			break;
		case 1:
			Pokemon_Pyree(144, 3, 1, 0);
			break;
		case 2:
			Pokemon_twist(144, 3, 1, 0);
			break;
		case 3:
			Pokemon_Bulbasaur(144, 3, 1, 0);
			break;
		case 4:
			Pokemon_Charmeleon(144, 3, 1, 0);
			break;
		case 5:
			Pokemon_Wartortle(144, 3, 1, 0);
			break;
		case 6:
			Pokemon_Ivysaur(144, 3, 1, 0);
			break;
		case 7:
			Pokemon_Charizard(144, 3, 1, 0);
			break;
		case 8:
			Pokemon_Blastoise(144, 3, 1, 0);
			break;
		case 9:
			Pokemon_Venusaur(144, 3, 1, 0);
			break;
		case 10:
			Pokemon_Pidgey(144, 3, 1, 0);
			break;
		case 11:
			Pokemon_Pigeon(144, 3, 1, 0);
			break;
		case 12:
			Pokemon_Onix(144, 3, 1, 0);
			break;
		case 13:
			Pokemon_Steelix(144, 3, 1, 0);
			break;
		case 14:
			Pokemon_Machoke(144, 3, 1, 0);
			break;
		case 15:
			Pokemon_Machamp(144, 3, 1, 0);
			break;
		case 16:
			Pokemon_Lapras(144, 3, 1, 0);
			break;
		case 17:
			Pokemon_Phantom(144, 3, 1, 0);
			break;
		case 18:
			Pokemon_Arbok(144, 3, 1, 0);
			break;
		case 19:
			Pokemon_Lucario(144, 2, 1, 0);
			break;
		case 20:
			Pokemon_Weezing(144, 3, 1, 0);
			break;
		case 21:
			Pokemon_metamon(144, 3, 1, 0);
			break;
		case 22:
			Pokemon_Arceus(144, 3, 1, 0);
			break;
			return 0;
		}
	}
}

//도망치기
int battle_run() {
	srand((unsigned int)time(NULL));
	switch (rand() % 3)
	{
	case 0:
	case 1:
		//FALE!
		alphabet('F', 18, 48);
		Sleep(50);
		alphabet('A', 27, 48);
		Sleep(50);
		alphabet('I', 36, 48);
		Sleep(50);
		alphabet('L', 39, 48);
		Sleep(50);
		alphabet('!', 47, 48);
		Sleep(50);
		twinkle_button();
		delete_speech_bubble();
		return 0;
		break;
	case 2:
		//Got away safely!
		alphabet('G', 18, 48);
		Sleep(50);
		alphabet('o', 27, 49);
		Sleep(50);
		alphabet('t', 36, 48);
		Sleep(50);

		alphabet('a', 47, 48);
		Sleep(50);
		alphabet('w', 56, 50);
		Sleep(50);
		alphabet('a', 67, 48);
		Sleep(50);
		alphabet('y', 76, 49);
		Sleep(50);

		alphabet('s', 89, 48);
		Sleep(50);
		alphabet('a', 96, 48);
		Sleep(50);
		alphabet('f', 105, 48);
		Sleep(50);
		alphabet('e', 112, 48);
		Sleep(50);
		alphabet('t', 123, 48);
		Sleep(50);
		alphabet('y', 130, 49);
		Sleep(50);
		alphabet('!', 140, 48);
		Sleep(50);
		twinkle_button();
		return 1;
		break;
	}
}

//오박사 출력
void color_pepole(int pepole[43][38], int x, int y)
{
	int i, j;
	for (i = 0; i < 43; i++)
	{
		for (j = 0; j < 38; j++)
		{
			gotoxy(j * 2 + x, i + y);
			if (pepole[i][j] == 00)
			{
				ColorSet(BLACK, BLACK);
				printf("  "); //블랙
			}
			if (pepole[i][j] == 15)
			{
				ColorSet(WHITE, WHITE);
				printf("  "); //화이트
			}
			if (pepole[i][j] == 11)
			{
				ColorSet(RED, RED);
				printf("  "); //레드
			}
			if (pepole[i][j] == 82)
			{
				printf("\033[38;2;82;82;82m");
				printf("\033[48;2;82;82;82m");
				printf("  "); //회색
			}
			if (pepole[i][j] == 24)
			{
				printf("\033[38;2;243;229;216m");
				printf("\033[48;2;243;229;216m");
				printf("  "); //살구색
			}
			if (pepole[i][j] == 22)
			{
				printf("\033[38;2;224;219;207m");
				printf("\033[48;2;224;219;207m");
				printf("  "); //머리색
			}
			if (pepole[i][j] == 20)
			{
				printf("\033[38;2;206;191;171m");
				printf("\033[48;2;206;191;171m");
				printf("  "); //옷
			}
			if (pepole[i][j] == 12)
			{
				printf("\033[38;2;124;112;141m");
				printf("\033[48;2;124;112;141m");
				printf("  "); //바지
			}
		}
	}
}

//몬스터볼 색깔
void monsterball_color(int monsterball[15][17]) {
	int i, j;
	ColorSet(WHITE, WHITE);
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 17; j++) {
			gotoxy(j * 2 + 148, i + 5);
			if (monsterball[i][j] == 00) {
				ColorSet(BLACK, BLACK);
				printf("  "); //블랙
			}
			if (monsterball[i][j] == 12) {
				ColorSet(RED, RED);
				printf("  "); //밝은 레드
			}
			if (monsterball[i][j] == 15) {
				ColorSet(WHITE, WHITE);
				printf("  "); //화이트
			}
			if (monsterball[i][j] == 14) {
				ColorSet(YELLOW, YELLOW);
				printf("  "); //노랑
			}
		}
		ColorSet(WHITE, WHITE);
	}
}

//흔들리는 몬스터볼
int shaking_monsterball(int die) {
	srand((unsigned int)time(NULL));
	int random = 0, num = 0;
	if (die <= 10)
		random = rand() % 7;
	else if (die <= 20)
		random = rand() % 3;
	else if (die <= 30)
		random = rand() % 2;
	else if (die <= 40)
		random = rand() % 6;
	else if (die <= 50)
		random = rand() % 10;
	else
		random = rand() % 100;

	num = rand() % 2;

	if ((die != 0 && die <= 30 && random != 0) || ((die == 0 || die > 30) && random == 0)) {
		for (int i = 0; i < 3; i++) {
			monsterball1();
			Sleep(50);

			monsterball4();
			Sleep(50);

			monsterball2();
			Sleep(100);

			monsterball4();
			Sleep(50);

			monsterball1();
			Sleep(100);

			monsterball5();
			Sleep(50);

			monsterball3();
			Sleep(100);

			monsterball5();
			Sleep(50);

			monsterball1();
			Sleep(1000);
		}
		monsterball7();
		Sleep(300);

		monsterball6();
		Sleep(500);

		monsterball7();
		Sleep(300);

		monsterball9();
		Sleep(300);

		monsterball8();
		Sleep(500);

		monsterball9();
		Sleep(300);
		return 1;
	}
	else if (num == 0) {
		for (int i = 0; i < 2; i++) {
			monsterball1();
			Sleep(50);

			monsterball4();
			Sleep(50);

			monsterball2();
			Sleep(100);

			monsterball4();
			Sleep(50);

			monsterball1();
			Sleep(100);

			monsterball5();
			Sleep(50);

			monsterball3();
			Sleep(100);

			monsterball5();
			Sleep(50);

			monsterball1();
			Sleep(1000);
		}
		return 0;
	}
	else {
		monsterball1();
		Sleep(50);

		monsterball4();
		Sleep(50);

		monsterball2();
		Sleep(100);

		monsterball4();
		Sleep(50);

		monsterball1();
		Sleep(100);

		monsterball5();
		Sleep(50);

		monsterball3();
		Sleep(100);

		monsterball5();
		Sleep(50);

		monsterball1();
		Sleep(1000);
		return 0;
	}
}

//포켓몬 도감
void pokedex(int POKEMON[]) {
	int cnt = 0, page = 0, BREAK = 0, szChoice, end = 0;


	while (end == 0) {
		if (page == 0) {
			reset_display();
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 0:
						Pokemon_Nidorina(0 + 25, 3, 1, 0);
						break;
					case 1:
						Pokemon_Pyree(60 + 25, 3, 1, 0);
						break;
					case 2:
						Pokemon_twist(120 + 25, 3, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 0:
						Pokemon_Nidorina(0 + 25, 3, 1, 1);
						break;
					case 1:
						Pokemon_Pyree(60 + 25, 3, 1, 1);
						break;
					case 2:
						Pokemon_twist(120 + 25, 3, 1, 1);
						break;
					}
				}
				cnt++;
			}
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 3:
						Pokemon_Bulbasaur(0 + 25, 33, 1, 0);
						break;
					case 4:
						Pokemon_Charmeleon(60 + 25, 33, 1, 0);
						break;
					case 5:
						Pokemon_Wartortle(120 + 25, 33, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 3:
						Pokemon_Bulbasaur(0 + 25, 33, 1, 1);
						break;
					case 4:
						Pokemon_Charmeleon(60 + 25, 33, 1, 1);
						break;
					case 5:
						Pokemon_Wartortle(120 + 25, 33, 1, 1);
						break;
					}
				}
				cnt++;
			}
		}
		else if (page == 1) {
			reset_display();
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 6:
						Pokemon_Ivysaur(0 + 25, 3, 1, 0);
						break;
					case 7:
						Pokemon_Charizard(60 + 25, 3, 1, 0);
						break;
					case 8:
						Pokemon_Blastoise(120 + 25, 3, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 6:
						Pokemon_Ivysaur(0 + 25, 3, 1, 1);
						break;
					case 7:
						Pokemon_Charizard(60 + 25, 3, 1, 1);
						break;
					case 8:
						Pokemon_Blastoise(120 + 25, 3, 1, 1);
						break;
					}
				}
				cnt++;
			}
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 9:
						Pokemon_Venusaur(0 + 25, 33, 1, 0);
						break;
					case 10:
						Pokemon_Pidgey(60 + 25, 33, 1, 0);
						break;
					case 11:
						Pokemon_Pigeon(120 + 25, 33, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 9:
						Pokemon_Venusaur(0 + 25, 33, 1, 1);
						break;
					case 10:
						Pokemon_Pidgey(60 + 25, 33, 1, 1);
						break;
					case 11:
						Pokemon_Pigeon(120 + 25, 33, 1, 1);
						break;
					}
				}
				cnt++;
			}
		}
		else if (page == 2) {
			reset_display();
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 12:
						Pokemon_Onix(0 + 25, 3, 1, 0);
						break;
					case 13:
						Pokemon_Steelix(60 + 25, 3, 1, 0);
						break;
					case 14:
						Pokemon_Machoke(120 + 25, 3, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 12:
						Pokemon_Onix(0 + 25, 3, 1, 1);
						break;
					case 13:
						Pokemon_Steelix(60 + 25, 3, 1, 1);
						break;
					case 14:
						Pokemon_Machoke(120 + 25, 3, 1, 1);
						break;
					}
				}
				cnt++;
			}
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 15:
						Pokemon_Machamp(0 + 25, 33, 1, 0);
						break;
					case 16:
						Pokemon_Lapras(60 + 25, 33, 1, 0);
						break;
					case 17:
						Pokemon_Phantom(120 + 25, 33, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 15:
						Pokemon_Machamp(0 + 25, 33, 1, 1);
						break;
					case 16:
						Pokemon_Lapras(60 + 25, 33, 1, 1);
						break;
					case 17:
						Pokemon_Phantom(120 + 25, 33, 1, 1);
						break;
					}
				}
				cnt++;
			}
		}
		else if (page == 3) {
			reset_display();
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 18:
						Pokemon_Arbok(0 + 25, 3, 1, 0);
						break;
					case 19:
						Pokemon_Lucario(60 + 25, 3, 1, 0);
						break;
					case 20:
						Pokemon_Weezing(120 + 25, 3, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 18:
						Pokemon_Arbok(0 + 25, 3, 1, 1);
						break;
					case 19:
						Pokemon_Lucario(60 + 25, 3, 1, 1);
						break;
					case 20:
						Pokemon_Weezing(120 + 25, 3, 1, 1);
						break;
					}
				}
				cnt++;
			}
			for (int i = 0; i < 3; i++) {
				if (POKEMON[cnt] == 1 || POKEMON[cnt] == 10) {
					switch (cnt) {
					case 21:
						Pokemon_metamon(0 + 25, 33, 1, 0);
						break;
					case 22:
						Pokemon_Arceus(60 + 25, 33, 1, 0);
						break;
					}
				}
				else {
					switch (cnt) {
					case 21:
						Pokemon_metamon(0 + 25, 33, 1, 1);
						break;
					case 22:
						Pokemon_Arceus(60 + 25, 33, 1, 1);
						break;
					}
				}
				cnt++;
			}
		}
		remove_input();
		while (BREAK == 0) {
			if (kbhit()) {
				szChoice = getch();
				switch (szChoice) {
				case ESC:
					end = 1;
					BREAK = 1;
					break;
				case LEFT:
					if (page != 0) {
						if (page == 1)
							cnt = 0;
						if (page == 2)
							cnt = 6;
						if (page == 3)
							cnt = 12;
						page--;
						BREAK = 1;
					}
					break;
				case RIGHT:
					if (page != 3) {
						page++;
						BREAK = 1;
					}
					break;
				}
			}
		}
		BREAK = 0;
	}
}
