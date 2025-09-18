// LeaveMeAlone Game by Netologiya. All RightsReserved.


#include "Player/LMADefaultCharacter.h"

// Sets default values
ALMADefaultCharacter::ALMADefaultCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALMADefaultCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALMADefaultCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALMADefaultCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

