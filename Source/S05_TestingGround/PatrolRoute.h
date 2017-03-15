// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"


/**
*A Route card to help AI choose their next waypoint
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S05_TESTINGGROUND_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:
	TArray < AActor*> GetPatrolPoints() const; // TODO remove or create getter

protected:

public:	
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
		TArray < AActor*> PatrolPoints; // TODO remove or create getter

		
	
};
