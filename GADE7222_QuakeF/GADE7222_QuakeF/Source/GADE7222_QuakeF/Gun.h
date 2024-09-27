#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class GADE7222_QuakeF_API AGun : public AActor
{
    GENERATED_BODY()

public:
    AGun();

    // Fire the gun
    virtual void Fire();

    // Properties for damage and ammo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    int32 Damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    int32 MaxAmmo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    int32 CurrentAmmo;

    UPROPERTY(EditDefaultsOnly, Category = "Bullet")
    TSubclassOf<ABullet> BulletClass;
    // Check if the gun has ammo
    bool HasAmmo() const;

    // Handle ammo usage
    void ConsumeAmmo();

    // Pickup logic (Override in child classes)
    virtual void OnPickup();

};
