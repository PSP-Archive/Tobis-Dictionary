#include "CMenu.h"

CMenuSurface *menusurface = new CMenuSurface();

CMenu::CMenu()
{
	markedtexcolor.r = markedtext;	unmarkedtextcolor.r = unmarkedtext;
	markedtexcolor.g = markedtext;	unmarkedtextcolor.g = unmarkedtext;
	markedtexcolor.b = markedtext;	unmarkedtextcolor.b = unmarkedtext;

	MainMenuLabelInit();
	LoadMenuLabelInit();
	DictionaryMainMenuLabelInit();
	HelpMainMenuLabelInit();
}

CMenu::~CMenu()
{
	menusurface->CloseFont();

	delete MainMenuItemLabelpointer1;
	delete MainMenuItemLabelpointer2;
	delete MainMenuItemLabelpointer3;
	delete MainMenuItemLabelpointer4;

	delete DictionaryMainMenuItemLabelpointer1;		delete DictionaryHelplabelpointer1;
	delete DictionaryMainMenuItemLabelpointer2;		delete DictionaryHelplabelpointer2;
	delete DictionaryMainMenuItemLabelpointer3;		delete DictionaryHelplabelpointer3;
	delete DictionaryMainMenuItemLabelpointer4;		delete DictionaryHelplabelpointer4;

	delete HelpMainMenuItemLabelpointer1;			delete HelpMainMenuHelpLabelpointer1;
	delete HelpMainMenuItemLabelpointer2;			delete HelpMainMenuHelpLabelpointer2;
	delete HelpMainMenuItemLabelpointer3;			delete HelpMainMenuHelpLabelpointer3;

	delete menusurface;

}

void CMenu::Init()
{
	menusurface->LoadFont();
}

void CMenu::MainMenuLabelInit()
{
	MainMenuItemLabel1 = "Load Dictionaries";
	MainMenuItemLabel2 = "Dictionary";
	MainMenuItemLabel3 = "Extra";
	MainMenuItemLabel4 = "Help";

	MainMenuItemLabelpointer1 = new char[MainMenuItemLabel1.size()+1];
	MainMenuItemLabelpointer2 = new char[MainMenuItemLabel2.size()+1];
	MainMenuItemLabelpointer3 = new char[MainMenuItemLabel3.size()+1];
	MainMenuItemLabelpointer4 = new char[MainMenuItemLabel4.size()+1];

	strcpy(MainMenuItemLabelpointer1,MainMenuItemLabel1.c_str());
	strcpy(MainMenuItemLabelpointer2,MainMenuItemLabel2.c_str());
	strcpy(MainMenuItemLabelpointer3,MainMenuItemLabel3.c_str());
	strcpy(MainMenuItemLabelpointer4,MainMenuItemLabel4.c_str());
}

void CMenu::LoadMenuLabelInit()
{
	LoadMenuItemLabel1 = "not available";
	LoadMenuItemLabel2 = "not available";
	LoadMenuItemLabel3 = "not available";
	LoadMenuItemLabel4 = "not available";
	LoadMenuItemLabel5 = "not available";
	LoadMenuItemLabel6 = "not available";
	LoadMenuItemLabel7 = "not available";
	LoadMenuItemLabel8 = "not available";
	LoadMenuItemLabel9 = "not available";
	LoadMenuItemLabel10 = "not available";

	LoadMenuItemLabelpointer1 = new char[LoadMenuItemLabel1.size()+1];
	LoadMenuItemLabelpointer2 = new char[LoadMenuItemLabel2.size()+1];
	LoadMenuItemLabelpointer3 = new char[LoadMenuItemLabel3.size()+1];
	LoadMenuItemLabelpointer4 = new char[LoadMenuItemLabel4.size()+1];
	LoadMenuItemLabelpointer5 = new char[LoadMenuItemLabel5.size()+1];
	LoadMenuItemLabelpointer6 = new char[LoadMenuItemLabel6.size()+1];
	LoadMenuItemLabelpointer7 = new char[LoadMenuItemLabel7.size()+1];
	LoadMenuItemLabelpointer8 = new char[LoadMenuItemLabel8.size()+1];
	LoadMenuItemLabelpointer9 = new char[LoadMenuItemLabel9.size()+1];
	LoadMenuItemLabelpointer10 = new char[LoadMenuItemLabel10.size()+1];

	strcpy(LoadMenuItemLabelpointer1, LoadMenuItemLabel1.c_str());
	strcpy(LoadMenuItemLabelpointer2, LoadMenuItemLabel2.c_str());
	strcpy(LoadMenuItemLabelpointer3, LoadMenuItemLabel3.c_str());
	strcpy(LoadMenuItemLabelpointer4, LoadMenuItemLabel4.c_str());
	strcpy(LoadMenuItemLabelpointer5, LoadMenuItemLabel5.c_str());
	strcpy(LoadMenuItemLabelpointer6, LoadMenuItemLabel6.c_str());
	strcpy(LoadMenuItemLabelpointer7, LoadMenuItemLabel7.c_str());
	strcpy(LoadMenuItemLabelpointer8, LoadMenuItemLabel8.c_str());
	strcpy(LoadMenuItemLabelpointer9, LoadMenuItemLabel9.c_str());
	strcpy(LoadMenuItemLabelpointer10, LoadMenuItemLabel10.c_str());

//Helptext
	LoadHelpLabel = "Profesor Tobí: Just select one dictionary";
	LoadHelpLabelpointer = new char[LoadHelpLabel.size()+1];
	strcpy(LoadHelpLabelpointer, LoadHelpLabel.c_str());
}

void CMenu::DictionaryMainMenuLabelInit()
{
//Menuitemlabels
	DictionaryMainMenuItemLabel1 = "Search";
	DictionaryMainMenuItemLabel2 = "Search Random";
	DictionaryMainMenuItemLabel3 = "Search Online";
	DictionaryMainMenuItemLabel4 = "History";

	DictionaryMainMenuItemLabelpointer1 = new char[DictionaryMainMenuItemLabel1.size()+1];
	DictionaryMainMenuItemLabelpointer2 = new char[DictionaryMainMenuItemLabel2.size()+1];
	DictionaryMainMenuItemLabelpointer3 = new char[DictionaryMainMenuItemLabel3.size()+1];
	DictionaryMainMenuItemLabelpointer4 = new char[DictionaryMainMenuItemLabel4.size()+1];

	strcpy(DictionaryMainMenuItemLabelpointer1, DictionaryMainMenuItemLabel1.c_str());
	strcpy(DictionaryMainMenuItemLabelpointer2, DictionaryMainMenuItemLabel2.c_str());
	strcpy(DictionaryMainMenuItemLabelpointer3, DictionaryMainMenuItemLabel3.c_str());
	strcpy(DictionaryMainMenuItemLabelpointer4, DictionaryMainMenuItemLabel4.c_str());

//Helptext
	DictionaryHelpLabel1 = "Profesor Tobí: You can searchs a word in the actual dictionary";
	DictionaryHelpLabel2 = "Profesor Tobí: You can do a random searchs in the actual dictionary. It is pretty cool.";
	DictionaryHelpLabel3 = "Profesor Tobí: Search on some Dictionary-Website. Don't forget to put WiFi button ON!";
	DictionaryHelpLabel4 = "Profesor Tobí: List of the last 5 searchs, you have done.";

	DictionaryHelplabelpointer1 = new char[DictionaryHelpLabel1.size()+1];
	DictionaryHelplabelpointer2 = new char[DictionaryHelpLabel2.size()+1];
	DictionaryHelplabelpointer3 = new char[DictionaryHelpLabel3.size()+1];
	DictionaryHelplabelpointer4 = new char[DictionaryHelpLabel4.size()+1];

	strcpy(DictionaryHelplabelpointer1, DictionaryHelpLabel1.c_str());
	strcpy(DictionaryHelplabelpointer2, DictionaryHelpLabel2.c_str());
	strcpy(DictionaryHelplabelpointer3, DictionaryHelpLabel3.c_str());
	strcpy(DictionaryHelplabelpointer4, DictionaryHelpLabel4.c_str());
}

void CMenu::HelpMainMenuLabelInit()
{
//Menuitemlabels
	HelpMainMenuItemLabel1 = "Info";
	HelpMainMenuItemLabel2 = "Control";
	HelpMainMenuItemLabel3 = "About";

	HelpMainMenuItemLabelpointer1 = new char[HelpMainMenuItemLabel1.size()+1];
	HelpMainMenuItemLabelpointer2 = new char[HelpMainMenuItemLabel2.size()+1];
	HelpMainMenuItemLabelpointer3 = new char[HelpMainMenuItemLabel3.size()+1];

	strcpy(HelpMainMenuItemLabelpointer1, HelpMainMenuItemLabel1.c_str());
	strcpy(HelpMainMenuItemLabelpointer2, HelpMainMenuItemLabel2.c_str());
	strcpy(HelpMainMenuItemLabelpointer3, HelpMainMenuItemLabel3.c_str());

//Helptext
	HelpMainMenuHelpLabel1 = "Profesor Tobí: Some hints about the application";
	HelpMainMenuHelpLabel2 = "Profesor Tobí: About the control settings.";
	HelpMainMenuHelpLabel3 = "Profesor Tobí: About us, me and my creator.";

	HelpMainMenuHelpLabelpointer1 = new char[HelpMainMenuHelpLabel1.size()+1];
	HelpMainMenuHelpLabelpointer2 = new char[HelpMainMenuHelpLabel2.size()+1];
	HelpMainMenuHelpLabelpointer3 = new char[HelpMainMenuHelpLabel3.size()+1];

	strcpy(HelpMainMenuHelpLabelpointer1, HelpMainMenuHelpLabel1.c_str());
	strcpy(HelpMainMenuHelpLabelpointer2, HelpMainMenuHelpLabel2.c_str());
	strcpy(HelpMainMenuHelpLabelpointer3, HelpMainMenuHelpLabel3.c_str());
}


SDL_Surface *CMenu::DrawLabel(const char* labeltext, TTF_Font *fontlabel, SDL_Color colorlabel)
{
	SDL_Surface *Surf_SrcText;
	
	Surf_SrcText = TTF_RenderText_Blended(fontlabel, labeltext, colorlabel);
	
	return Surf_SrcText;
}

void CMenu::MainMenuEngine(int UpDownSetting)
{
	switch(UpDownSetting)
	{
		case 1:
			{
				Surf_LabelText1 = DrawLabel(MainMenuItemLabelpointer1, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText2 = DrawLabel(MainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(MainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText4 = DrawLabel(MainMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
				break;
			}

		case 2:
			{
				Surf_LabelText1 = DrawLabel(MainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(MainMenuItemLabelpointer2, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText3 = DrawLabel(MainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText4 = DrawLabel(MainMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
				break;
			}

		case 3:
			{
				Surf_LabelText1 = DrawLabel(MainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(MainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(MainMenuItemLabelpointer3, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText4 = DrawLabel(MainMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
				break;
			}

		case 4:
			{
				Surf_LabelText1 = DrawLabel(MainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(MainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(MainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText4 = DrawLabel(MainMenuItemLabelpointer4, menusurface->GetFont(), markedtexcolor);
				break;
			}
	}
}

void CMenu::DictionaryMenuEngine(int UpDownSetting)
{
	switch(UpDownSetting)
	{
		case 1:
			{
				Surf_LabelText1 = DrawLabel(DictionaryMainMenuItemLabelpointer1, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText2 = DrawLabel(DictionaryMainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(DictionaryMainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText4 = DrawLabel(DictionaryMainMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);

				Surf_HelpLabelText = DrawLabel(DictionaryHelplabelpointer1, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}

		case 2:
			{
				Surf_LabelText1 = DrawLabel(DictionaryMainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(DictionaryMainMenuItemLabelpointer2, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText3 = DrawLabel(DictionaryMainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText4 = DrawLabel(DictionaryMainMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
				
				Surf_HelpLabelText = DrawLabel(DictionaryHelplabelpointer2, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}

		case 3:
			{
				Surf_LabelText1 = DrawLabel(DictionaryMainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(DictionaryMainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(DictionaryMainMenuItemLabelpointer3, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText4 = DrawLabel(DictionaryMainMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
				
				Surf_HelpLabelText = DrawLabel(DictionaryHelplabelpointer3, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}

		case 4:
			{
				Surf_LabelText1 = DrawLabel(DictionaryMainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(DictionaryMainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(DictionaryMainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText4 = DrawLabel(DictionaryMainMenuItemLabelpointer4, menusurface->GetFont(), markedtexcolor);
				
				Surf_HelpLabelText = DrawLabel(DictionaryHelplabelpointer4, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}
	}
}

void CMenu::HelpMenuEngine(int UpDownSetting)
{
	switch(UpDownSetting)
	{
		case 1:
			{
				Surf_LabelText1 = DrawLabel(HelpMainMenuItemLabelpointer1, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText2 = DrawLabel(HelpMainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(HelpMainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);

				Surf_HelpLabelText = DrawLabel(HelpMainMenuHelpLabelpointer1, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}

		case 2:
			{
				Surf_LabelText1 = DrawLabel(HelpMainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(HelpMainMenuItemLabelpointer2, menusurface->GetFont(), markedtexcolor);
				Surf_LabelText3 = DrawLabel(HelpMainMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);

				Surf_HelpLabelText = DrawLabel(HelpMainMenuHelpLabelpointer2, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}

		case 3:
			{
				Surf_LabelText1 = DrawLabel(HelpMainMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText2 = DrawLabel(HelpMainMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
				Surf_LabelText3 = DrawLabel(HelpMainMenuItemLabelpointer3, menusurface->GetFont(), markedtexcolor);

				Surf_HelpLabelText = DrawLabel(HelpMainMenuHelpLabelpointer3, menusurface->GetHelpFont(), markedtexcolor);
				break;
			}
	}
}

void CMenu::SuggestionEngine(int SuggesstionSetting)
{
	switch(SuggesstionSetting)
	{
		case 1:
		{
			Surf_LabelText1 = DrawLabel("blubb", menusurface->GetFont(), markedtexcolor);
			Surf_LabelText2 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText3 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText4 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText5 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			break;
		}

		case 2:
		{
			Surf_LabelText1 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText2 = DrawLabel("blubb", menusurface->GetFont(), markedtexcolor);
			Surf_LabelText3 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText4 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText5 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			break;
		}

		case 3:
		{
			Surf_LabelText1 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText2 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText3 = DrawLabel("blubb", menusurface->GetFont(), markedtexcolor);
			Surf_LabelText4 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText5 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			break;
		}

		case 4:
		{
			Surf_LabelText1 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText2 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText3 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText4 = DrawLabel("blubb", menusurface->GetFont(), markedtexcolor);
			Surf_LabelText5 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			break;
		}

		case 5:
		{
			Surf_LabelText1 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText2 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText3 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText4 = DrawLabel("blubb", menusurface->GetFont(), unmarkedtextcolor);
			Surf_LabelText5 = DrawLabel("blubb", menusurface->GetFont(), markedtexcolor);
			break;	
		}
	}
}

void CMenu::LoadEngine(int UpDownSetting, int LeftRightSetting)
{
	switch(UpDownSetting)
	{
//--------------------------------------------------------------------------------------------------------
		case 1:
//--------------------------------------------------------------------------------------------------------
		{
			switch(LeftRightSetting)
			{
				case 1:
					{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
					}

				case 2:
					{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
					}
			}
			break;
		}

//--------------------------------------------------------------------------------------------------------
		case 2:
//--------------------------------------------------------------------------------------------------------
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}

				case 2:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}
			}
			break;
		}

//--------------------------------------------------------------------------------------------------------
		case 3:
//--------------------------------------------------------------------------------------------------------
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}

				case 2:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}
			}
			break;
		}

//--------------------------------------------------------------------------------------------------------
		case 4:
//--------------------------------------------------------------------------------------------------------
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}

				case 2:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), markedtexcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}
			}
			break;
		}

//--------------------------------------------------------------------------------------------------------
		case 5:
//--------------------------------------------------------------------------------------------------------
		{
			switch(LeftRightSetting)
			{
				case 1:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), markedtexcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), unmarkedtextcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}

				case 2:
				{
						Surf_LabelText1 = DrawLabel(LoadMenuItemLabelpointer1, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText2 = DrawLabel(LoadMenuItemLabelpointer2, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText3 = DrawLabel(LoadMenuItemLabelpointer3, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText4 = DrawLabel(LoadMenuItemLabelpointer4, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText5 = DrawLabel(LoadMenuItemLabelpointer5, menusurface->GetFont(), unmarkedtextcolor);

						Surf_LabelText6 = DrawLabel(LoadMenuItemLabelpointer6, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText7 = DrawLabel(LoadMenuItemLabelpointer7, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText8 = DrawLabel(LoadMenuItemLabelpointer8, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText9 = DrawLabel(LoadMenuItemLabelpointer9, menusurface->GetFont(), unmarkedtextcolor);
						Surf_LabelText10 = DrawLabel(LoadMenuItemLabelpointer10, menusurface->GetFont(), markedtexcolor);

						Surf_HelpLabelText = DrawLabel(LoadHelpLabelpointer, menusurface->GetHelpFont(), markedtexcolor);
						break;
				}
			}
			break;
		}
	}
}

SDL_Surface *CMenu::GetLabelText1() { return Surf_LabelText1; }
SDL_Surface *CMenu::GetLabelText2() { return Surf_LabelText2; }
SDL_Surface *CMenu::GetLabelText3() { return Surf_LabelText3; }
SDL_Surface *CMenu::GetLabelText4() { return Surf_LabelText4; }
SDL_Surface *CMenu::GetLabelText5() { return Surf_LabelText5; }
SDL_Surface *CMenu::GetLabelText6() { return Surf_LabelText6; }
SDL_Surface *CMenu::GetLabelText7() { return Surf_LabelText7; }
SDL_Surface *CMenu::GetLabelText8() { return Surf_LabelText8; }
SDL_Surface *CMenu::GetLabelText9() { return Surf_LabelText9; }
SDL_Surface *CMenu::GetLabelText10() { return Surf_LabelText10; }

SDL_Surface *CMenu::GetHelpLabelText() {return Surf_HelpLabelText;}
