#pragma once

#include <string>
#include <clocale>
#include <cstdlib>
#include <codecvt>
#include <iostream>
#include <vector>
#include <stdarg.h>

class UniWcUtil
{
public:
	UniWcUtil();
	~UniWcUtil();

public:
	wchar_t*	generateUnicodeString(size_t len, size_t start, size_t end);
	void		generate();
	wchar_t*	getGroup(size_t n);
	wchar_t**	getGroups(int n_args, ...);

private:
	std::vector<wchar_t*> wcset1;
	std::vector<wchar_t*> wcsetkey1;
};


