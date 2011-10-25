#ifndef SEEN_SP_SVG_VIEW_WIDGET_H
#define SEEN_SP_SVG_VIEW_WIDGET_H
/*
 * Authors:
 *   Lauris Kaplinski <lauris@kaplinski.com>
 *   Jon A. Cruz <jon@joncruz.org>
 *
 * Copyright (C) 2010 Authors
 * Copyright (C) 2001-2002 Lauris Kaplinski
 * Copyright (C) 2001 Ximian, Inc.
 *
 * Released under GNU GPL, read the file 'COPYING' for more information
 */

#include "ui/view/view-widget.h"

class SPDocument;
class SPSVGSPViewWidget;
class SPSVGSPViewWidgetClass;

#define SP_TYPE_SVG_VIEW_WIDGET (sp_svg_view_widget_get_type ())
#define SP_SVG_VIEW_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SP_TYPE_SVG_VIEW_WIDGET, SPSVGSPViewWidget))
#define SP_SVG_VIEW_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SP_TYPE_SVG_VIEW_WIDGET, SPSVGSPViewWidgetClass))
#define SP_IS_SVG_VIEW_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SP_TYPE_SVG_VIEW_WIDGET))
#define SP_IS_SVG_VIEW_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SP_TYPE_SVG_VIEW_WIDGET))

GType sp_svg_view_widget_get_type (void);

GtkWidget *sp_svg_view_widget_new (SPDocument *doc);

/**
 * An SPSVGSPViewWidget is an SVG view together with a canvas.
 */
struct SPSVGSPViewWidget {
public:
    SPViewWidget widget;

    GtkWidget *sw;
    GtkWidget *canvas;

    /// Whether to resize automatically
    bool resize;
    gdouble maxwidth, maxheight;

    // C++ Wrappers
    /// Flags the SPSVGSPViewWidget to have its size changed with Gtk.
    void setResize(bool resize, gdouble width, gdouble height);
};

/// The SPSVGSPViewWidget vtable.
struct SPSVGSPViewWidgetClass {
    SPViewWidgetClass parent_class;
};


#endif // SEEN_SP_SVG_VIEW_WIDGET_H
/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0)(case-label . +))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:fileencoding=utf-8:textwidth=99 :
