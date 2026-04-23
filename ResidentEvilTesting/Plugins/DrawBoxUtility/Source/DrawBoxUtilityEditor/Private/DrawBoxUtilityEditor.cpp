#include "DrawBoxUtilityEditor.h"

#include "UnrealEdGlobals.h"
#include "VisualizationBox.h"
#include "VisualizationBoxVisualizer.h"
#include "Editor/UnrealEdEngine.h"

#define LOCTEXT_NAMESPACE "FDrawBoxUtilityEditorModule"

void FDrawBoxUtilityEditorModule::StartupModule()
{
    if (GUnrealEd)
    {
        const TSharedPtr<FVisualizationBoxVisualizer> BoxVisualizer = MakeShareable(new FVisualizationBoxVisualizer);
        GUnrealEd->RegisterComponentVisualizer(UVisualizationBox::StaticClass()->GetFName(), BoxVisualizer);
        BoxVisualizer->OnRegister();
    }
}

void FDrawBoxUtilityEditorModule::ShutdownModule()
{
    if (GUnrealEd)
    {
        GUnrealEd->UnregisterComponentVisualizer(UVisualizationBox::StaticClass()->GetFName());
    }
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FDrawBoxUtilityEditorModule, DrawBoxUtilityEditor)