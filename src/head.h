#ifndef HYBRID_HEAD_H
#define HYBRID_HEAD_H

#include <gtk/gtk.h>
#include "account.h"

typedef struct _HybridHead HybridHead;

struct _HybridHead {
	GtkWidget *cellview;
	GtkWidget *eventbox;
	GtkWidget *editbox;
	GtkWidget *edit_label;
	GtkWidget *edit_entry;
	GtkWidget *vbox;
	GtkTreeIter iter;

	/* which accout is being edited. */
	HybridAccount *edit_account;
	gint edit_state;
};

enum {
	HYBRID_HEAD_EDIT_NAME,
	HYBRID_HEAD_EDIT_STATUS
};

enum {
	HYBRID_HEAD_PIXBUF_COLUMN,
	HYBRID_HEAD_NAME_COLUMN,
	HYBRID_HEAD_STATUS_ICON_COLUMN,
	HYBRID_HEAD_COLUMNS
};

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Initialize the head panel.
 */
void hybrid_head_init();

/**
 * Bind an account's information to the head panel.
 *
 * @param account The account.
 */
void hybrid_head_bind_to_account(HybridAccount *account);

#ifdef __cplusplus
}
#endif

#endif
