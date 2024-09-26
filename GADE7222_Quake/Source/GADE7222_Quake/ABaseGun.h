#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseGun.generated.h"

UCLASS()
class GADE7222_Quake_API ABaseGun : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this gun's properties
	ABaseGun();

protected:
	virtual void BeginPlay() override;

public:
	// The damage this gun deals
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Stats")
	float Damage;

	// Ammo properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Stats")
	int32 MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Stats")
	int32 CurrentAmmo;

	// Function to shoot the gun
	UFUNCTION(BlueprintCallable, Category = "Gun Functions")
	virtual void Fire();

	// Function to check if there's ammo left
	bool HasAmmo() const { return CurrentAmmo > 0; }

	// Function to reload ammo
	UFUNCTION(BlueprintCallable, Category = "Gun Functions")
	void Reload(int32 AmmoAmount);
};

