
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "GameFramework/PlayerController.h"
//#include "Gun.h"
#include "PlayerCharacter.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Initialize sprint and movement speed
    DefaultWalkSpeed = 600.f;  // Regular walking speed
    SprintSpeed = 1200.f;      // Sprinting speed
    bIsSprinting = false;      // Not sprinting by default

    // Set default movement speed
    GetCharacterMovement()->MaxWalkSpeed = DefaultWalkSpeed;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	camera->SetupAttachment(RootComponent);
	camera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
    // Get the PlayerController and Input Subsystem
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());

        // Add the input mapping context
        if (InputSubsystem && IMC_PlayerCharacterControls)
        {
            InputSubsystem->AddMappingContext(IMC_PlayerCharacterControls, 0);
        }
    }
    // Initialize Guns
    CurrentGun = Gun1;
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input using the Enhanced Input System
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Cast to UEnhancedInputComponent
    UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

    // Bind movement Input Actions
    if (IA_MoveForward)
    {
        EnhancedInput->BindAction(IA_MoveForward, ETriggerEvent::Triggered, this, &APlayerCharacter::MoveForward);
    }

    if (IA_MoveRight)
    {
        EnhancedInput->BindAction(IA_MoveRight, ETriggerEvent::Triggered, this, &APlayerCharacter::MoveRight);
    }

    // Bind Jump Input Action
    if (IA_Jump)
    {
        EnhancedInput->BindAction(IA_Jump, ETriggerEvent::Triggered, this, &ACharacter::Jump);
        EnhancedInput->BindAction(IA_Jump, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
    }

    // Bind Sprint Input Actions
    if (IA_Sprint)
    {
        EnhancedInput->BindAction(IA_Sprint, ETriggerEvent::Triggered, this, &APlayerCharacter::StartSprinting);
        EnhancedInput->BindAction(IA_Sprint, ETriggerEvent::Completed, this, &APlayerCharacter::StopSprinting);
    }

    // Bind weapon-related Input Actions
    if (IA_SelectGun1)
    {
        EnhancedInput->BindAction(IA_SelectGun1, ETriggerEvent::Triggered, this, &APlayerCharacter::SelectGun1);
        
    }

    if (IA_SelectGun2)
    {
        EnhancedInput->BindAction(IA_SelectGun2, ETriggerEvent::Triggered, this, &APlayerCharacter::SelectGun2);
    }

    if (IA_Shoot)
    {
        EnhancedInput->BindAction(IA_Shoot, ETriggerEvent::Triggered, this, &APlayerCharacter::Shoot);
    }
}

// Movement functions
void APlayerCharacter::MoveForward(const FInputActionValue& Value)
{
    float AxisValue = Value.Get<float>();
    if (AxisValue != 0.0f)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moving Forward"));
        AddMovementInput(GetActorForwardVector(), AxisValue);
    }
}

void APlayerCharacter::MoveRight(const FInputActionValue& Value)
{
    float AxisValue = Value.Get<float>();
    if (AxisValue != 0.0f)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moving Right"));
        AddMovementInput(GetActorRightVector(), AxisValue);
    }
}

void APlayerCharacter::StartSprinting()
{
    if (!bIsSprinting)
    {
        // Set sprinting flag to true
        bIsSprinting = true;
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("nah id sprint"));
        // Set the character movement speed to SprintSpeed
        GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
    }
}

void APlayerCharacter::StopSprinting()
{
    if (bIsSprinting)
    {
        // Set sprinting flag to false
        bIsSprinting = false;
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("sprint nah"));
        // Set the character movement speed back to default walk speed
        GetCharacterMovement()->MaxWalkSpeed = DefaultWalkSpeed;
    }
}
void APlayerCharacter::SelectGun1()
{
    CurrentGun = Gun1;
    // Add logic to equip Gun1
}

void APlayerCharacter::SelectGun2()
{
    CurrentGun = Gun2;
    // Add logic to equip Gun2
}

void APlayerCharacter::Shoot()
{
    if (CurrentGun)
    {
       // CurrentGun->Fire();  // Fire the Gun
    }
}
