// Fill out your copyright notice in the Description page of Project Settings.


#include "VisualizationBoxVisualizer.h"

#include "VisualizationBox.h"

void FVisualizationBoxVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	FComponentVisualizer::DrawVisualization(Component, View, PDI);
	const UVisualizationBox* visualizationBoxComponent = Cast<UVisualizationBox>(Component); 
	
	//Naming Scheme is left right foward back top bottom
	
	
	FVector leftForwardBottomCornerPos = visualizationBoxComponent->GetLeftForwardBottomCornerPos();
	FVector rightForwardBottomCornerPos = visualizationBoxComponent->GetRightForwardBottomCornerPos();
	FVector leftBackwardBottomCornerPos = visualizationBoxComponent->GetLeftBackwardBottomCornerPos();
	FVector rightBackwardBottomCornerPos = visualizationBoxComponent->GetRightBackwardBottomCornerPos();
	
	FVector leftForwardTopCornerPos = visualizationBoxComponent->GetLeftForwardTopCornerPos();
	FVector rightForwardTopCornerPos = visualizationBoxComponent->GetRightForwardTopCornerPos();
	FVector leftBackwardTopCornerPos = visualizationBoxComponent->GetLeftBackwardTopCornerPos();
	FVector rightBackwardTopCornerPos = visualizationBoxComponent->GetRightBackwardTopCornerPos();



	//Draw four lines for the bottom square
	PDI->DrawLine(leftForwardBottomCornerPos, rightForwardBottomCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(leftBackwardBottomCornerPos, rightBackwardBottomCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(leftBackwardBottomCornerPos, leftForwardBottomCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(rightBackwardBottomCornerPos, rightForwardBottomCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	
	//Draw Four lines for the top square
	PDI->DrawLine(leftForwardTopCornerPos, rightForwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(leftBackwardTopCornerPos, rightBackwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(leftBackwardTopCornerPos, leftForwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(rightBackwardTopCornerPos, rightForwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);

	//Finally draw four lines to connect the bottom to the top square to form the cube
	PDI->DrawLine(leftForwardBottomCornerPos, leftForwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(rightForwardBottomCornerPos, rightForwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(leftBackwardBottomCornerPos, leftBackwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	PDI->DrawLine(rightBackwardBottomCornerPos, rightBackwardTopCornerPos, FLinearColor::Red, SDPG_Foreground, visualizationBoxComponent->GetLineThickness(), 0, false);
	
	
}
