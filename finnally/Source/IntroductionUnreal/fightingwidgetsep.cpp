#include "FightingWidget.h"

void UFightingWidget::SetEndText(FString Text)
{
	if (EndTextBlock)
	{
		EndTextBlock->SetText(FText::FromString(Text));
	}
}

void UFightingWidget::SetHealth(float HealthRatio)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(HealthRatio);
	}
}