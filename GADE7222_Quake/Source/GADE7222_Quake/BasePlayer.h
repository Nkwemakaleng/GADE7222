#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasePlayer.generated.h"

UCLASS()
class GADE7222_Quake_API ABasePlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Constructor
	ABasePlayer();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Health and Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 AmmoCount;

	// Death handling
	UFUNCTION(BlueprintCallable, Category = "Player Stats")
	virtual void Die();

	// Damage handling
	UFUNCTION(BlueprintCallable, Category = "Player Stats")
	virtual void TakeDamage(float DamageAmount);

	// Additional methods (e.g. for Quake-like pickups)
	UFUNCTION(BlueprintCallable, Category = "Player Stats")
	virtual void PickupAmmo(int32 AmmoAmount);

	UFUNCTION(BlueprintCallable, Category = "Player Stats")
	virtual void PickupHealth(float HealthAmount);

	UFUNCTION(BlueprintCallable, Category = "Player Stats")
	virtual void PickupArmor(float ArmorAmount);
};

