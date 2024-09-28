// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"  // Required for Enhanced Input Actions
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerCharacter.h"
#include "Player.generated.h"

UCLASS()
class GADE7222_POE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement Functions
	void MoveForward(const FInputActionValue& Value);
	void MoveRight(const FInputActionValue& Value);


	// Sprinting
	void StartSprinting();
	void StopSprinting();

	// Gun switching
	void SelectGun1();
	void SelectGun2();

	// Shooting
	void Shoot();

private:
	// Sprint variables
	float DefaultWalkSpeed;  // For normal walking speed
	float SprintSpeed;       // For sprinting speed
	bool bIsSprinting;       // Is the character sprinting?

	// Guns
	class AGun* CurrentGun;
	class AGun* Gun1;
	class AGun* Gun2;

protected:
	// Movement component (CharacterMovement)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	class UCharacterMovementComponent* CharacterMovement;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* camera;
	// Input Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* IMC_PlayerCharacterControls;
	
	//sprint variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float DefaultWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintSpeed;

	// Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_MoveForward;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_MoveRight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_Jump;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_Sprint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_SelectGun1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_SelectGun2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_Shoot;
};	