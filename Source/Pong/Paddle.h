// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Paddle.generated.h"

class ABall;

UCLASS()
class PONG_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
		UPaperSpriteComponent *PSprite;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Collision",meta=(AllowPrivateAccess="true"))
		UBoxComponent *Collider;

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Float",meta=(BlueprintProtected))
	float MoveSpeed = 10.0f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Setup",meta=(BlueprintProtected))
	ABall *BallRef;
};
