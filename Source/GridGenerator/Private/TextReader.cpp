// Fill out your copyright notice in the Description page of Project Settings.


#include "TextReader.h"

bool UTextReader::LoadTxt(FString FileName, FString& OutText)
{
	return FFileHelper::LoadFileToString(OutText, *(FPaths::ProjectContentDir() + "Data/" + FileName));
}
