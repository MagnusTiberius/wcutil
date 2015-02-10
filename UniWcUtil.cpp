#include "stdafx.h"
#include "UniWcUtil.h"


UniWcUtil::UniWcUtil()
{
	AddRange(0x0020, 0x007F, L"BasicLatin");
	AddRange(0x0080, 0x00FF, L"Latin1Supplement");
	AddRange(0x0100, 0x017F, L"LatinExtendedA");
	AddRange(0x0180, 0x024F, L"LatinExtendedB");
	AddRange(0x0250, 0x02AF, L"IPAExtensions");
	AddRange(0x02B0, 0x02FF, L"SpacingModifierLetters");
	AddRange(0x0300, 0x036F, L"CombiningDiacriticalMarks");
	AddRange(0x0370, 0x03FF, L"GreekandCoptic");
	AddRange(0x0400, 0x04FF, L"Cyrillic");
	AddRange(0x0500, 0x052F, L"CyrillicSupplement");
	AddRange(0x0530, 0x058F, L"Armenian");
	AddRange(0x0590, 0x05FF, L"Hebrew");
	AddRange(0x0600, 0x06FF, L"Arabic");
	AddRange(0x0700, 0x074F, L"Syriac");
	AddRange(0x0750, 0x077F, L"ArabicSupplement");
	AddRange(0x0780, 0x07BF, L"Thaana");
	AddRange(0x07C0, 0x07FF, L"NKo");
	AddRange(0x0800, 0x083F, L"Samaritan");
	AddRange(0x0840, 0x085F, L"Mandaic");
	AddRange(0x08A0, 0x08FF, L"ArabicExtendedA");
	AddRange(0x0900, 0x097F, L"Devanagari");
	AddRange(0x0980, 0x09FF, L"Bengali");
	AddRange(0x0A00, 0x0A7F, L"Gurmukhi");
	AddRange(0x0A80, 0x0AFF, L"Gujarati");
	AddRange(0x0B00, 0x0B7F, L"Oriya");
	AddRange(0x0B80, 0x0BFF, L"Tamil");
	AddRange(0x0C00, 0x0C7F, L"Telugu");
	AddRange(0x0C80, 0x0CFF, L"Kannada");
	AddRange(0x0D00, 0x0D7F, L"Malayalam");
	AddRange(0x0D80, 0x0DFF, L"Sinhala");
	AddRange(0x0E00, 0x0E7F, L"Thai");
	AddRange(0x0E80, 0x0EFF, L"Lao");
	AddRange(0x0F00, 0x0FFF, L"Tibetan");
	AddRange(0x1000, 0x109F, L"Myanmar");
	AddRange(0x10A0, 0x10FF, L"Georgian");
	AddRange(0x1100, 0x11FF, L"HangulJamo");
	AddRange(0x1200, 0x137F, L"Ethiopic");
	AddRange(0x1380, 0x139F, L"EthiopicSupplement");
	AddRange(0x13A0, 0x13FF, L"Cherokee");
	AddRange(0x1400, 0x167F, L"UnifiedCanadianAboriginalSyllabics");
	AddRange(0x1680, 0x169F, L"Ogham");
	AddRange(0x16A0, 0x16FF, L"Runic");
	AddRange(0x1700, 0x171F, L"Tagalog");
	AddRange(0x1720, 0x173F, L"Hanunoo");
	AddRange(0x1740, 0x175F, L"Buhid");
	AddRange(0x1760, 0x177F, L"Tagbanwa");
	AddRange(0x1780, 0x17FF, L"Khmer");
	AddRange(0x1800, 0x18AF, L"Mongolian");
	AddRange(0x18B0, 0x18FF, L"UnifiedCanadianAboriginalSyllabicsExtended");
	AddRange(0x1900, 0x194F, L"Limbu");
	AddRange(0x1950, 0x197F, L"TaiLe");
	AddRange(0x1980, 0x19DF, L"NewTaiLue");
	AddRange(0x19E0, 0x19FF, L"KhmerSymbols");
	AddRange(0x1A00, 0x1A1F, L"Buginese");
	AddRange(0x1A20, 0x1AAF, L"TaiTham");
	AddRange(0x1AB0, 0x1AFF, L"CombiningDiacriticalMarkExtended");
	AddRange(0x1B00, 0x1B7F, L"Balinese");
	AddRange(0x1B80, 0x1BBF, L"Sundanese");
	AddRange(0x1BC0, 0x1BFF, L"Batak");
	AddRange(0x1C00, 0x1C4F, L"Lepcha");
	AddRange(0x1C50, 0x1C7F, L"OlChiki");
	AddRange(0x1CC0, 0x1CCF, L"SundaneseSupplement");
	AddRange(0x1CD0, 0x1CFF, L"VedicExtensions");
	AddRange(0x1D00, 0x1D7F, L"PhoneticExtensions");
	AddRange(0x1D80, 0x1DBF, L"PhoneticExtensionsSupplement");
	AddRange(0x1DC0, 0x1DFF, L"CombiningDiacriticalMarksSupplement");
	AddRange(0x1E00, 0x1EFF, L"LatinExtendedAdditional");
	AddRange(0x1F00, 0x1FFF, L"GreekExtended");
	AddRange(0x2000, 0x206F, L"GeneralPunctuation");
	AddRange(0x2070, 0x209F, L"SuperscriptsandSubscripts");
	AddRange(0x20A0, 0x20CF, L"CurrencySymbols");
	AddRange(0x20D0, 0x20FF, L"CombiningDiacriticalMarksforSymbols");
	AddRange(0x2100, 0x214F, L"LetterlikeSymbols");
	AddRange(0x2150, 0x218F, L"NumberForms");
	AddRange(0x2190, 0x21FF, L"Arrows");
	AddRange(0x2200, 0x22FF, L"MathematicalOperators");
	AddRange(0x2300, 0x23FF, L"MiscellaneousTechnical");
	AddRange(0x2400, 0x243F, L"ControlPictures");
	AddRange(0x2440, 0x245F, L"OpticalCharacterRecognition");
	AddRange(0x2460, 0x24FF, L"EnclosedAlphanumerics");
	AddRange(0x2500, 0x257F, L"BoxDrawing");
	AddRange(0x2580, 0x259F, L"BlockElements");
	AddRange(0x25A0, 0x25FF, L"GeometricShapes");
	AddRange(0x2600, 0x26FF, L"MiscellaneousSymbols");
	AddRange(0x2700, 0x27BF, L"Dingbats");
	AddRange(0x27C0, 0x27EF, L"MiscellaneousMathematicalSymbolsA");
	AddRange(0x27F0, 0x27FF, L"SupplementalArrowsA");
	AddRange(0x2800, 0x28FF, L"Braille Patterns");
	AddRange(0x2900, 0x297F, L"SupplementalArrowsB");
	AddRange(0x2980, 0x29FF, L"Miscellaneous MathematicalSymbolsB");
	AddRange(0x2A00, 0x2AFF, L"SupplementalMathematicalOperators");
	AddRange(0x2B00, 0x2BFF, L"MiscellaneousSymbolsandArrows");
	AddRange(0x2C00, 0x2C5F, L"Glagolitic");
	AddRange(0x2C60, 0x2C7F, L"LatinExtendedC");
	AddRange(0x2C80, 0x2CFF, L"Coptic");
	AddRange(0x2D00, 0x2D2F, L"GeorgianSupplement");
	AddRange(0x2D30, 0x2D7F, L"Tifinagh");
	AddRange(0x2D80, 0x2DDF, L"EthiopicExtended");
	AddRange(0x2DE0, 0x2DFF, L"CyrillicExtendedA");
	AddRange(0x2E00, 0x2E7F, L"SupplementalPunctuation");
	AddRange(0x2E80, 0x2EFF, L"CJKRadicalsSupplement");
	AddRange(0x2F00, 0x2FDF, L"KangxiRadicals");
	AddRange(0x2FF0, 0x2FFF, L"IdeographicDescriptionCharacters");
	AddRange(0x3000, 0x303F, L"CJKSymbolsandPunctuation");
	AddRange(0x3040, 0x309F, L"Hiragana");
	AddRange(0x30A0, 0x30FF, L"Katakana");
	AddRange(0x3100, 0x312F, L"Bopomofo");
	AddRange(0x3130, 0x318F, L"HangulCompatibilityJamo");
	AddRange(0x3190, 0x319F, L"Kanbun");
	AddRange(0x31A0, 0x31BF, L"BopomofoExtended");
	AddRange(0x31C0, 0x31EF, L"CJKStrokes");
	AddRange(0x31F0, 0x31FF, L"KatakanaPhoneticExtensions");
	AddRange(0x3200, 0x32FF, L"EnclosedCJKLettersandMonths");
	AddRange(0x3300, 0x33FF, L"CJKCompatibility");
	AddRange(0x3400, 0x4DB5, L"CJKUnifiedIdeographsExtensionA");
	AddRange(0x4DC0, 0x4DFF, L"YijingHexagramSymbols");
	AddRange(0x4E00, 0x9FCC, L"CJKUnifiedIdeographs");
	AddRange(0xA000, 0xA48F, L"YiSyllables");
	AddRange(0xA490, 0xA4CF, L"YiRadicals");
	AddRange(0xA4D0, 0xA4FF, L"Lisu");
	AddRange(0xA500, 0xA63F, L"Vai");
	AddRange(0xA640, 0xA69F, L"CyrillicExtendedB");
	AddRange(0xA6A0, 0xA6FF, L"Bamum");
	AddRange(0xA700, 0xA71F, L"ModifierToneLetters");
	AddRange(0xA720, 0xA7FF, L"LatinExtendedD");
	AddRange(0xA800, 0xA82F, L"SylotiNagri");
	AddRange(0xA830, 0xA83F, L"CommonIndicNumberForms");
	AddRange(0xA840, 0xA87F, L"Phagspa");
	AddRange(0xA880, 0xA8DF, L"Saurashtra");
	AddRange(0xA8E0, 0xA8FF, L"DevanagariExtended");
	AddRange(0xA900, 0xA92F, L"KayahLi");
	AddRange(0xA930, 0xA95F, L"Rejang");
	AddRange(0xA960, 0xA97F, L"HangulJamoExtendedA");
	AddRange(0xA980, 0xA9DF, L"Javanese");
	AddRange(0xA9E0, 0xA9FF, L"MyanmarExtendedB");
	AddRange(0xAA00, 0xAA5F, L"Cham");
	AddRange(0xAA60, 0xAA7F, L"MyanmarExtendedA");
	AddRange(0xAA80, 0xAADF, L"TaiViet");
	AddRange(0xAAE0, 0xAAFF, L"MeeteiMayekExtensions");
	AddRange(0xAB00, 0xAB2F, L"EthiopicExtendedA");
	AddRange(0xAB30, 0xAB6F, L"LatinExtendedE");
	AddRange(0xABC0, 0xABFF, L"MeeteiMayek");
	AddRange(0xAC00, 0xD7A3, L"HangulSyllables");
	AddRange(0xD7B0, 0xD7FF, L"HangulJamoExtendedB");
	AddRange(0xD800, 0xDB7F, L"HighSurrogates");
	AddRange(0xDB80, 0xDBFF, L"HighPrivateUseSurrogates");
	AddRange(0xDC00, 0xDFFF, L"LowSurrogates");
	AddRange(0xE000, 0xF8FF, L"PrivateUseArea");
	AddRange(0xF900, 0xFAFF, L"CJKCompatibilityIdeographs");
	AddRange(0xFB00, 0xFB4F, L"AlphabeticPresentationForms");
	AddRange(0xFB50, 0xFDFF, L"ArabicPresentationFormsA");
	AddRange(0xFE00, 0xFE0F, L"VariationSelectors");
	AddRange(0xFE10, 0xFE1F, L"VerticalForms");
	AddRange(0xFE20, 0xFE2F, L"CombiningHalfMarks");
	AddRange(0xFE30, 0xFE4F, L"CJKCompatibilityForms");
	AddRange(0xFE50, 0xFE6F, L"SmallFormVariants");
	AddRange(0xFE70, 0xFEFF, L"ArabicPresentationFormsB");
	AddRange(0xFF00, 0xFFEF, L"HalfwidthandFullwidthForms");
	AddRange(0xFFF0, 0xFFFF, L"Specials");
	AddRange(0x10000, 0x1007F, L"LinearBSyllabary");
	AddRange(0x10080, 0x100FF, L"LinearBIdeograms");
	AddRange(0x10100, 0x1013F, L"AegeanNumbers");
	AddRange(0x10140, 0x1018F, L"AncientGreekNumbers");
	AddRange(0x10190, 0x101CF, L"AncientSymbols");
	AddRange(0x101D0, 0x101FF, L"PhaistosDisc");
	AddRange(0x10280, 0x1029F, L"Lycian");
	AddRange(0x102A0, 0x102DF, L"Carian");
	AddRange(0x102E0, 0x102FF, L"CopticEpactNumbers");
	AddRange(0x10300, 0x1032F, L"OldItalic");
	AddRange(0x10330, 0x1034F, L"Gothic");
	AddRange(0x10350, 0x1037F, L"OldPermic");
	AddRange(0x10380, 0x1039F, L"Ugaritic");
	AddRange(0x103A0, 0x103DF, L"Old Persian");
	AddRange(0x10400, 0x1044F, L"Deseret");
	AddRange(0x10450, 0x1047F, L"Shavian");
	AddRange(0x10480, 0x104AF, L"Osmanya");
	AddRange(0x10500, 0x1052F, L"Elbasan");
	AddRange(0x10530, 0x1056F, L"CaucasianAlbanian");
	AddRange(0x10600, 0x1077F, L"LinearA");
	AddRange(0x10800, 0x1083F, L"CypriotSyllabary");
	AddRange(0x10840, 0x1085F, L"ImperialAramaic");
	AddRange(0x10860, 0x1087F, L"Palmyrene");
	AddRange(0x10880, 0x108AF, L"Nabataean");
	AddRange(0x10900, 0x1091F, L"Phoenician");
	AddRange(0x10920, 0x1093F, L"Lydian");
	AddRange(0x10980, 0x1099F, L"MeroiticHieroglyphs");
	AddRange(0x109A0, 0x109FF, L"MeroiticCursive");
	AddRange(0x10A00, 0x10A5F, L"Kharoshthi");
	AddRange(0x10A60, 0x10A7F, L"OldSouthArabian");
	AddRange(0x10A80, 0x10A9F, L"OldNorthArabian");
	AddRange(0x10AC0, 0x10AFF, L"Manichaean");
	AddRange(0x10B00, 0x10B3F, L"Avestan");
	AddRange(0x10B40, 0x10B5F, L"InscriptionalParthian");
	AddRange(0x10B60, 0x10B7F, L"InscriptionalPahlavi");
	AddRange(0x10B80, 0x10BAF, L"PsalterPahlavi");
	AddRange(0x10C00, 0x10C4F, L"OldTurkic");
	AddRange(0x10E60, 0x10E7F, L"RumiNumeralSymbols");
	AddRange(0x11000, 0x1107F, L"Brahmi");
	AddRange(0x11080, 0x110CF, L"Kaithi");
	AddRange(0x110D0, 0x110FF, L"SoraSompeng");
	AddRange(0x11100, 0x1114F, L"Chakma");
	AddRange(0x11150, 0x1117F, L"Mahajani");
	AddRange(0x11180, 0x111DF, L"Sharada");
	AddRange(0x111E0, 0x111FF, L"Sinhala Archaic Numbers");
	AddRange(0x11200, 0x1124F, L"Khojki");
	AddRange(0x112B0, 0x112FF, L"Khudawadi");
	AddRange(0x11300, 0x1137F, L"Grantha");
	AddRange(0x11480, 0x114DF, L"Tirhuta");
	AddRange(0x11580, 0x115FF, L"Siddham");
	AddRange(0x11600, 0x1165F, L"Modi");
	AddRange(0x11680, 0x116CF, L"Takri");
	AddRange(0x118A0, 0x118FF, L"WarangCiti");
	AddRange(0x11AC0, 0x11AFF, L"PauCinHau");
	AddRange(0x12000, 0x123FF, L"Cuneiform");
	AddRange(0x12400, 0x1247F, L"CuneiformNumberandPunctuation");
	AddRange(0x13000, 0x1342F, L"EgyptianHieroglyphs");
	AddRange(0x16800, 0x16A3F, L"BamumSupplement");
	AddRange(0x16A40, 0x16A6F, L"Mro");
	AddRange(0x16AD0, 0x16AFF, L"BassaVah");
	AddRange(0x16B00, 0x16B8F, L"PahawhHmong");
	AddRange(0x16F00, 0x16F9F, L"Miao");
	AddRange(0x1B000, 0x1B0FF, L"KanaSupplement");
	AddRange(0x1BC00, 0x1BC9F, L"Duployan");
	AddRange(0x1BCA0, 0x1BCAF, L"ShorthandFormatControls");
	AddRange(0x1D000, 0x1D0FF, L"ByzantineMusicalSymbols");
	AddRange(0x1D100, 0x1D1FF, L"MusicalSymbols");
	AddRange(0x1D200, 0x1D24F, L"AncientGreekMusicalNotation");
	AddRange(0x1D300, 0x1D35F, L"TaiXuanJingSymbols");
	AddRange(0x1D360, 0x1D37F, L"CountingRodNumerals");
	AddRange(0x1D400, 0x1D7FF, L"MathematicalAlphanumericSymbols");
	AddRange(0x1E800, 0x1E8DF, L"MendeKikakui");
	AddRange(0x1EE00, 0x1EEFF, L"ArabicMathematicalAlphabeticSymbols");
	AddRange(0x1F000, 0x1F02F, L"MahjongTiles");
	AddRange(0x1F030, 0x1F09F, L"DominoTiles");
	AddRange(0x1F0A0, 0x1F0FF, L"PlayingCards");
	AddRange(0x1F100, 0x1F1FF, L"EnclosedAlphanumericSupplement");
	AddRange(0x1F200, 0x1F2FF, L"EnclosedIdeographicSupplement");
	AddRange(0x1F300, 0x1F5FF, L"MiscellaneousSymbolsandPictographs");
	AddRange(0x1F600, 0x1F64F, L"EmoticonsEmoji");
	AddRange(0x1F650, 0x1F67F, L"OrnamentalDingbats");
	AddRange(0x1F680, 0x1F6FF, L"TransportandMapSymbols");
	AddRange(0x1F700, 0x1F77F, L"AlchemicalSymbols");
	AddRange(0x1F780, 0x1F7FF, L"GeometricShapesExtended");
	AddRange(0x1F800, 0x1F8FF, L"SupplementalArrowsC");
}


UniWcUtil::~UniWcUtil()
{
	for (auto itm : ugroup) {
		delete itm;
	}
	wcset1.clear();
	for (auto itm : ugroup) {
		free(itm);
	}
	ugroup.clear();
}

size_t UniWcUtil::RangeSize()
{
	return ugroup.size();
}

wchar_t* UniWcUtil::GetRange(size_t index)
{
	if (index > ugroup.size()) {
		return NULL;
	}
	size_t start, end;
	ugroup_t* g = ugroup.at(index);
	wchar_t* s = GenerateUnicodeString(g->end - g->start, g->start, g->end);
	return s;
}

wchar_t* UniWcUtil::GetRangeName(size_t index)
{
	if (index > ugroup.size()) {
		return NULL;
	}
	ugroup_t* g = ugroup.at(index);
	return g->name;
}

void UniWcUtil::AddRange(size_t start, size_t end, wchar_t* name)
{
	ugroup_t* u = (ugroup_t*)malloc(sizeof(ugroup_t));
	u->start = start;
	u->end = end;
	u->name = name;
	ugroup.push_back(u);
}

wchar_t* UniWcUtil::GenerateUnicodeString(size_t len, size_t start, size_t end)
{
	wchar_t* str1 = new wchar_t[len + 1];

	for (auto i = 0; i < len; i++) {
		str1[i] = i + start;
	}
	str1[len] = L'\0';
	return str1;
}

void UniWcUtil::Generate()
{
	const size_t bufsz = 0x0200;
	wchar_t buffer[bufsz];
	for (size_t j = 0x00; j <= 0xFF; j++) {
		size_t start = (j << 8);
		size_t end = (j << 8) | 0xFF;
		wchar_t* subgroup = GenerateUnicodeString(0xFF, start, end);
		wcset1.push_back(subgroup);
		swprintf(buffer, bufsz, L"set%d", j);
		wcsetkey1.push_back(buffer);
	}
}

wchar_t* UniWcUtil::GetGroup(size_t n)
{
	if (n > wcset1.size()) {
		return NULL;
	}
	auto ret = wcset1.at(n);
	return ret;
}

wchar_t** UniWcUtil::GetGroups(int n_args, ...)
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