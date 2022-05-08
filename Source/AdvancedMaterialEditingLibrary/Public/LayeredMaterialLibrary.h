#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Materials/MaterialInstanceConstant.h"
#include "LayeredMaterialLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDMATERIALEDITINGLIBRARY_API ULayeredMaterialLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
	static int32 GetLayerCount(UMaterialInstance* Instance);

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool AddMaterialLayer(UMaterialInstance* Instance);

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool IsLayeredMaterial(UMaterialInstance* Instance);

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool AssignLayerMaterial(UMaterialInstance* Instance, int32 LayerIndex, UMaterialFunctionInterface* NewLayerFunction);
	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool AssignBlendLayer(UMaterialInstance* Instance, int32 LayerIndex, UMaterialFunctionInterface* NewBlendLayerFunction);

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static float GetLayeredMaterialScalarParameterValue(UMaterialInstance* Instance, FName ParameterName, int32 LayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool SetLayeredMaterialScalarParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName, int32 LayerIndex, float Value);

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool GetLayeredMaterialStaticSwitchParameterValue(UMaterialInstance* Instance, FName ParameterName, int32 LayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool SetLayeredMaterialStaticSwitchParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName, int32 LayerIndex, bool Value);

	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static UTexture* GetLayeredMaterialTextureParameterValue(UMaterialInstance* Instance, FName ParameterName, int32 LayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AdvancedMaterialEditingLibrary")
		static bool SetLayeredMaterialTextureParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName, int32 LayerIndex, UTexture* Value);
};