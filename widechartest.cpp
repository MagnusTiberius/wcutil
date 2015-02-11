// widechartest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <clocale>
#include <cstdlib>
#include <codecvt>
#include <iostream>

#include "UniWcUtil.h"

using std::string;

void convertFunc() {

	const wchar_t* const vals1[] = { L"beforeQuote\"afterQuote", L"beforeQuote\\\"afterQuote", L"ΠαρθένωνΗ", L"\u0f78\u0f08\u0f09\u0f9D\u30E6\u30CB\u30B3\u30FC\u30C9" };

	const wchar_t* const wstr0 = L"beforeQuote\\\"afterQuote";
	const wchar_t* const wstr1 = L"beforeQuote\"afterQuote";
	const wchar_t* const wstr2 = L"ΠαρθένωνΗ";
	const wchar_t* const wstr3 = L"\u0f78\u0f08\u0f09\u0f9D\u30E6\u30CB\u30B3\u30FC\u30C9";

	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter0;
	std::string narrow0 = converter0.to_bytes(wstr0);
	std::wstring wide0 = converter0.from_bytes(narrow0);

	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter1;
	std::string narrow1 = converter1.to_bytes(wstr1);
	std::wstring wide1 = converter1.from_bytes(narrow1);

	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter2;
	std::string narrow2 = converter2.to_bytes(wstr2);
	std::wstring wide2 = converter2.from_bytes(narrow2);

	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter3;
	std::string narrow3 = converter2.to_bytes(wstr3);
	std::wstring wide3 = converter2.from_bytes(narrow3);

	return;
}

// Generate an unicode string of length 'len' whose characters are in range [start, end]
wchar_t* generateRandomUnicodeString(size_t len, size_t start, size_t end)
{
	wchar_t* ustr = new wchar_t[len + 1];      // +1 for '\0'
	size_t intervalLength = end - start + 1; // +1 for inclusive range

	srand(time(NULL));
	for (auto i = 0; i < len; i++) {
		//ustr[i] = (rand() % intervalLength) + start;
		ustr[i] = i + start;
	}
	ustr[len] = L'\0';
	return ustr;
}

std::wstring GetWC(char *c)
{
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter0;

	//const size_t cSize = strlen(c) + 1;
	//wchar_t* wc = new wchar_t[cSize];
	//mbstowcs(wc, c, cSize);

	std::wstring wide3 = converter0.from_bytes(c);

	wchar_t* output = generateRandomUnicodeString(256, 0x0400, 0x04FF);

	for (size_t j = 0x00; j<0xFF; j++) {
		size_t m1 = (j << 8);
		size_t m2 = (j << 8) | 0xFF;
		wchar_t* output2 = generateRandomUnicodeString(256, m1, m2);
		std::wcout << " Unicode String = " << output2 << std::endl;
	}

	return output;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//convertFunc();

	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter0;
	std::wstring wc1 = GetWC("ABC\u30C9\u30C9\u30C9");
	std::string narrow3 = converter0.to_bytes(wc1);

	UniWcUtil* util = new UniWcUtil();
	util->Generate();
	wchar_t** pkg = util->GetGroups(4, 0x29, 0x30, 0x31, 0x32);
	wchar_t* a = pkg[0];
	wchar_t* b = pkg[1];
	pkg = util->GetGroups(1, 0x29);
	pkg = util->GetGroups(1, 0x31);
	pkg = NULL;

	for (size_t i=0x0; i < util->RangeSize(); i++) {
		wchar_t* p1 = util->GetRange(i);
		std::wcout << " 2 Unicode String = " << p1 << std::endl;
	}

	wchar_t* p2 = util->GetRangeName(0x56 + 1);
	wprintf(L"\n%s \n", p2);
	p2 = util->GetRangeName(0x58 + 1);
	wprintf(L"%s \n", p2);
	p2 = util->GetRangeName(0x8F + 1);
	wprintf(L"%s \n", p2);
	p2 = util->GetRangeName(0x90 + 1);
	wprintf(L"%s \n", p2);
	p2 = util->GetRangeName(0xAB + 1);
	wprintf(L"%s \n", p2);
	p2 = util->GetRangeName(0xCA + 1);
	wprintf(L"%s \n", p2);

	delete util;
	util = NULL;

	return 0;
}


