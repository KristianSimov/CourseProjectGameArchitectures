// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_ActivatePriestSkill.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNARPG_API UBTTask_ActivatePriestSkill : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
