#include "viewport.h"

void BlokViewportInit(Viewport *viewport, HINSTANCE instance)
{
    if (!viewport) { return; }

    BlokWindowInit(&viewport->window, instance);
}

void BlokViewportShow(Viewport *viewport, DWORD showFlag)
{
    if (!viewport) { return; }

    BlokWindowShow(&viewport->window, showFlag);
}

void BlokViewportFree(Viewport *viewport, HINSTANCE instance)
{
    if (!viewport) { return; }

    BlokWindowFree(&viewport->window, instance);
}