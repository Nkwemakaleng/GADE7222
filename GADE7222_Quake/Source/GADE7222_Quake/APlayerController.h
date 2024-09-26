#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "APlayerController.generated.h"

UCLASS()
class GADE7222_Quake_API AYourPlayerController : public ACharacter
{
    GENERATED_BODY()

public:
    AYourPlayerController();

protected:
    virtual void SetupInputComponent() override;

private:
    void MoveForward(float Value);
    void MoveRight(float Value);
    void StartSprinting();
    void StopSprinting();
    void SelectFirearm1();
    void SelectFirearm2();
    void Shoot();

    bool bIsSprinting;
    int32 CurrentFirearm;
};
