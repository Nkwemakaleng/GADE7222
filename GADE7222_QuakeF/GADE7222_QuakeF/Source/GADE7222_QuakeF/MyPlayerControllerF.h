#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerControllerF.generated.h"

UCLASS()
class GADE7222_QuakeF_API AMyPlayerControllerF : public APlayerController
{
    GENERATED_BODY()

public:
    AMyPlayerControllerF();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // Fire
    void OnFire();

    // Weapon switching
    void SwitchToFirstWeapon();
    void SwitchToSecondWeapon();

    // Health management
    void TakeDamage(float DamageAmount);

    // Player character reference
    AMyCharacter* MyCharacter;
};
