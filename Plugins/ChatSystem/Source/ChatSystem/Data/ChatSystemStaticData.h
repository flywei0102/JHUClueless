// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "ChatSystemStaticData.generated.h"


UENUM(BlueprintType)
enum class  EChannelReceiveTarget :uint8
{
	Custom,			//�Զ���

	ALl,			//���ж��� 

	AllAlive,		//������
	
	AllDead,		//��������
	
	BadGuy,			//����
	
	GoodGuy,		//����
};

/**
 * 
 */
UCLASS()
class CHATSYSTEM_API UChatSystemStaticData : public UDataAsset
{
	GENERATED_BODY()
	
};



/*
����Channel���ݽṹ
*/
USTRUCT(BlueprintType)
struct FChatSystemChannelData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY();

public:
	/*Ƶ������*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ChannelName;

	/*Ƶ���Ľ��ն���*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EChannelReceiveTarget ChannelReceiveTarget;
};




/*
Ԥ�踻�ı������� ����
*/
USTRUCT(BlueprintType)
struct FHyperLinkChatMessageData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY();

public:
	/*Ԥ������*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName MessageName;

	/*Ԥ������*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Description;

	/*Ԥ���ı�*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MessageContant;


	/*����TagTag*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTag SelfGamePlayTag;
};