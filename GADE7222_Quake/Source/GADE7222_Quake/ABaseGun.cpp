#include "BaseGun.h"

// Sets default values
ABaseGun::ABaseGun()
{
	// Default values
	MaxAmmo = 30;  // Default max ammo
	CurrentAmmo = MaxAmmo;
	Damage = 10.0f; // Default damage
}

// Called when the game starts or when spawned
void ABaseGun::BeginPlay()
{
	Super::BeginPlay();
}

// Fire function implementation
void ABaseGun::Fire()
{
	if (HasAmmo())
	{
		CurrentAmmo--; // Consume one ammo
		UE_LOG(LogTemp, Warning, TEXT("Gun fired! Current Ammo: %d"), CurrentAmmo);

		// Perform damage to target (this logic should go in your shooting mechanism)
		// You can spawn projectiles, raycasts, etc. here
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No ammo left!"));
	}
}

// Reload the gun with additional ammo
void ABaseGun::Reload(int32 AmmoAmount)
{
	CurrentAmmo = FMath::Clamp(CurrentAmmo + AmmoAmount, 0, MaxAmmo);
	UE_LOG(LogTemp, Warning, TEXT("Ammo reloaded. Current Ammo: %d"), CurrentAmmo);
}
