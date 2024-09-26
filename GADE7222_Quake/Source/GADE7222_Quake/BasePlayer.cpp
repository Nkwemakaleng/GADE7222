#include "BasePlayer.h"

// Constructor
ABasePlayer::ABasePlayer()
{
	// Set default values for stats
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	Armor = 50.0f;
	AmmoCount = 50;
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Take damage function
void ABasePlayer::TakeDamage(float DamageAmount)
{
	if (Armor > 0.0f)
	{
		// Reduce damage by armor
		float DamageAfterArmor = FMath::Max(DamageAmount - Armor, 0.0f);
		Armor -= DamageAmount;

		// Apply remaining damage to health
		CurrentHealth -= DamageAfterArmor;
	}
	else
	{
		// Directly apply damage if no armor
		CurrentHealth -= DamageAmount;
	}

	// Clamp health to a minimum of 0
	CurrentHealth = FMath::Clamp(CurrentHealth, 0.0f, MaxHealth);

	// Check for death
	if (CurrentHealth <= 0.0f)
	{
		Die();
	}
}

// Handle death
void ABasePlayer::Die()
{
	UE_LOG(LogTemp, Warning, TEXT("Player has died!"));

	// Handle death logic (respawn, game over, etc.)
	// Destroy player or trigger game over screen here
}

// Handle picking up health
void ABasePlayer::PickupHealth(float HealthAmount)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + HealthAmount, 0.0f, MaxHealth);
}

// Handle picking up armor
void ABasePlayer::PickupArmor(float ArmorAmount)
{
	Armor = FMath::Clamp(Armor + ArmorAmount, 0.0f, 100.0f); // Max armor 100
}

// Handle picking up ammo
void ABasePlayer::PickupAmmo(int32 AmmoAmount)
{
	AmmoCount += AmmoAmount;
	UE_LOG(LogTemp, Warning, TEXT("Picked up %d ammo!"), AmmoAmount);
}


