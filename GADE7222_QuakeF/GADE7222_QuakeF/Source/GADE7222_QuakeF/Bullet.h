#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class GADE7222_QuakeF_API ABullet : public AActor
{
    GENERATED_BODY()

public:
    ABullet();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float Damage;


    void InitVelocity(const FVector& ShootDirection);

    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

};
