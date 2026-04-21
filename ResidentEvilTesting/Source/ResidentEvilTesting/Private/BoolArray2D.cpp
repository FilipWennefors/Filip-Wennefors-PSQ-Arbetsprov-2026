// Fill out your copyright notice in the Description page of Project Settings.


#include "BoolArray2D.h"

BoolArray2D::BoolArray2D(int width, int height)
{
	_width = width;
	_height = height;
	for (int i = 0; i < width * height; i++)
	{
		internalArray.Add(false);
		//internalArray[i] = false;
	}
}

void BoolArray2D::ResizeArray(int newWidth, int newHeight)
{
	//Implement later
	UE_LOG(LogTemp, Warning, TEXT("ResizeArray not implemented yet"));
	
}
bool BoolArray2D::GetIndexValue(int x, int y)
{
	if (x > this->_width - 1 || y > this->_height - 1)
		return false;

	
	/*What we do here is the following
	 * Multiply the y value by width to get the vertical position
	 * add x to get horizontal position
	 */
	int arrayPos = y * this->_width + x;

	return internalArray[arrayPos];
}
void BoolArray2D::SetIndexValue(bool value, int x, int y)
{
	/*What we do here is the following
	 * Multiply the y value by width to get the vertical position
	 * add x to get horizontal position
	 */

	int arrayPos = y * this->_width + x;

	internalArray[arrayPos] = value;
}