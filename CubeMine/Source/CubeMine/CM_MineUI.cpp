// Fill out your copyright notice in the Description page of Project Settings.


#include "CM_MineUI.h"
#include "Components/Button.h"
#include "time.h"


void UCM_MineUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	BT_00 = Cast<UButton>(GetWidgetFromName(TEXT("0_0")));

	BT_00->OnClicked.AddDynamic(this, &UCM_MineUI::TestButtonCallback);
}

void UCM_MineUI::TestButtonCallback()
{

}

void UCM_MineUI::InitArr(char Room[size][size])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Room[i][j] = 'O';
		}
	}
}

void UCM_MineUI::SetMine(char Room[size][size], int Num) {

	int MineRow, MineCol;
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < Num; i++) {

		MineRow = rand() % (size);
		MineCol = rand() % (size);

		if (Room[MineRow][MineCol] == 'M' || (MineRow == 0) || (MineCol == 0) || MineRow == size - 1 || MineCol == size - 1) {
			i--;

		}

		else {
			if (CanSetMine(Room, MineRow, MineCol))
			{
				Room[MineRow][MineCol] = 'M';
			}
			else
			{
				i--;
			}

		}

	}

}

void UCM_MineUI::SetMineNum(char Room[size][size], int Arr_Num[size][size]) {

	int i, j, c, r;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (Room[i][j] == 'M') {
				for (c = i - 1; c < i + 2; c++) {
					for (r = j - 1; r < j + 2; r++) {
						if (c == i && r == j) continue;
						else if (c < 0 || c > size - 1 || r < 0 || r > size - 1) continue;
						else Arr_Num[c][r]++;
					}
				}
			}
			else continue;
		}
	}

	printf("\n");

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (Room[i][j] == 'M') Arr_Num[i][j] = 9;
		}
	}

}

bool UCM_MineUI::CanSetMine(char Room[size][size], int CheckRow, int CheckCol)
{
	int Count = 0;
	for (int i = CheckRow - 1; i <= CheckRow + 1; i++)
	{
		for (int j = CheckCol - 1; j <= CheckCol + 1; j++)
		{
			if (Room[i][j] == 'M')
				Count++;
		}
	}

	if (Count >= 2)
	{
		return false;
	}

	return true;
}

void UCM_MineUI::ShowMine(char Room[size][size]) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%3c", Room[i][j]);
		}
		printf("\n");
	}
}
