#pragma once

#include <string>

class TBook 
{
private:
	std::string Author;
	std::string Name;
	size_t Pages;
public:
	// ����������
	~TBook();

	// ����������� �� ���������
	TBook();

	// ���������������� �����������
	TBook(const std::string & author, const std::string & name, size_t pages);

	std::string GetAuthor();

	std::string GetName();

	size_t GetPages();
};

// �������� ������
std::ostream& operator<<(std::ostream & out, TBook & book);