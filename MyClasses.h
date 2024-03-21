#pragma once
#include "MyHeader.h"

void StringToChar(String^ s, std::string& os);
String^ CharToString(char* str);
char* EncodeText(char* psText);
char* DecodeText(char* psText);