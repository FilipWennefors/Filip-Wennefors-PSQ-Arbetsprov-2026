#pragma once

#include "CoreMinimal.h"

template <typename T>
class RESIDENTEVILTESTING_API TArray2D
{
public:
	TArray2D(int Width, int Height)
		: _width(Width),
		  _height(Height)
	{
		internalArray.init(nullptr, Width * Height);
		// internalArray = TArray<T>();
		// for (int i = 0; i < Width * Height; i++)
		// {
		// 	internalArray.Add(TElementType<T>);
		// }
	}
#pragma region Variables
	private:
	TArray<T> internalArray;

	int _width;
	int _height;
#pragma endregion

#pragma region Functions
	public: 	
	void ResizeArray(int newWidth, int newHeight);

	//Gets the value stored in the slot in the specified coordinates
	T GetIndexValue(int x, int y);

	void SetIndexValue(bool value, int x, int y);

#pragma endregion
};

