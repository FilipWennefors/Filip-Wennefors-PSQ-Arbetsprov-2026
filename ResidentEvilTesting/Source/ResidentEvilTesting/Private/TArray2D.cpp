#include <TArray2D.h>

template <typename T>
void TArray2D<T>::ResizeArray(int newWidth, int newHeight)
{
	//Implement later
	UE_LOG(LogTemp, Warning, TEXT("ResizeArray not implemented yet"));
}
template <typename T>
T TArray2D<T>::GetIndexValue(int x, int y)
{
	if (x > this->_width - 1 || y > this->_height - 1)
	{
		UE_LOG(LogTemp, Error, TEXT("Width or height is larger than array dimensions"));
		return nullptr;
	}
	
	/*What we do here is the following
	 * Multiply the y value by width to get the vertical position
	 * add x to get horizontal position
	 */
	int arrayPos = y * this->_width + x;

	return internalArray[arrayPos];
}

template <typename T>
void TArray2D<T>::SetIndexValue(bool value, int x, int y)
{
	/*What we do here is the following
	 * Multiply the y value by width to get the vertical position
	 * add x to get horizontal position
	 */

	int arrayPos = y * this->_width + x;

	internalArray[arrayPos] = value;
}
/*
 *
 * 
 */