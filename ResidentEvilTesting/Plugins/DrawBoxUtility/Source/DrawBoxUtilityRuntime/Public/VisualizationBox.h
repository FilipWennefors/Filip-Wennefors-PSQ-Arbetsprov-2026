// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VisualizationBox.generated.h"

//Component to draw an editor only box. Can be useful for various visualizations
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DRAWBOXUTILITYRUNTIME_API UVisualizationBox : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVisualizationBox();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FVector boxDimensions;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FVector boxOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float lineThickness;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	float GetLineThickness() const
	{
		return lineThickness;
	}
	
	FVector GetLeftForwardBottomCornerPos() const;
	FVector GetRightForwardBottomCornerPos() const;
	FVector GetLeftBackwardBottomCornerPos() const;
	FVector GetRightBackwardBottomCornerPos() const;
	FVector GetLeftForwardTopCornerPos() const;
	FVector GetRightForwardTopCornerPos() const;
	FVector GetLeftBackwardTopCornerPos() const;
	FVector GetRightBackwardTopCornerPos() const;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
