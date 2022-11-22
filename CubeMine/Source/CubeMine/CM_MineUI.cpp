// Fill out your copyright notice in the Description page of Project Settings.


#include "CM_MineUI.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "GameFramework/Controller.h"


void UCM_MineUI::NativeConstruct()
{
	Super::NativeConstruct();

	Mine2D.Init(TArray<int32>(), size);
	CheckOpen.Init(TArray<int32>(), size);
	BTArr.Init(TArray<UButton*>(), size);
	TTArr.Init(TArray<UTextBlock*>(), size);
	FFArr.Init(TArray<UImage*>(), size);
	InitArr();
	SetMine();
	SetMineNum();
	

	BT_00 = Cast<UButton>(GetWidgetFromName(TEXT("0_0")));
	BT_01 = Cast<UButton>(GetWidgetFromName(TEXT("0_1")));
	BT_02 = Cast<UButton>(GetWidgetFromName(TEXT("0_2")));
	BT_03 = Cast<UButton>(GetWidgetFromName(TEXT("0_3")));
	BT_04 = Cast<UButton>(GetWidgetFromName(TEXT("0_4")));
	BT_05 = Cast<UButton>(GetWidgetFromName(TEXT("0_5")));
	BT_06 = Cast<UButton>(GetWidgetFromName(TEXT("0_6")));
	BT_07 = Cast<UButton>(GetWidgetFromName(TEXT("0_7")));
	BT_10 = Cast<UButton>(GetWidgetFromName(TEXT("1_0")));
	BT_11 = Cast<UButton>(GetWidgetFromName(TEXT("1_1")));
	BT_12 = Cast<UButton>(GetWidgetFromName(TEXT("1_2")));
	BT_13 = Cast<UButton>(GetWidgetFromName(TEXT("1_3")));
	BT_14 = Cast<UButton>(GetWidgetFromName(TEXT("1_4")));
	BT_15 = Cast<UButton>(GetWidgetFromName(TEXT("1_5")));
	BT_16 = Cast<UButton>(GetWidgetFromName(TEXT("1_6")));
	BT_17 = Cast<UButton>(GetWidgetFromName(TEXT("1_7")));
	BT_20 = Cast<UButton>(GetWidgetFromName(TEXT("2_0")));
	BT_21 = Cast<UButton>(GetWidgetFromName(TEXT("2_1")));
	BT_22 = Cast<UButton>(GetWidgetFromName(TEXT("2_2")));
	BT_23 = Cast<UButton>(GetWidgetFromName(TEXT("2_3")));
	BT_24 = Cast<UButton>(GetWidgetFromName(TEXT("2_4")));
	BT_25 = Cast<UButton>(GetWidgetFromName(TEXT("2_5")));
	BT_26 = Cast<UButton>(GetWidgetFromName(TEXT("2_6")));
	BT_27 = Cast<UButton>(GetWidgetFromName(TEXT("2_7")));
	BT_30 = Cast<UButton>(GetWidgetFromName(TEXT("3_0")));
	BT_31 = Cast<UButton>(GetWidgetFromName(TEXT("3_1")));
	BT_32 = Cast<UButton>(GetWidgetFromName(TEXT("3_2")));
	BT_33 = Cast<UButton>(GetWidgetFromName(TEXT("3_3")));
	BT_34 = Cast<UButton>(GetWidgetFromName(TEXT("3_4")));
	BT_35 = Cast<UButton>(GetWidgetFromName(TEXT("3_5")));
	BT_36 = Cast<UButton>(GetWidgetFromName(TEXT("3_6")));
	BT_37 = Cast<UButton>(GetWidgetFromName(TEXT("3_7")));
	BT_40 = Cast<UButton>(GetWidgetFromName(TEXT("4_0")));
	BT_41 = Cast<UButton>(GetWidgetFromName(TEXT("4_1")));
	BT_42 = Cast<UButton>(GetWidgetFromName(TEXT("4_2")));
	BT_43 = Cast<UButton>(GetWidgetFromName(TEXT("4_3")));
	BT_44 = Cast<UButton>(GetWidgetFromName(TEXT("4_4")));
	BT_45 = Cast<UButton>(GetWidgetFromName(TEXT("4_5")));
	BT_46 = Cast<UButton>(GetWidgetFromName(TEXT("4_6")));
	BT_47 = Cast<UButton>(GetWidgetFromName(TEXT("4_7")));
	BT_50 = Cast<UButton>(GetWidgetFromName(TEXT("5_0")));
	BT_51 = Cast<UButton>(GetWidgetFromName(TEXT("5_1")));
	BT_52 = Cast<UButton>(GetWidgetFromName(TEXT("5_2")));
	BT_53 = Cast<UButton>(GetWidgetFromName(TEXT("5_3")));
	BT_54 = Cast<UButton>(GetWidgetFromName(TEXT("5_4")));
	BT_55 = Cast<UButton>(GetWidgetFromName(TEXT("5_5")));
	BT_56 = Cast<UButton>(GetWidgetFromName(TEXT("5_6")));
	BT_57 = Cast<UButton>(GetWidgetFromName(TEXT("5_7")));
	BT_60 = Cast<UButton>(GetWidgetFromName(TEXT("6_0")));
	BT_61 = Cast<UButton>(GetWidgetFromName(TEXT("6_1")));
	BT_62 = Cast<UButton>(GetWidgetFromName(TEXT("6_2")));
	BT_63 = Cast<UButton>(GetWidgetFromName(TEXT("6_3")));
	BT_64 = Cast<UButton>(GetWidgetFromName(TEXT("6_4")));
	BT_65 = Cast<UButton>(GetWidgetFromName(TEXT("6_5")));
	BT_66 = Cast<UButton>(GetWidgetFromName(TEXT("6_6")));
	BT_67 = Cast<UButton>(GetWidgetFromName(TEXT("6_7")));
	BT_70 = Cast<UButton>(GetWidgetFromName(TEXT("7_0")));
	BT_71 = Cast<UButton>(GetWidgetFromName(TEXT("7_1")));
	BT_72 = Cast<UButton>(GetWidgetFromName(TEXT("7_2")));
	BT_73 = Cast<UButton>(GetWidgetFromName(TEXT("7_3")));
	BT_74 = Cast<UButton>(GetWidgetFromName(TEXT("7_4")));
	BT_75 = Cast<UButton>(GetWidgetFromName(TEXT("7_5")));
	BT_76 = Cast<UButton>(GetWidgetFromName(TEXT("7_6")));
	BT_77 = Cast<UButton>(GetWidgetFromName(TEXT("7_7")));

	BTArr[0].Add(BT_00);
	BTArr[0].Add(BT_01);
	BTArr[0].Add(BT_02);
	BTArr[0].Add(BT_03);
	BTArr[0].Add(BT_04);
	BTArr[0].Add(BT_05);
	BTArr[0].Add(BT_06);
	BTArr[0].Add(BT_07);
	BTArr[1].Add(BT_10);
	BTArr[1].Add(BT_11);
	BTArr[1].Add(BT_12);
	BTArr[1].Add(BT_13);
	BTArr[1].Add(BT_14);
	BTArr[1].Add(BT_15);
	BTArr[1].Add(BT_16);
	BTArr[1].Add(BT_17);
	BTArr[2].Add(BT_20);
	BTArr[2].Add(BT_21);
	BTArr[2].Add(BT_22);
	BTArr[2].Add(BT_23);
	BTArr[2].Add(BT_24);
	BTArr[2].Add(BT_25);
	BTArr[2].Add(BT_26);
	BTArr[2].Add(BT_27);
	BTArr[3].Add(BT_30);
	BTArr[3].Add(BT_31);
	BTArr[3].Add(BT_32);
	BTArr[3].Add(BT_33);
	BTArr[3].Add(BT_34);
	BTArr[3].Add(BT_35);
	BTArr[3].Add(BT_36);
	BTArr[3].Add(BT_37);
	BTArr[4].Add(BT_40);
	BTArr[4].Add(BT_41);
	BTArr[4].Add(BT_42);
	BTArr[4].Add(BT_43);
	BTArr[4].Add(BT_44);
	BTArr[4].Add(BT_45);
	BTArr[4].Add(BT_46);
	BTArr[4].Add(BT_47);
	BTArr[5].Add(BT_50);
	BTArr[5].Add(BT_51);
	BTArr[5].Add(BT_52);
	BTArr[5].Add(BT_53);
	BTArr[5].Add(BT_54);
	BTArr[5].Add(BT_55);
	BTArr[5].Add(BT_56);
	BTArr[5].Add(BT_57);
	BTArr[6].Add(BT_60);
	BTArr[6].Add(BT_61);
	BTArr[6].Add(BT_62);
	BTArr[6].Add(BT_63);
	BTArr[6].Add(BT_64);
	BTArr[6].Add(BT_65);
	BTArr[6].Add(BT_66);
	BTArr[6].Add(BT_67);
	BTArr[7].Add(BT_70);
	BTArr[7].Add(BT_71);
	BTArr[7].Add(BT_72);
	BTArr[7].Add(BT_73);
	BTArr[7].Add(BT_74);
	BTArr[7].Add(BT_75);
	BTArr[7].Add(BT_76);
	BTArr[7].Add(BT_77);

	TT_00 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_00")));
	TT_01 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_01")));
	TT_02 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_02")));
	TT_03 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_03")));
	TT_04 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_04")));
	TT_05 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_05")));
	TT_06 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_06")));
	TT_07 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_07")));
	TT_10 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_10")));
	TT_11 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_11")));
	TT_12 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_12")));
	TT_13 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_13")));
	TT_14 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_14")));
	TT_15 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_15")));
	TT_16 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_16")));
	TT_17 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_17")));
	TT_20 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_20")));
	TT_21 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_21")));
	TT_22 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_22")));
	TT_23 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_23")));
	TT_24 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_24")));
	TT_25 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_25")));
	TT_26 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_26")));
	TT_27 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_27")));
	TT_30 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_30")));
	TT_31 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_31")));
	TT_32 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_32")));
	TT_33 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_33")));
	TT_34 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_34")));
	TT_35 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_35")));
	TT_36 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_36")));
	TT_37 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_37")));
	TT_40 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_40")));
	TT_41 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_41")));
	TT_42 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_42")));
	TT_43 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_43")));
	TT_44 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_44")));
	TT_45 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_45")));
	TT_46 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_46")));
	TT_47 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_47")));
	TT_50 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_50")));
	TT_51 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_51")));
	TT_52 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_52")));
	TT_53 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_53")));
	TT_54 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_54")));
	TT_55 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_55")));
	TT_56 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_56")));
	TT_57 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_57")));
	TT_60 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_60")));
	TT_61 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_61")));
	TT_62 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_62")));
	TT_63 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_63")));
	TT_64 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_64")));
	TT_65 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_65")));
	TT_66 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_66")));
	TT_67 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_67")));
	TT_70 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_70")));
	TT_71 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_71")));
	TT_72 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_72")));
	TT_73 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_73")));
	TT_74 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_74")));
	TT_75 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_75")));
	TT_76 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_76")));
	TT_77 = Cast<UTextBlock>(GetWidgetFromName(TEXT("T_77")));

	TTArr[0].Add(TT_00);
	TTArr[0].Add(TT_01);
	TTArr[0].Add(TT_02);
	TTArr[0].Add(TT_03);
	TTArr[0].Add(TT_04);
	TTArr[0].Add(TT_05);
	TTArr[0].Add(TT_06);
	TTArr[0].Add(TT_07);
	TTArr[1].Add(TT_10);
	TTArr[1].Add(TT_11);
	TTArr[1].Add(TT_12);
	TTArr[1].Add(TT_13);
	TTArr[1].Add(TT_14);
	TTArr[1].Add(TT_15);
	TTArr[1].Add(TT_16);
	TTArr[1].Add(TT_17);
	TTArr[2].Add(TT_20);
	TTArr[2].Add(TT_21);
	TTArr[2].Add(TT_22);
	TTArr[2].Add(TT_23);
	TTArr[2].Add(TT_24);
	TTArr[2].Add(TT_25);
	TTArr[2].Add(TT_26);
	TTArr[2].Add(TT_27);
	TTArr[3].Add(TT_30);
	TTArr[3].Add(TT_31);
	TTArr[3].Add(TT_32);
	TTArr[3].Add(TT_33);
	TTArr[3].Add(TT_34);
	TTArr[3].Add(TT_35);
	TTArr[3].Add(TT_36);
	TTArr[3].Add(TT_37);
	TTArr[4].Add(TT_40);
	TTArr[4].Add(TT_41);
	TTArr[4].Add(TT_42);
	TTArr[4].Add(TT_43);
	TTArr[4].Add(TT_44);
	TTArr[4].Add(TT_45);
	TTArr[4].Add(TT_46);
	TTArr[4].Add(TT_47);
	TTArr[5].Add(TT_50);
	TTArr[5].Add(TT_51);
	TTArr[5].Add(TT_52);
	TTArr[5].Add(TT_53);
	TTArr[5].Add(TT_54);
	TTArr[5].Add(TT_55);
	TTArr[5].Add(TT_56);
	TTArr[5].Add(TT_57);
	TTArr[6].Add(TT_60);
	TTArr[6].Add(TT_61);
	TTArr[6].Add(TT_62);
	TTArr[6].Add(TT_63);
	TTArr[6].Add(TT_64);
	TTArr[6].Add(TT_65);
	TTArr[6].Add(TT_66);
	TTArr[6].Add(TT_67);
	TTArr[7].Add(TT_70);
	TTArr[7].Add(TT_71);
	TTArr[7].Add(TT_72);
	TTArr[7].Add(TT_73);
	TTArr[7].Add(TT_74);
	TTArr[7].Add(TT_75);
	TTArr[7].Add(TT_76);
	TTArr[7].Add(TT_77);

	FF_00 = Cast<UImage>(GetWidgetFromName(TEXT("F_00")));
	FF_01 = Cast<UImage>(GetWidgetFromName(TEXT("F_01")));
	FF_02 = Cast<UImage>(GetWidgetFromName(TEXT("F_02")));
	FF_03 = Cast<UImage>(GetWidgetFromName(TEXT("F_03")));
	FF_04 = Cast<UImage>(GetWidgetFromName(TEXT("F_04")));
	FF_05 = Cast<UImage>(GetWidgetFromName(TEXT("F_05")));
	FF_06 = Cast<UImage>(GetWidgetFromName(TEXT("F_06")));
	FF_07 = Cast<UImage>(GetWidgetFromName(TEXT("F_07")));
	FF_10 = Cast<UImage>(GetWidgetFromName(TEXT("F_10")));
	FF_11 = Cast<UImage>(GetWidgetFromName(TEXT("F_11")));
	FF_12 = Cast<UImage>(GetWidgetFromName(TEXT("F_12")));
	FF_13 = Cast<UImage>(GetWidgetFromName(TEXT("F_13")));
	FF_14 = Cast<UImage>(GetWidgetFromName(TEXT("F_14")));
	FF_15 = Cast<UImage>(GetWidgetFromName(TEXT("F_15")));
	FF_16 = Cast<UImage>(GetWidgetFromName(TEXT("F_16")));
	FF_17 = Cast<UImage>(GetWidgetFromName(TEXT("F_17")));
	FF_20 = Cast<UImage>(GetWidgetFromName(TEXT("F_20")));
	FF_21 = Cast<UImage>(GetWidgetFromName(TEXT("F_21")));
	FF_22 = Cast<UImage>(GetWidgetFromName(TEXT("F_22")));
	FF_23 = Cast<UImage>(GetWidgetFromName(TEXT("F_23")));
	FF_24 = Cast<UImage>(GetWidgetFromName(TEXT("F_24")));
	FF_25 = Cast<UImage>(GetWidgetFromName(TEXT("F_25")));
	FF_26 = Cast<UImage>(GetWidgetFromName(TEXT("F_26")));
	FF_27 = Cast<UImage>(GetWidgetFromName(TEXT("F_27")));
	FF_30 = Cast<UImage>(GetWidgetFromName(TEXT("F_30")));
	FF_31 = Cast<UImage>(GetWidgetFromName(TEXT("F_31")));
	FF_32 = Cast<UImage>(GetWidgetFromName(TEXT("F_32")));
	FF_33 = Cast<UImage>(GetWidgetFromName(TEXT("F_33")));
	FF_34 = Cast<UImage>(GetWidgetFromName(TEXT("F_34")));
	FF_35 = Cast<UImage>(GetWidgetFromName(TEXT("F_35")));
	FF_36 = Cast<UImage>(GetWidgetFromName(TEXT("F_36")));
	FF_37 = Cast<UImage>(GetWidgetFromName(TEXT("F_37")));
	FF_40 = Cast<UImage>(GetWidgetFromName(TEXT("F_40")));
	FF_41 = Cast<UImage>(GetWidgetFromName(TEXT("F_41")));
	FF_42 = Cast<UImage>(GetWidgetFromName(TEXT("F_42")));
	FF_43 = Cast<UImage>(GetWidgetFromName(TEXT("F_43")));
	FF_44 = Cast<UImage>(GetWidgetFromName(TEXT("F_44")));
	FF_45 = Cast<UImage>(GetWidgetFromName(TEXT("F_45")));
	FF_46 = Cast<UImage>(GetWidgetFromName(TEXT("F_46")));
	FF_47 = Cast<UImage>(GetWidgetFromName(TEXT("F_47")));
	FF_50 = Cast<UImage>(GetWidgetFromName(TEXT("F_50")));
	FF_51 = Cast<UImage>(GetWidgetFromName(TEXT("F_51")));
	FF_52 = Cast<UImage>(GetWidgetFromName(TEXT("F_52")));
	FF_53 = Cast<UImage>(GetWidgetFromName(TEXT("F_53")));
	FF_54 = Cast<UImage>(GetWidgetFromName(TEXT("F_54")));
	FF_55 = Cast<UImage>(GetWidgetFromName(TEXT("F_55")));
	FF_56 = Cast<UImage>(GetWidgetFromName(TEXT("F_56")));
	FF_57 = Cast<UImage>(GetWidgetFromName(TEXT("F_57")));
	FF_60 = Cast<UImage>(GetWidgetFromName(TEXT("F_60")));
	FF_61 = Cast<UImage>(GetWidgetFromName(TEXT("F_61")));
	FF_62 = Cast<UImage>(GetWidgetFromName(TEXT("F_62")));
	FF_63 = Cast<UImage>(GetWidgetFromName(TEXT("F_63")));
	FF_64 = Cast<UImage>(GetWidgetFromName(TEXT("F_64")));
	FF_65 = Cast<UImage>(GetWidgetFromName(TEXT("F_65")));
	FF_66 = Cast<UImage>(GetWidgetFromName(TEXT("F_66")));
	FF_67 = Cast<UImage>(GetWidgetFromName(TEXT("F_67")));
	FF_70 = Cast<UImage>(GetWidgetFromName(TEXT("F_70")));
	FF_71 = Cast<UImage>(GetWidgetFromName(TEXT("F_71")));
	FF_72 = Cast<UImage>(GetWidgetFromName(TEXT("F_72")));
	FF_73 = Cast<UImage>(GetWidgetFromName(TEXT("F_73")));
	FF_74 = Cast<UImage>(GetWidgetFromName(TEXT("F_74")));
	FF_75 = Cast<UImage>(GetWidgetFromName(TEXT("F_75")));
	FF_76 = Cast<UImage>(GetWidgetFromName(TEXT("F_76")));
	FF_77 = Cast<UImage>(GetWidgetFromName(TEXT("F_77")));

	FFArr[0].Add(FF_00);
	FFArr[0].Add(FF_01);
	FFArr[0].Add(FF_02);
	FFArr[0].Add(FF_03);
	FFArr[0].Add(FF_04);
	FFArr[0].Add(FF_05);
	FFArr[0].Add(FF_06);
	FFArr[0].Add(FF_07);
	FFArr[1].Add(FF_10);
	FFArr[1].Add(FF_11);
	FFArr[1].Add(FF_12);
	FFArr[1].Add(FF_13);
	FFArr[1].Add(FF_14);
	FFArr[1].Add(FF_15);
	FFArr[1].Add(FF_16);
	FFArr[1].Add(FF_17);
	FFArr[2].Add(FF_20);
	FFArr[2].Add(FF_21);
	FFArr[2].Add(FF_22);
	FFArr[2].Add(FF_23);
	FFArr[2].Add(FF_24);
	FFArr[2].Add(FF_25);
	FFArr[2].Add(FF_26);
	FFArr[2].Add(FF_27);
	FFArr[3].Add(FF_30);
	FFArr[3].Add(FF_31);
	FFArr[3].Add(FF_32);
	FFArr[3].Add(FF_33);
	FFArr[3].Add(FF_34);
	FFArr[3].Add(FF_35);
	FFArr[3].Add(FF_36);
	FFArr[3].Add(FF_37);
	FFArr[4].Add(FF_40);
	FFArr[4].Add(FF_41);
	FFArr[4].Add(FF_42);
	FFArr[4].Add(FF_43);
	FFArr[4].Add(FF_44);
	FFArr[4].Add(FF_45);
	FFArr[4].Add(FF_46);
	FFArr[4].Add(FF_47);
	FFArr[5].Add(FF_50);
	FFArr[5].Add(FF_51);
	FFArr[5].Add(FF_52);
	FFArr[5].Add(FF_53);
	FFArr[5].Add(FF_54);
	FFArr[5].Add(FF_55);
	FFArr[5].Add(FF_56);
	FFArr[5].Add(FF_57);
	FFArr[6].Add(FF_60);
	FFArr[6].Add(FF_61);
	FFArr[6].Add(FF_62);
	FFArr[6].Add(FF_63);
	FFArr[6].Add(FF_64);
	FFArr[6].Add(FF_65);
	FFArr[6].Add(FF_66);
	FFArr[6].Add(FF_67);
	FFArr[7].Add(FF_70);
	FFArr[7].Add(FF_71);
	FFArr[7].Add(FF_72);
	FFArr[7].Add(FF_73);
	FFArr[7].Add(FF_74);
	FFArr[7].Add(FF_75);
	FFArr[7].Add(FF_76);
	FFArr[7].Add(FF_77);

	BT_00->OnClicked.AddDynamic(this, &UCM_MineUI::Button00Callback);
	BT_01->OnClicked.AddDynamic(this, &UCM_MineUI::Button01Callback);
	BT_02->OnClicked.AddDynamic(this, &UCM_MineUI::Button02Callback);
	BT_03->OnClicked.AddDynamic(this, &UCM_MineUI::Button03Callback);
	BT_04->OnClicked.AddDynamic(this, &UCM_MineUI::Button04Callback);
	BT_05->OnClicked.AddDynamic(this, &UCM_MineUI::Button05Callback);
	BT_06->OnClicked.AddDynamic(this, &UCM_MineUI::Button06Callback);
	BT_07->OnClicked.AddDynamic(this, &UCM_MineUI::Button07Callback);
	BT_10->OnClicked.AddDynamic(this, &UCM_MineUI::Button10Callback);
	BT_11->OnClicked.AddDynamic(this, &UCM_MineUI::Button11Callback);
	BT_12->OnClicked.AddDynamic(this, &UCM_MineUI::Button12Callback);
	BT_13->OnClicked.AddDynamic(this, &UCM_MineUI::Button13Callback);
	BT_14->OnClicked.AddDynamic(this, &UCM_MineUI::Button14Callback);
	BT_15->OnClicked.AddDynamic(this, &UCM_MineUI::Button15Callback);
	BT_16->OnClicked.AddDynamic(this, &UCM_MineUI::Button16Callback);
	BT_17->OnClicked.AddDynamic(this, &UCM_MineUI::Button17Callback);
	BT_20->OnClicked.AddDynamic(this, &UCM_MineUI::Button20Callback);
	BT_21->OnClicked.AddDynamic(this, &UCM_MineUI::Button21Callback);
	BT_22->OnClicked.AddDynamic(this, &UCM_MineUI::Button22Callback);
	BT_23->OnClicked.AddDynamic(this, &UCM_MineUI::Button23Callback);
	BT_24->OnClicked.AddDynamic(this, &UCM_MineUI::Button24Callback);
	BT_25->OnClicked.AddDynamic(this, &UCM_MineUI::Button25Callback);
	BT_26->OnClicked.AddDynamic(this, &UCM_MineUI::Button26Callback);
	BT_27->OnClicked.AddDynamic(this, &UCM_MineUI::Button27Callback);
	BT_30->OnClicked.AddDynamic(this, &UCM_MineUI::Button30Callback);
	BT_31->OnClicked.AddDynamic(this, &UCM_MineUI::Button31Callback);
	BT_32->OnClicked.AddDynamic(this, &UCM_MineUI::Button32Callback);
	BT_33->OnClicked.AddDynamic(this, &UCM_MineUI::Button33Callback);
	BT_34->OnClicked.AddDynamic(this, &UCM_MineUI::Button34Callback);
	BT_35->OnClicked.AddDynamic(this, &UCM_MineUI::Button35Callback);
	BT_36->OnClicked.AddDynamic(this, &UCM_MineUI::Button36Callback);
	BT_37->OnClicked.AddDynamic(this, &UCM_MineUI::Button37Callback);
	BT_40->OnClicked.AddDynamic(this, &UCM_MineUI::Button40Callback);
	BT_41->OnClicked.AddDynamic(this, &UCM_MineUI::Button41Callback);
	BT_42->OnClicked.AddDynamic(this, &UCM_MineUI::Button42Callback);
	BT_43->OnClicked.AddDynamic(this, &UCM_MineUI::Button43Callback);
	BT_44->OnClicked.AddDynamic(this, &UCM_MineUI::Button44Callback);
	BT_45->OnClicked.AddDynamic(this, &UCM_MineUI::Button45Callback);
	BT_46->OnClicked.AddDynamic(this, &UCM_MineUI::Button46Callback);
	BT_47->OnClicked.AddDynamic(this, &UCM_MineUI::Button47Callback);
	BT_50->OnClicked.AddDynamic(this, &UCM_MineUI::Button50Callback);
	BT_51->OnClicked.AddDynamic(this, &UCM_MineUI::Button51Callback);
	BT_52->OnClicked.AddDynamic(this, &UCM_MineUI::Button52Callback);
	BT_53->OnClicked.AddDynamic(this, &UCM_MineUI::Button53Callback);
	BT_54->OnClicked.AddDynamic(this, &UCM_MineUI::Button54Callback);
	BT_55->OnClicked.AddDynamic(this, &UCM_MineUI::Button55Callback);
	BT_56->OnClicked.AddDynamic(this, &UCM_MineUI::Button56Callback);
	BT_57->OnClicked.AddDynamic(this, &UCM_MineUI::Button57Callback);
	BT_60->OnClicked.AddDynamic(this, &UCM_MineUI::Button60Callback);
	BT_61->OnClicked.AddDynamic(this, &UCM_MineUI::Button61Callback);
	BT_62->OnClicked.AddDynamic(this, &UCM_MineUI::Button62Callback);
	BT_63->OnClicked.AddDynamic(this, &UCM_MineUI::Button63Callback);
	BT_64->OnClicked.AddDynamic(this, &UCM_MineUI::Button64Callback);
	BT_65->OnClicked.AddDynamic(this, &UCM_MineUI::Button65Callback);
	BT_66->OnClicked.AddDynamic(this, &UCM_MineUI::Button66Callback);
	BT_67->OnClicked.AddDynamic(this, &UCM_MineUI::Button67Callback);
	BT_70->OnClicked.AddDynamic(this, &UCM_MineUI::Button70Callback);
	BT_71->OnClicked.AddDynamic(this, &UCM_MineUI::Button71Callback);
	BT_72->OnClicked.AddDynamic(this, &UCM_MineUI::Button72Callback);
	BT_73->OnClicked.AddDynamic(this, &UCM_MineUI::Button73Callback);
	BT_74->OnClicked.AddDynamic(this, &UCM_MineUI::Button74Callback);
	BT_75->OnClicked.AddDynamic(this, &UCM_MineUI::Button75Callback);
	BT_76->OnClicked.AddDynamic(this, &UCM_MineUI::Button76Callback);
	BT_77->OnClicked.AddDynamic(this, &UCM_MineUI::Button77Callback);

}


void UCM_MineUI::Button00Callback()
{
	if (!FF_00->IsVisible())
	{
		DFS(0, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button01Callback()
{
	if (!FF_01->IsVisible())
	{
		DFS(0, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button02Callback()
{
	if (!FF_02->IsVisible())
	{
		DFS(0, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button03Callback()
{
	if (!FF_03->IsVisible())
	{
		DFS(0, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button04Callback()
{
	if (!FF_04->IsVisible())
	{
		DFS(0, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button05Callback()
{
	if (!FF_05->IsVisible())
	{
		DFS(0, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button06Callback()
{
	if (!FF_06->IsVisible())
	{
		DFS(0, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button07Callback()
{
	if (!FF_07->IsVisible())
	{
		DFS(0, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button10Callback()
{
	if (!FF_10->IsVisible())
	{
		DFS(1, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button11Callback()
{
	if (!FF_11->IsVisible())
	{
		DFS(1, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button12Callback()
{
	if (!FF_12->IsVisible())
	{
		DFS(1, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button13Callback()
{
	if (!FF_13->IsVisible())
	{
		DFS(1, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button14Callback()
{
	if (!FF_14->IsVisible())
	{
		DFS(1, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button15Callback()
{
	if (!FF_15->IsVisible())
	{
		DFS(1, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button16Callback()
{
	if (!FF_16->IsVisible())
	{
		DFS(1, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button17Callback()
{
	if (!FF_17->IsVisible())
	{
		DFS(1, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button20Callback()
{
	if (!FF_20->IsVisible())
	{
		DFS(2, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button21Callback()
{
	if (!FF_21->IsVisible())
	{
		DFS(2, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button22Callback()
{
	if (!FF_22->IsVisible())
	{
		DFS(2, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button23Callback()
{
	if (!FF_23->IsVisible())
	{
		DFS(2, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button24Callback()
{
	if (!FF_24->IsVisible())
	{
		DFS(2, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button25Callback()
{
	if (!FF_25->IsVisible())
	{
		DFS(2, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button26Callback()
{
	if (!FF_26->IsVisible())
	{
		DFS(2, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button27Callback()
{
	if (!FF_27->IsVisible())
	{
		DFS(2, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button30Callback()
{
	if (!FF_30->IsVisible())
	{
		DFS(3, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button31Callback()
{
	if (!FF_31->IsVisible())
	{
		DFS(3, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button32Callback()
{
	if (!FF_32->IsVisible())
	{
		DFS(3, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button33Callback()
{
	if (!FF_33->IsVisible())
	{
		DFS(3, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button34Callback()
{
	if (!FF_34->IsVisible())
	{
		DFS(3, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button35Callback()
{
	if (!FF_35->IsVisible())
	{
		DFS(3, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button36Callback()
{
	if (!FF_36->IsVisible())
	{
		DFS(3, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button37Callback()
{
	if (!FF_37->IsVisible())
	{
		DFS(3, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button40Callback()
{
	if (!FF_40->IsVisible())
	{
		DFS(4, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button41Callback()
{
	if (!FF_41->IsVisible())
	{
		DFS(4, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button42Callback()
{
	if (!FF_42->IsVisible())
	{
		DFS(4, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button43Callback()
{
	if (!FF_43->IsVisible())
	{
		DFS(4, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button44Callback()
{
	if (!FF_44->IsVisible())
	{
		DFS(4, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button45Callback()
{
	if (!FF_45->IsVisible())
	{
		DFS(4, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button46Callback()
{
	if (!FF_46->IsVisible())
	{
		DFS(4, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button47Callback()
{
	if (!FF_47->IsVisible())
	{
		DFS(4, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button50Callback()
{
	if (!FF_50->IsVisible())
	{
		DFS(5, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button51Callback()
{
	if (!FF_51->IsVisible())
	{
		DFS(5, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button52Callback()
{
	if (!FF_52->IsVisible())
	{
		DFS(5, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button53Callback()
{
	if (!FF_53->IsVisible())
	{
		DFS(5, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button54Callback()
{
	if (!FF_54->IsVisible())
	{
		DFS(5, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button55Callback()
{
	if (!FF_55->IsVisible())
	{
		DFS(5, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button56Callback()
{
	if (!FF_56->IsVisible())
	{
		DFS(5, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button57Callback()
{
	if (!FF_57->IsVisible())
	{
		DFS(5, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button60Callback()
{
	if (!FF_60->IsVisible())
	{
		DFS(6, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button61Callback()
{
	if (!FF_61->IsVisible())
	{
		DFS(6, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button62Callback()
{
	if (!FF_62->IsVisible())
	{
		DFS(6, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button63Callback()
{
	if (!FF_63->IsVisible())
	{
		DFS(6, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button64Callback()
{
	if (!FF_64->IsVisible())
	{
		DFS(6, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button65Callback()
{
	if (!FF_65->IsVisible())
	{
		DFS(6, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button66Callback()
{
	if (!FF_66->IsVisible())
	{
		DFS(6, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button67Callback()
{
	if (!FF_67->IsVisible())
	{
		DFS(6, 7, size);
		OpenMine();
	}
}
void UCM_MineUI::Button70Callback()
{
	if (!FF_70->IsVisible())
	{
		DFS(7, 0, size);
		OpenMine();
	}
}
void UCM_MineUI::Button71Callback()
{
	if (!FF_71->IsVisible())
	{
		DFS(7, 1, size);
		OpenMine();
	}
}
void UCM_MineUI::Button72Callback()
{
	if (!FF_72->IsVisible())
	{
		DFS(7, 2, size);
		OpenMine();
	}
}
void UCM_MineUI::Button73Callback()
{
	if (!FF_73->IsVisible())
	{
		DFS(7, 3, size);
		OpenMine();
	}
}
void UCM_MineUI::Button74Callback()
{
	if (!FF_74->IsVisible())
	{
		DFS(7, 4, size);
		OpenMine();
	}
}
void UCM_MineUI::Button75Callback()
{
	if (!FF_75->IsVisible())
	{
		DFS(7, 5, size);
		OpenMine();
	}
}
void UCM_MineUI::Button76Callback()
{
	if (!FF_76->IsVisible())
	{
		DFS(7, 6, size);
		OpenMine();
	}
}
void UCM_MineUI::Button77Callback()
{
	if (!FF_77->IsVisible())
	{
		DFS(7, 7, size);
		OpenMine();
	}
}



void UCM_MineUI::InitArr()
{
	for (int32 i = 0; i < size; i++)
	{
		for (int32 j = 0; j < size; j++)
		{
			Mine2D[i].Add(0);
			CheckOpen[i].Add(0);
		}
		
	}
}

void UCM_MineUI::SetMine() {

	int32 MineRow, MineCol;
	int32 i;

	for (i = 0; i < size; i++) {

		MineRow = FMath::RandRange(1, 6);
		MineCol = FMath::RandRange(1, 6);

		if (Mine2D[MineRow][MineCol] == -9) {
			i--;
		}
		else {
			if (CanSetMine(MineRow, MineCol))
			{
				Mine2D[MineRow][MineCol] = -9;
			}
			else
			{
				i--;
			}
		}
	}
}

void UCM_MineUI::SetMineNum() {

	int32 i, j, c, r;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (Mine2D[i][j] < 0) {
				for (c = i - 1; c < i + 2; c++) {
					for (r = j - 1; r < j + 2; r++) {
						if (c == i && r == j) continue;
						else if (c < 0 || c > size - 1 || r < 0 || r > size - 1) continue;
						else Mine2D[c][r]++;
					}
				}
			}
			else continue;
		}
	}

}

bool UCM_MineUI::CanSetMine(int32 CheckRow, int32 CheckCol)
{
	int32 Count = 0;
	for (int32 i = CheckRow - 1; i <= CheckRow + 1; i++)
	{
		for (int32 j = CheckCol - 1; j <= CheckCol + 1; j++)
		{
			if (Mine2D[i][j] < 0)
				Count++;
		}
	}

	if (Count >= 2)
	{
		return false;
	}

	return true;
}

void UCM_MineUI::ShowMine() {
	
	for (int32 i = 0; i < size; i++)
	{
		for (int32 j = 0; j < size; j++)
		{
			UE_LOG(LogTemp, Log, TEXT("%d"),Mine2D[i][j]);
		}
		
	}
}

void UCM_MineUI::DFS(int32 row, int32 col, int32 num)
{
	if (row < 0) return;
	if (col < 0) return;
	if (row >= num) return;
	if (col >= num) return;
	if (CheckOpen[row][col] == 1) return;
	else if(CheckOpen[row][col]==0)
	{
		CheckOpen[row][col] = 1;
	}

	if (Mine2D[row][col] == 0) {
		DFS(row - 1, col - 1, num);
		DFS(row - 1, col, num);
		DFS(row - 1, col + 1, num);
		DFS(row, col - 1, num);
		DFS(row, col, num);
		DFS(row, col + 1, num);
		DFS(row + 1, col - 1, num);
		DFS(row + 1, col, num);
		DFS(row + 1, col + 1, num);
	}

}

void UCM_MineUI::OpenMine()
{
	for (int32 i = 0; i < size; i++)
	{
		for (int32 j = 0; j < size; j++)
		{
			if (CheckOpen[i][j] == 1)
			{
				BTArr[i][j]->SetVisibility(ESlateVisibility::HitTestInvisible);
				BTArr[i][j]->SetBackgroundColor(FLinearColor(0.76, 0.76, 0.76, 1.0));
				FString Text;
				Text = FString::Printf(TEXT("%d"), Mine2D[i][j]);
				TTArr[i][j]->SetText(FText::FromString(Text));
				TTArr[i][j]->SetVisibility(ESlateVisibility::Visible);
				FFArr[i][j]->SetVisibility(ESlateVisibility::Hidden);
			}
		}

	}
}