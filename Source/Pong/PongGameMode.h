// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

/**
 * 
 */
class ABall;
class UGameHUD;
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void IncreasePlayerScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void IncreaseAiScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Logic")
		void SpawnBall();
	UPROPERTY(BlueprintReadWrite, Category = "References")
		ABall *BallRef;
protected:
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD * GameHUDref;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float Direction = -1;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Float",meta=(BlueprintReadWrite))
	float BallSpeed = 1400.0f;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Score", meta = (BlueprintProtected))
	int PlayerScore = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int AiScore = 0;


	
	
	
};
