// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CM_MineUI.generated.h"

#define size 8
#define NumberOfMine 8

/**
 * 
 */
UCLASS()
class CUBEMINE_API UCM_MineUI : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UButton* BT_00;

protected:
	virtual void NativeOnInitialized();

private:
	UFUNCTION(BlueprintCallable)
		void TestButtonCallback();
	

public:
	void SetMine(char Room[size][size], int Num);
	void SetMineNum(char Room[size][size], int Arr_Num[size][size]);
	void InitArr(char Room[size][size]);
	bool CanSetMine(char Room[size][size], int CheckRow, int CheckCol);
	void ShowMine(char Room[size][size]);
	//void ShowGame(int Arr_Num[size][size], int Arr_Check[size][size]);

	
};
