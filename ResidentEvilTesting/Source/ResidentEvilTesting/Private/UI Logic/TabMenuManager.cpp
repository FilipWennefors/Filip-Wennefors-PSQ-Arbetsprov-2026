// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/TabMenuManager.h"

void UTabMenuManager::GetWidgetIndexForwardsPress(int widgetChildrenCount, int CurrentWidgetIndex, int& newWidgetIndex)
{
	int _newWidgetIndex = CurrentWidgetIndex + 1;
	newWidgetIndex = _newWidgetIndex % widgetChildrenCount;
}
void UTabMenuManager::GetWidgetIndexBackwardsPress(int widgetChildrenCount, int CurrentWidgetIndex, int& newWidgetIndex)
{
	int _newWidgetIndex = CurrentWidgetIndex - 1;
	if (_newWidgetIndex < 0)
		newWidgetIndex = widgetChildrenCount - 1;
	else
		newWidgetIndex = _newWidgetIndex;
}
