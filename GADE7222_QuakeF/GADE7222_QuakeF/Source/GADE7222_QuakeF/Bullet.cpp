#include "Bullet.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABullet::ABullet()
{
    PrimaryActorTick.bCanEverTick = true;

    // Set up bullet movement
    BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMovementComponent"));
    BulletMovement->InitialSpeed = 3000.f;
    BulletMovement->MaxSpeed = 3000.f;
    BulletMovement->bRotationFollowsVelocity = true; // Make the bullet rotate according to velocity
    BulletMovement->bShouldBounce = false; // Disable bouncing, unless you want it

    // Set up collision (you can customize this)
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->InitSphereRadius(5.0f); // Adjust size as needed
    CollisionComponent->SetCollisionProfileName("BlockAllDynamic"); // Set up the collision profile
    RootComponent = CollisionComponent;
}

void ABullet::BeginPlay()
{
    Super::BeginPlay();
    CollisionComponent->OnComponentHit.AddDynamic(this, &ABullet::OnHit);
}

void ABullet::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABullet::InitVelocity(const FVector& ShootDirection)
{
    if (BulletMovement)
    {
        // Set velocity in the direction of ShootDirection
        BulletMovement->Velocity = ShootDirection * BulletMovement->InitialSpeed;
    }
}
void ABullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    if (OtherActor && OtherActor != this)
    {
        // Apply damage
        UGameplayStatics::ApplyDamage(OtherActor, Damage, GetInstigatorController(), this, UDamageType::StaticClass());

        // Destroy the bullet after it hits something
        Destroy();
    }
}


