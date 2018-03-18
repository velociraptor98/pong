// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Boundary.generated.h"

class APongGameMode;

UCLASS()
class PONG_API ABoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoundary();

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Boundary Type",meta=(BlueprintProtected))
	bool isGoal = false;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Boundary Type",meta=(BlueprintProtected))
	bool isLeftGoal = false;
	//UPROPERTY(EditAnywher,BlueprintReadOnly,Category="Boundary Type",meta=(Blueprint Protected))
	//bool isRightGoal = false;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="References",meta=(BlueprintProtected))
	APongGameMode* GameModeref;
private:
	UPROPERTY(VisibleAnywhere, Category = "Collision")
		 UBoxComponent* Bounds;


	
	
};
