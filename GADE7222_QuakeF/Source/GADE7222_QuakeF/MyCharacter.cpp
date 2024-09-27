#include "MyCharacter.h"
//#include "FirstGun.h"
//#include "SecondGun.h"
//
//AMyCharacter::AMyCharacter()
//{
//
//    // Initialize gun pointers to null
//    EquippedGun = nullptr;
//    FirstGun = nullptr;
//    SecondGun = nullptr;
//
//    // Set default health values
//    MaxHealth = 100.f;
//    CurrentHealth = MaxHealth;
//
//}
//
//void AMyCharacter::BeginPlay()
//{
//    Super::BeginPlay();
//
//    // Spawn the first gun for the player
//    FirstGun = GetWorld()->SpawnActor<AFirstGun>();
//    EquippedGun = FirstGun;
//}
//
//void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//    Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//    // Bind the switch weapon functionality to a key, e.g., Q
//    PlayerInputComponent->BindAction("SwitchWeapon", IE_Pressed, this, &AMyCharacter::SwitchWeapon);
//}
//
//void AMyCharacter::TakeDamage(float DamageAmount)
//{
//    CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.f, MaxHealth);
//    UE_LOG(LogTemp, Log, TEXT("Player Health: %f"), CurrentHealth);
//
//    // Check if player is dead
//    if (CurrentHealth <= 0)
//    {
//        UE_LOG(LogTemp, Warning, TEXT("Player is Dead!"));
//        // Add player death logic here
//    }
//
//    UpdateHealthBar();
//}
//
//void AMyCharacter::UpdateHealthBar()
//{
//    // This function updates the health bar in the UI (handled in Blueprint)
//}

void AMyCharacter::PickupWeapon(AGun* Weapon)
{
    if (Weapon->IsA(ASecondGun::StaticClass()))
    {
        if (SecondGun)
        {
            SecondGun->OnPickup(); // Add ammo if the second gun is already in inventory
        }
        else
        {
            // Equip the second gun
            SecondGun = Cast<ASecondGun>(Weapon);
            EquippedGun = SecondGun;
            SecondGun->OnPickup(); // Initialize the gun
        }
    }
}

void AMyCharacter::SwitchWeapon()
{
    if (EquippedGun == FirstGun && SecondGun)
    {
        // Switch to second gun
        EquippedGun = SecondGun;
        UE_LOG(LogTemp, Log, TEXT("Switched to second gun."));
    }
    else if (EquippedGun == SecondGun)
    {
        // Switch to first gun
        EquippedGun = FirstGun;
        UE_LOG(LogTemp, Log, TEXT("Switched to first gun."));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No second gun to switch to!"));
    }
}


