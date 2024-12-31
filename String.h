#pragma once
class String {
private:
	int size;
	char* str;
	static int objectCount;
public:
	String();
	String(int new_size);
	String(const char* new_str);
	int getSize();
	char* getStr();
	void setSize(int new_size);
	void setStr(const char* new_str);
	void setStr(char* new_str);
	String(const String& obj);
	~String();
};