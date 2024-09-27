//
//#include "MyPlayerControllerF.h"
//#include "MyCharacter.h"
//#include "FirstGun.h"
//#include "SecondGun.h"
//#include "Gun.h"
//
//AMyPlayerControllerF::AMyPlayerControllerF()
//{
//    // Constructor can be empty
//}
//
//void AMyPlayerControllerF::BeginPlay()
//{
//    Super::BeginPlay();
//
//    // Get reference to the player character
//    MyCharacter = Cast<AMyCharacter>(GetPawn());
//}
//
//void AMyPlayerControllerF::SetupInputComponent()
//{
//    Super::SetupInputComponent();
//
//    // Bind input actions
//    InputComponent->BindAction("Fire", IE_Pressed, this, &AMyPlayerControllerF::OnFire);
//    InputComponent->BindAction("SelectWeapon1", IE_Pressed, this, &AMyPlayerControllerF::SwitchToFirstWeapon);
//    InputComponent->BindAction("SelectWeapon2", IE_Pressed, this, &AMyPlayerControllerF::SwitchToSecondWeapon);
//}
//
//void AMyPlayerControllerF::OnFire()
//{
//    if (MyCharacter && MyCharacter->EquippedGun)
//    {
//        MyCharacter->EquippedGun->Fire();
//    }
//}
//
//void AMyPlayerControllerF::SwitchToFirstWeapon()
//{
//    if (MyCharacter && MyCharacter->FirstGun)
//    {
//        MyCharacter->EquippedGun = MyCharacter->FirstGun;
//        UE_LOG(LogTemp, Log, TEXT("Switched to First Gun"));
//    }
//}
//
//void AMyPlayerControllerF::SwitchToSecondWeapon()
//{
//    if (MyCharacter && MyCharacter->SecondGun)
//    {
//        MyCharacter->EquippedGun = MyCharacter->SecondGun;
//        UE_LOG(LogTemp, Log, TEXT("Switched to Second Gun"));
//    }
//}
