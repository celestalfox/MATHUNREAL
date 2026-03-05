#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "FightingWidget.generated.h"

UCLASS()
class YOURGAME_API UFightingWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	// Fonction pour changer le texte
	UFUNCTION(BlueprintCallable, Category = "UI")
	void SetEndText(FString Text);

	// Fonction pour changer la vie
	UFUNCTION(BlueprintCallable, Category = "UI")
	void SetHealth(float HealthRatio);

protected:

	// Bloc de texte bindé depuis le Widget Blueprint
	UPROPERTY(meta = (BindWidget))
	UTextBlock* EndTextBlock;

	// Barre de vie bindée depuis le Widget Blueprint
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;
};