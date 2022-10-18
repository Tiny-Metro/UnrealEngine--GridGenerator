// Fill out your copyright notice in the Description page of Project Settings.


#include "GridAccessSample.h"

// Sets default values
AGridAccessSample::AGridAccessSample() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGridAccessSample::BeginPlay() {
	Super::BeginPlay();

}

// Called every frame
void AGridAccessSample::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (GEngine) {

	}
}

