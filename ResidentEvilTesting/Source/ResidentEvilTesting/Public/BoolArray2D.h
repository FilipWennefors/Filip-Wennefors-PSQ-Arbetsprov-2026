// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RESIDENTEVILTESTING_API BoolArray2D
{
public:
	BoolArray2D(int width = 0, int height = 0);
#pragma region Variables
private:
	TArray<bool> internalArray;

	int _width;
	int _height;
#pragma endregion

#pragma region Functions
public: 	
	void ResizeArray(int newWidth, int newHeight);

	bool GetIndexValue(int x, int y);

	void SetIndexValue(bool value, int x, int y);

#pragma endregion
};
