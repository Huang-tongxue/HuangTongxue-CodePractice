#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<windows.h>

#define Rowe 9
#define Cole 9
#define Rowes Rowe + 2
#define Coles Cole + 2
#define Boome 10

void Menu();///�����˵�����
void CreateChessboard(char arr[Rowes][Coles], int r, int c, char ch);///�������̺���
void PrintChessboard(char arr[Rowes][Coles]);///������ӡ����
void SetMine(char arr[Rowes][Coles]);
int RoundMine(char arr[Rowes][Coles], int r, int c);
int do_or_try(char mine[Rowes][Coles], char show[Rowes][Coles], int r, int c, char ch);