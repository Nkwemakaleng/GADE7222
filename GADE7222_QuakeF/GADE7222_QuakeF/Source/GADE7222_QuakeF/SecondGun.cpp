#include "SecondGun.h"

ASecondGun::ASecondGun()
{
    Damage = 12;  // Second gun deals 12 damage
    MaxAmmo = 10; // Limited ammo for second gun
    CurrentAmmo = MaxAmmo;
}

void ASecondGun::OnPickup()
{
    if (CurrentAmmo < MaxAmmo)
    {
        // Add more ammo if the gun is already in the player's inventory
        CurrentAmmo = FMath::Clamp(CurrentAmmo + 5, 0, MaxAmmo);  // Add 5 ammo per pickup
        UE_LOG(LogTemp, Log, TEXT("Picked up ammo. Current ammo: %d"), CurrentAmmo);
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Picked up the second gun!"));
    }
}

