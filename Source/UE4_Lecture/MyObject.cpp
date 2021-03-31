// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

// Constructor
UMyObject::UMyObject()
{
	MyFloat = 10.f;
}

void UMyObject::PrintToLog()
{
	UE_LOG(LogTemp, Warning, TEXT("HelloWorld"));
}