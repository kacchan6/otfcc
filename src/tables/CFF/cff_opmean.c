/*
  operator to string.
*/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cff_io.h"

char *op_cff_name(uint32_t op) {
	switch (op) {
		case op_version:
			return "Version";
		case op_Notice:
			return "Notice";
		case op_FullName:
			return "FullName";
		case op_FamilyName:
			return "FamilyName";
		case op_Weight:
			return "Weight";
		case op_FontBBox:
			return "FontBBox";
		case op_BlueValues:
			return "BlueValues";
		case op_OtherBlues:
			return "OtherBlues";
		case op_FamilyBlues:
			return "FamilyBlues";
		case op_FamilyOtherBlues:
			return "FamilyOtherBlues";
		case op_StdHW:
			return "StdHW";
		case op_StdVW:
			return "StdVW";
		case op_UniqueID:
			return "UniqueID";
		case op_XUID:
			return "XUID";
		case op_charset:
			return "charset";
		case op_Encoding:
			return "Encoding";
		case op_CharStrings:
			return "CharStrings";
		case op_Private:
			return "Private";
		case op_Subrs:
			return "Subrs";
		case op_defaultWidthX:
			return "defaultWidthX";
		case op_nominalWidthX:
			return "nominalWidthX";
		case op_Copyright:
			return "Copyright";
		case op_isFixedPitch:
			return "isFixedPitch";
		case op_ItalicAngle:
			return "ItalicAngle";
		case op_UnderlinePosition:
			return "UnderlinePosition";
		case op_UnderlineThickness:
			return "UnderlineThickness";
		case op_PaintType:
			return "PaintType";
		case op_CharstringType:
			return "CharstringType";
		case op_FontMatrix:
			return "FontMatrix";
		case op_StrokeWidth:
			return "StrokeWidth";
		case op_BlueScale:
			return "BlueScale";
		case op_BlueShift:
			return "BlueShift";
		case op_BlueFuzz:
			return "BlueFuzz";
		case op_StemSnapH:
			return "StemSnapH";
		case op_StemSnapV:
			return "StemSnapV";
		case op_ForceBold:
			return "ForceBold";
		case op_LanguageGroup:
			return "LanguageGroup";
		case op_ExpansionFactor:
			return "ExpansionFactor";
		case op_initialRandomSeed:
			return "initialRandomSeed";
		case op_SyntheicBase:
			return "SyntheicBase";
		case op_PostScript:
			return "PostScript";
		case op_BaseFontName:
			return "BaseFontName";
		case op_BaseFontBlend:
			return "BaseFontBlend";
		case op_ROS:
			return "ROS";
		case op_CIDFontVersion:
			return "CIDFontVersion";
		case op_CIDFontRevision:
			return "CIDFontReversion";
		case op_CIDFontType:
			return "CIDFontType";
		case op_CIDCount:
			return "CIDCount";
		case op_UIDBase:
			return "UIDBase";
		case op_FDArray:
			return "FDArray";
		case op_FDSelect:
			return "FDSelect";
		case op_FontName:
			return "FontName";
		default:
			return "Unkown";
	}
}

char *op_cs2_name(uint32_t op) {
	switch (op) {
		case op_hstem:
			return "hstem";
		case op_vstem:
			return "vstem";
		case op_vmoveto:
			return "vmoveto";
		case op_rlineto:
			return "rlineto";
		case op_hlineto:
			return "hlineto";
		case op_vlineto:
			return "vlineto";
		case op_rrcurveto:
			return "rrcurveto";
		case op_callsubr:
			return "callsubr";
		case op_return:
			return "return";
		case op_endchar:
			return "endchar";
		case op_hstemhm:
			return "hstemhm";
		case op_hintmask:
			return "hintmask";
		case op_cntrmask:
			return "cntrmask";
		case op_rmoveto:
			return "rmoveto";
		case op_hmoveto:
			return "hmoveto";
		case op_vstemhm:
			return "vstemhm";
		case op_rcurveline:
			return "rcurveline";
		case op_rlinecurve:
			return "rlinecurve";
		case op_vvcurveto:
			return "vvcurveto";
		case op_hhcurveto:
			return "hhcurveto";
		case op_callgsubr:
			return "callgsubr";
		case op_vhcurveto:
			return "vhcurveto";
		case op_hvcurveto:
			return "hvcurveto";
		case op_and:
			return "and";
		case op_or:
			return "or";
		case op_not:
			return "not";
		case op_abs:
			return "abs";
		case op_add:
			return "add";
		case op_sub:
			return "sub";
		case op_div:
			return "div";
		case op_neg:
			return "neg";
		case op_eq:
			return "eq";
		case op_drop:
			return "drop";
		case op_put:
			return "put";
		case op_get:
			return "get";
		case op_ifelse:
			return "ifelse";
		case op_random:
			return "random";
		case op_mul:
			return "mul";
		case op_sqrt:
			return "sqrt";
		case op_dup:
			return "dup";
		case op_exch:
			return "exch";
		case op_index:
			return "index";
		case op_roll:
			return "roll";
		case op_hflex:
			return "hflex";
		case op_flex:
			return "fles";
		case op_hflex1:
			return "hflex1";
		case op_flex1:
			return "flex1";
		default:
			return "Unknown";
	}
}

uint8_t cs2_op_standard_arity(uint32_t op) {
	switch (op) {
		case op_rlineto:
		case op_rmoveto:
			return 2;
		case op_hlineto:
		case op_vlineto:
			return 1;
		case op_rrcurveto:
			return 6;
		default:
			return 2;
	}
}
