// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "ItemActionButton.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UItemActionButton : public UUserWidget
{
	GENERATED_BODY()
#pragma region Variables
public:
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonClickedEvent OnClicked;
	
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonPressedEvent OnPressed;
	
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonReleasedEvent OnReleased;
	
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonHoverEvent OnHovered;
	
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonHoverEvent OnUnhovered;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* Button;
#pragma endregion
	
#pragma region Functions
private:
	UFUNCTION()
	void CallOnClicked();
	
	UFUNCTION()
	void CallOnPressed();
	
	UFUNCTION()
	void CallOnReleased();
	
	UFUNCTION()
	void CallOnHovered();

	UFUNCTION()
	void CallOnUnhovered();

protected:
	
	virtual void NativeOnInitialized() override;
	virtual void NativeDestruct() override;
#pragma endregion
};
