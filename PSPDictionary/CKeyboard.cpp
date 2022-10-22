#include "CKeyboard.h"

CKeyboardSurface *keyboardsurface = new CKeyboardSurface();

CKeyboard::CKeyboard()
{
	markedtexcolor.r = markedtext;	unmarkedtextcolor.r = 130;
	markedtexcolor.g = markedtext;	unmarkedtextcolor.g = 150;
	markedtexcolor.b = markedtext;	unmarkedtextcolor.b = 255;

	unmarkedkeycolor.r = 0;
	unmarkedkeycolor.g = 150;
	unmarkedkeycolor.b = unmakredkey;

	unmarkedIntellisense.r = 0;
	unmarkedIntellisense.g = 15;
	unmarkedIntellisense.b = 255;
}

CKeyboard::~CKeyboard()
{
	keyboardsurface->CloseFont();

	delete keyboardsurface;
}

void CKeyboard::Init()
{
	keyboardsurface->LoadFont();
}

SDL_Surface *CKeyboard::DrawLabel(const char* labeltext, TTF_Font *fontlabel, SDL_Color colorlabel)
{
	SDL_Surface *Surf_SrcText;
	
	Surf_SrcText = TTF_RenderText_Blended(fontlabel, labeltext, colorlabel);
	
	return Surf_SrcText;
}

//========================================================================================================
//KeyboardMobil Logic!!!!
//========================================================================================================
void CKeyboard::KeyboardMobileEngine(int UpDownSetting, int LeftRightSetting, char *intelisense, char *writtenword)
{
	switch(UpDownSetting)
	{
//--------------------------------------------------------------------------------------------------------
//first row from abc to ghi
//--------------------------------------------------------------------------------------------------------
		case 1:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_IntellisenseKey =DrawLabel("abcABCáàâäæÁÀÂÄÆçÇ", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel( intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), markedtexcolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 2:
				{
					Surf_IntellisenseKey =DrawLabel("defDEFéèêëÉÈÊË", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);
					
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), markedtexcolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 3:
				{
					Surf_IntellisenseKey =DrawLabel("ghiGHIíìîïÍÌÎÏ", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), markedtexcolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 4:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), markedtexcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}
			}
			break;
		}
//--------------------------------------------------------------------------------------------------------
//Secound row from jkl to pqrs
//--------------------------------------------------------------------------------------------------------
		case 2:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_IntellisenseKey =DrawLabel("jklJKL", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), markedtexcolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}
				
				case 2:
				{
					Surf_IntellisenseKey =DrawLabel("mnoMNOñÑóòôöÓÒÔÖ", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), markedtexcolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 3:
				{
					Surf_IntellisenseKey = DrawLabel("pqrsPQRSß", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), markedtexcolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 4:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), markedtexcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}
			}
			break;
		}
//--------------------------------------------------------------------------------------------------------
//third row from tuv to ?!
//--------------------------------------------------------------------------------------------------------
		case 3:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_IntellisenseKey =DrawLabel("tuvTUVúùûüÚÙÛÜ", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), markedtexcolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 2:
				{
					Surf_IntellisenseKey =DrawLabel("wxyzWXYZ", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), markedtexcolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 3:
				{
					Surf_IntellisenseKey =DrawLabel("¿?¡!,.:;»«", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), markedtexcolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 4:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), markedtexcolor);

					Surf_HelpLabelText = DrawLabel("On the right side you will find some suggestions", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

			}
			break;
		}
//--------------------------------------------------------------------------------------------------------
//las row from Space to OK!
//--------------------------------------------------------------------------------------------------------
		case 4:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("Instert a space", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 2:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("Change to another keyboard", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 3:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_HelpLabelText = DrawLabel("Delete last character", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}

				case 4:
				{
					Surf_IntellisenseKey =DrawLabel("", keyboardsurface->GetFontSuggestion(), unmarkedIntellisense);
					Surf_Intelisense = DrawLabel(intelisense, keyboardsurface->GetFontSuggestion(), markedtexcolor);

					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyABC = DrawLabel("abc", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyDEF = DrawLabel("def", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyGHI = DrawLabel("ghi", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyIKL = DrawLabel("jkl", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyMNO = DrawLabel("mno", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyPQRS = DrawLabel("pqrs", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					
					Surf_KeyTUV = DrawLabel("tuv", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_KeyWXYZ = DrawLabel("wxyz", keyboardsurface->GetFontKey(), unmarkedkeycolor);
					Surf_SpecialCharacters = DrawLabel(".,?!", keyboardsurface->GetFontKey(), unmarkedkeycolor);

					Surf_KeySpace = DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange = DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), markedtexcolor);

					Surf_HelpLabelText = DrawLabel("SEARCH IT!", keyboardsurface->GetFontHelp() ,markedtexcolor);
					break;
				}
			}
			break;
		}
//--------------------------------------------------------------------------------------------------------
	}//close switch case 1
}
//========================================================================================================

//========================================================================================================
//KeyboardQERTY Logic!!!!
//========================================================================================================
void CKeyboard::KeyboardQWERTYEngine(int UpDownSetting, int LeftRightSetting, char *writtenword)
{
	switch(UpDownSetting)
	{
//--------------------------------------------------------------------------------------------------------
//first row qwertyuio?
//--------------------------------------------------------------------------------------------------------
		case 1:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 2:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 3:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 4:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 5:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 6:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 7:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 8:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 9:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 10:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 11:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,markedtexcolor);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}
			}
			break;
		}//line 1
//--------------------------------------------------------------------------------------------------------
//secound row asdfghjkl"delete
//--------------------------------------------------------------------------------------------------------
		case 2:
		{	
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 2:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 3:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 4:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 5:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 6:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 7:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 8:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 9:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 10:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 11:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,markedtexcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}
			}
			break;
		}//line 2
//--------------------------------------------------------------------------------------------------------
//third row zxcvbnm,.!OK!
//--------------------------------------------------------------------------------------------------------
		case 3:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 2:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 3:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 4:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 5:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 6:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 7:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 8:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 9:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 10:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 11:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey() ,markedtexcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}
			}
			break;
		}//line 3
//--------------------------------------------------------------------------------------------------------
//last row shift space change
//--------------------------------------------------------------------------------------------------------
		case 4:
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 2:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 3:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 4:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 5:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 6:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 7:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 8:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 9:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,markedtexcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					break;
				}

				case 10:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,markedtexcolor);
					break;
				}

				case 11:
				{
					Surf_WrittenWord = DrawLabel( writtenword, keyboardsurface->GetFontHelp(), markedtexcolor);

					Surf_KeyQ = DrawLabel("Q", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyW =	DrawLabel("W", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyE =	DrawLabel("E", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyR = DrawLabel("R", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyT = DrawLabel("T", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyY = DrawLabel("Y", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyU = DrawLabel("U", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyI = DrawLabel("I", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyO = DrawLabel("O", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyP = DrawLabel("P", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuestion = DrawLabel("?", keyboardsurface->GetFontKey() ,unmarkedIntellisense);

					Surf_KeyA = DrawLabel("A", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyS =	DrawLabel("S", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyD =	DrawLabel("D", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyF = DrawLabel("F", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyG = DrawLabel("G", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyH = DrawLabel("H", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyJ = DrawLabel("J", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyK = DrawLabel("K", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyL = DrawLabel("L", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyQuotes = DrawLabel("''", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDelete = DrawLabel("Delete", keyboardsurface->GetFontKey() ,unmarkedtextcolor);

					Surf_KeyZ = DrawLabel("Z", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyX =	DrawLabel("X", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyC =	DrawLabel("C", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyV = DrawLabel("V", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyB = DrawLabel("B", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyN = DrawLabel("N", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyM = DrawLabel("M", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyComa = DrawLabel(",", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyDot = DrawLabel(".", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyNotation = DrawLabel("!", keyboardsurface->GetFontKey() ,unmarkedIntellisense);
					Surf_KeyOK = DrawLabel("OK!", keyboardsurface->GetFontKey(), unmarkedtextcolor);

					Surf_KeyShift = DrawLabel("Shift", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeySpace =	DrawLabel("Space", keyboardsurface->GetFontKey() ,unmarkedtextcolor);
					Surf_KeyChange =	DrawLabel("Change", keyboardsurface->GetFontKey() ,markedtexcolor);
					break;
				}
			}
			break;
		}//line 4

	}
}
//========================================================================================================



SDL_Surface *CKeyboard::GetKeyABC() {return Surf_KeyABC;}
SDL_Surface *CKeyboard::GetKeyDEF() {return Surf_KeyDEF;}
SDL_Surface *CKeyboard::GetKeyGHI() {return Surf_KeyGHI;}
SDL_Surface *CKeyboard::GetKeyJKL() {return Surf_KeyIKL;}
SDL_Surface *CKeyboard::GetKeyMNO() {return Surf_KeyMNO;}
SDL_Surface *CKeyboard::GetKeyPQRS() {return Surf_KeyPQRS;}
SDL_Surface *CKeyboard::GetKeyTUV() {return Surf_KeyTUV;}
SDL_Surface *CKeyboard::GetKeyWYZ() {return Surf_KeyWXYZ;}
SDL_Surface *CKeyboard::GetSpecialCharacters() {return Surf_SpecialCharacters;}

SDL_Surface *CKeyboard::GetIntellisenseKey() {return Surf_IntellisenseKey;}

SDL_Surface *CKeyboard::GetKeySpace() {return Surf_KeySpace;}
SDL_Surface *CKeyboard::GetKeyChange() {return Surf_KeyChange;}
SDL_Surface *CKeyboard::GetKeyDelete() {return Surf_KeyDelete;}
SDL_Surface *CKeyboard::GetKeyOK() {return Surf_KeyOK;}

SDL_Surface *CKeyboard::GetHelpLabelText() {return Surf_HelpLabelText;}

SDL_Surface *CKeyboard::GetIntelisense() {return Surf_Intelisense;}
SDL_Surface *CKeyboard::GetWrittenWord() {return Surf_WrittenWord;}

SDL_Surface *CKeyboard::GetKeyA() {return Surf_KeyA;}
SDL_Surface *CKeyboard::GetKeyB() {return Surf_KeyB;}
SDL_Surface *CKeyboard::GetKeyC() {return Surf_KeyC;}
SDL_Surface *CKeyboard::GetKeyD() {return Surf_KeyD;}
SDL_Surface *CKeyboard::GetKeyE() {return Surf_KeyE;}
SDL_Surface *CKeyboard::GetKeyF() {return Surf_KeyF;}
SDL_Surface *CKeyboard::GetKeyG() {return Surf_KeyG;}
SDL_Surface *CKeyboard::GetKeyH() {return Surf_KeyH;}
SDL_Surface *CKeyboard::GetKeyI() {return Surf_KeyI;}
SDL_Surface *CKeyboard::GetKeyJ() {return Surf_KeyJ;}
SDL_Surface *CKeyboard::GetKeyK() {return Surf_KeyK;}
SDL_Surface *CKeyboard::GetKeyL() {return Surf_KeyL;}
SDL_Surface *CKeyboard::GetKeyM() {return Surf_KeyM;}
SDL_Surface *CKeyboard::GetKeyN() {return Surf_KeyN;}
SDL_Surface *CKeyboard::GetKeyO() {return Surf_KeyO;}
SDL_Surface *CKeyboard::GetKeyP() {return Surf_KeyP;}
SDL_Surface *CKeyboard::GetKeyQ() {return Surf_KeyQ;}
SDL_Surface *CKeyboard::GetKeyR() {return Surf_KeyR;}
SDL_Surface *CKeyboard::GetKeyS() {return Surf_KeyS;}
SDL_Surface *CKeyboard::GetKeyT() {return Surf_KeyT;}
SDL_Surface *CKeyboard::GetKeyU() {return Surf_KeyU;}
SDL_Surface *CKeyboard::GetKeyV() {return Surf_KeyV;}
SDL_Surface *CKeyboard::GetKeyW() {return Surf_KeyW;}
SDL_Surface *CKeyboard::GetKeyX() {return Surf_KeyX;}
SDL_Surface *CKeyboard::GetKeyY() {return Surf_KeyY;}
SDL_Surface *CKeyboard::GetKeyZ() {return Surf_KeyZ;}

SDL_Surface *CKeyboard::GetKeyQuestion() {return Surf_KeyQuestion;}	
SDL_Surface *CKeyboard::GetKeyDot() {return Surf_KeyDot;}
SDL_Surface *CKeyboard::GetKeyQuotes(){return Surf_KeyQuotes;}	
SDL_Surface *CKeyboard::GetKeyNotation() {return Surf_KeyNotation;}
SDL_Surface *CKeyboard::GetKeyComa() {return Surf_KeyComa;}
SDL_Surface	*CKeyboard::GetKeyShift() {return Surf_KeyShift;}