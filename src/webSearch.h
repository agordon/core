/*
 Copyright (C) 2007 Christian Dywan <christian@twotoasts.de>

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 See the file COPYING for the full license text.
*/

#ifndef __WEBSEARCH_H__
#define __WEBSEARCH_H__ 1

#include "browser.h"

#include <gtk/gtk.h>
#include <libsexy/sexy.h>
#include <webkit.h>

// -- Types

typedef struct
{
    CBrowser* browser;
    GtkWidget* window;
    GtkWidget* treeview;
    GtkWidget* edit;
    GtkWidget* remove;
} CWebSearch;

enum
{
    ENGINES_COL_ENGINE,
    ENGINES_COL_N
};

// -- Declarations

void
update_searchEngine(guint, CBrowser*);

void
on_webSearch_icon_released(GtkWidget*, SexyIconEntryPosition*, gint, CBrowser*);

void
on_webSearch_engine_activate(GtkWidget*, CBrowser*);

void
on_webSearch_activate(GtkWidget*, CBrowser*);

GtkWidget*
webSearch_manageSearchEngines_dialog_new(CBrowser*);

gboolean
on_webSearch_key_down(GtkWidget*, GdkEventKey*, CBrowser*);

gboolean
on_webSearch_scroll(GtkWidget*, GdkEventScroll*, CBrowser*);

#endif /* !__WEBSEARCH_H__ */
