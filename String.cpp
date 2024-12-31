#include "String.h"
#include <iostream>
using namespace std;

String::String() {
	objectCount++;
	size = 80;
	str = new char[size + 1];
	str[size] = '\0';
}

String::String(int new_size) {
	objectCount++;
	size = new_size;
	str = new char[size + 1];
	str[size] = '\0';
}

String::String(const char* new_str) {
	objectCount++;
	if (new_str != nullptr) {
		size = strlen(new_str);
		str = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			str[i] = new_str[i];
		}
		str[size] = '\0';
	}
	else {
		str = nullptr;
	}
}

int String::getSize() {
	return size;
}

char* String::getStr() {
	return str;
}

void String::setSize(int new_size) {
	size = new_size;
}

void String::setStr(const char* new_str) {
	if (new_str != nullptr) {
		size = strlen(new_str);
		str = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			str[i] = new_str[i];
		}
		str[size] = '\0';
	}
	else {
		str = nullptr;
	}
}

void String::setStr(char* new_str) {
	if (new_str != nullptr) {
		size = strlen(new_str);
		str = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			str[i] = new_str[i];
		}
		str[size] = '\0';
	}
	else {
		str = nullptr;
	}
}

String::String(const String& obj) {
	if (this->str != nullptr) {
		delete[] this->str;
	}
	this->str = new char [obj.size + 1];
	this->size = obj.size;
	this->str[this->size] = '\0';
	for (int i = 0; i < this->size; i++) {
		this->str[i] = obj.str[i];
	}
}


String::~String() {
	if (str != nullptr) {
		delete[] str;
	}
	objectCount--;
}