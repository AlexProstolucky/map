#include <iostream>
#include <map>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	multimap <string, string> mp{
		{"always","завжди"},
		{"never","нiколи"},
		{"sometimes","деколи"},
		{"maybe","можливо"},
		{"work","робота"},
		{"wear","одягати"},
		{"expensive","дорогий"},
		{"rock","камiнь"},
		{"rock","колихати"},
		{"pen","ручка"}
	};

	for (auto i : mp)
	{
		cout << i.first << " " << i.second << endl;
	}

}