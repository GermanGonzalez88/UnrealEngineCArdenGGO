// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"
#include "Engine/Engine.h"

// Sets default values
AMyActorTest::AMyActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyFloatVariable = 50.0f;
	edad = 37;
	esInstructor = false;
	nombre = "German Gonzalez Oregel";
	DemostrateFundamentals();
}

// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorTest::DemostrateFundamentals() {
	// Operadores Aritméticos
	int32 sum = edad + 30;
	float product = MyFloatVariable * 2.5f;
	// Estructuras de Control
	if (esInstructor) {
		// Imprime en consola
		//UE_LOG(LogTemp, Warning, TEXT("%s Es instructor y tiene %d ´años´"), *nombre, edad);
		// Imprime en Pantalla / Viewport
		// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,FString::Printf(TEXT("%s Es instructor y tiene %d ´años´"), *nombre, edad));
		//FString DM = FString::Printf(TEXT("%s Es instructor y tiene %d ´años´"), *nombre, edad);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,DM);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("esInstructor is true"));

	}
	else {
		// Imprime en consola
		//UE_LOG(LogTemp, Warning, TEXT("%s No es instructor y tiene %d ´años´"), *nombre, edad);
		// Imprime en Pantalla / Viewport
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,TEXT("No es instructor y tiene N ´años´"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("esInstructor is false"));

	}

	// Bucles o Ciclos
	for (int32 i = 0; i < 5; i++) {
		FString DebugMessage = FString::Printf(TEXT("Loop Interation: %d"), i);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DebugMessage);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, DebugMessage);
	}

	// Bucle While
	int32 count = 0;
	while (count < 3) {
		FString WhileMessage = FString::Printf(TEXT("While Loop Count: %d"), count);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, WhileMessage);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, WhileMessage);
		count++;
	}

}
