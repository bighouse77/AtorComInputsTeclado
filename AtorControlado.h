// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AtorControlado.generated.h"

UCLASS()
class ATORCOMINPUTSTECLADO_API AAtorControlado : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAtorControlado();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parametros Gerais")
	float Velocidade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parametros Gerais")
	float VelocidadeDeRotacao;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parametros Gerais")
	float altura;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parametros Gerais")
	// Indica se está vivo ou não
	bool isAlive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dados adicionais")
	// Nome do personagem
	FName nome;

	UPROPERTY(VisibleDefaultsOnly)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleDefaultsOnly)
	class UCameraComponent* Camera;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveVerticalmente(float eixoVertical);

	UFUNCTION()
	void RotacionaEmZ(float eixoHorixontal);

};
