#include "UniWcUtil.h"


UniWcUtil::UniWcUtil()
{
}


UniWcUtil::~UniWcUtil()
{
	wcset1.clear();
}


wchar_t* UniWcUtil::generateUnicodeString(size_t len, size_t start, size_t end)
{
	wchar_t* str1 = new wchar_t[len + 1]; 

	for (auto i = 0; i < len; i++) {
		str1[i] = i + start;
	}
	str1[len] = L'\0';
	return str1;
}

void UniWcUtil::generate() 
{
	const size_t bufsz = 0x0200;
	wchar_t buffer[bufsz];
	for (size_t j = 0x00; j<=0xFF; j++) {
		size_t start = (j << 8);
		size_t end = (j << 8) | 0xFF;
		wchar_t* subgroup = generateUnicodeString(0xFF, start, end);
		wcset1.push_back(subgroup);
		swprintf(buffer, bufsz, L"set%d", j);
		wcsetkey1.push_back(buffer);
	}
}

wchar_t* UniWcUtil::getGroup(size_t n) 
{
	if (n > wcset1.size()) {
		return NULL;
	}
	auto ret = wcset1.at(n);
	return ret;
}

wchar_t** UniWcUtil::getGroups(int n_args, ...) 
{
	size_t elem;
	va_list ap;

	if (n_args > wcset1.size()) {
		return NULL;
	}

	wchar_t** arr = new wchar_t*[n_args];

	va_start(ap, n_args);
	for (int i = 0; i < n_args; i++) {
		elem = va_arg(ap, size_t);
		if (elem != NULL) {
			arr[i] = wcset1.at(elem);
		}
	}
	va_end(ap);

	return arr;
}
