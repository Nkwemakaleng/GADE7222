// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerController.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h" 

APlayerController::APlayerController()
{
    PrimaryActorTick.bCanEverTick = true;
    bIsSprinting = false;
    CurrentFirearm = 1; // Default to firearm 1
}

void APlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Bind movement inputs
    InputComponent->BindAxis("MoveForward", this, &APlayerController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &APlayerController::MoveRight);

    // Bind jump
    InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

    // Bind sprinting
    InputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerController::StartSprinting);
    InputComponent->BindAction("Sprint", IE_Released, this, &APlayerController::StopSprinting);

    // Bind weapon switching
    InputComponent->BindAction("Firearm1", IE_Pressed, this, &APlayerController::SelectFirearm1);
    InputComponent->BindAction("Firearm2", IE_Pressed, this, &APlayerController::SelectFirearm2);

    // Bind shooting
    InputComponent->BindAction("Shoot", IE_Pressed, this, &APlayerController::Shoot);
}

void APlayerController::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        // Add movement in the forward direction
        ACharacter* MyCharacter = Cast<ACharacter>(GetPawn());
        if (MyCharacter)
        {
            MyCharacter->AddMovementInput(MyCharacter->GetActorForwardVector(), Value);
        }
    }
}

void APlayerController::MoveRight(float Value)
{
    if (Value != 0.0f)
    {
        // Add movement in the right direction
        ACharacter* MyCharacter = Cast<ACharacter>(GetPawn());
        if (MyCharacter)
        {
            MyCharacter->AddMovementInput(MyCharacter->GetActorRightVector(), Value);
        }
    }
}

void APlayerController::StartSprinting()
{
    bIsSprinting = true;
    ACharacter* MyCharacter = Cast<ACharacter>(GetPawn());
    if (MyCharacter)
    {
        MyCharacter->GetCharacterMovement()->MaxWalkSpeed *= 2.0f; // Double the speed while sprinting
    }
}

void APlayerController::StopSprinting()
{
    bIsSprinting = false;
    ACharacter* MyCharacter = Cast<ACharacter>(GetPawn());
    if (MyCharacter)
    {
        MyCharacter->GetCharacterMovement()->MaxWalkSpeed /= 2.0f; // Restore normal speed
    }
}

void APlayerController::SelectFirearm1()
{
    CurrentFirearm = 1;
    // Logic for selecting firearm 1 (e.g., changing the equipped weapon)
}

void APlayerController::SelectFirearm2()
{
    CurrentFirearm = 2;
    // Logic for selecting firearm 2
}

void APlayerController::Shoot()
{
    if (CurrentFirearm == 1)
    {
        // Fire weapon 1
        UE_LOG(LogTemp, Warning, TEXT("Firing Firearm 1"));
        // Add shooting logic here
    }
    else if (CurrentFirearm == 2)
    {
        // Fire weapon 2
        UE_LOG(LogTemp, Warning, TEXT("Firing Firearm 2"));
        // Add shooting logic here
    }
}

