#include "Gun.h"
#include "Bullet.h"
#include "Bullet.h"

AGun::AGun()
{
    PrimaryActorTick.bCanEverTick = false;
    MaxAmmo = 30; // Default ammo, override in child classes
     CurrentAmmo = MaxAmmo;
    Damage = 0; // Default damage, override in child classes
}

void AGun::Fire()
{
    if (HasAmmo())
    {
        ConsumeAmmo();
        UE_LOG(LogTemp, Log, TEXT("Fired the gun. Ammo left: %d"), CurrentAmmo);

        // Spawn the Bullet
        FVector MuzzleLocation = GetActorLocation(); // Adjust as needed
        FRotator MuzzleRotation = GetActorRotation(); // Adjust for the muzzle's rotation

        // Create the Bullet
        ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(BulletClass, MuzzleLocation, MuzzleRotation);
        if (Bullet)
        {
            FVector ShootDirection = MuzzleRotation.Vector();
            Bullet->InitVelocity(ShootDirection);
            Bullet->Damage = Damage; // Assign the damage value to the Bullet
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Out of ammo!"));
    }
}

bool AGun::HasAmmo() const
{
    return CurrentAmmo > 0;
}

void AGun::ConsumeAmmo()
{
    if (CurrentAmmo > 0)
    {
        CurrentAmmo--;
    }
}

void AGun::OnPickup()
{
    // Logic for picking up the gun, e.g., reloading ammo
    CurrentAmmo = FMath::Min(CurrentAmmo + MaxAmmo/2, MaxAmmo); // For example, Divide the ammo 

    UE_LOG(LogTemp, Log, TEXT("Picked up ammo. Current Ammo: %d"), CurrentAmmo);
}
