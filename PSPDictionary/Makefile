TARGET = PSPDictionary
PSPSDK = C:/pspsdk/psp/sdk
PSPBIN= C:/pspsdk/bin

OBJS = main.o CSurface.o CMenuSurface.o CMenu.o CKeyboardSurface.o CKeyboard.o CAudio.o CAnimation.o
CFLAGS = -Wall -Wno-long-long -G0 -O2 -DJOY_$(JOY)
CFLAGS += $(shell $(PSPBIN)/sdl-config --cflags)
CXXFLAGS = $(DEFAULT_CFLAGS) -fno-exceptions -fno-rtti

LIBS =  -lSDL_mixer -lsmpeg -lstdc++ -lSDL_ttf -lfreetype -lvorbisidec -logg -lSDL_image -lpng -ljpeg -lz -lSDL $(shell $(PSPBIN)/sdl-config --libs) -lpspirkeyb -lpsppower

EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = Tobis Dictionary
PSP_EBOOT_ICON = ICON0.png
PSP_EBOOT_UNKPNG = PIC0.png
PSP_EBOOT_PIC1 = PIC1.png
PSP_EBOOT_SND0= SND0.at3

include $(PSPSDK)/lib/build.mak