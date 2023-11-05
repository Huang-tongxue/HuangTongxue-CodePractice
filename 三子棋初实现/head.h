#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#define Row 3
#define Col 3

void Menu();
void ShowBoard(char board[][Col]);
void Computer(char board[][Col]);
void PlayerOne(char board[][Col]);
char IsWin(char board[][Col]);
void PlayerTwo(char board[][Col]);