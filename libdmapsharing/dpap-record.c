/*
 *  Database record interface for DPAP sharing
 *
 *  Copyright (C) 2008 W. Michael Petullo <mike@flyn.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <libdmapsharing/dmap-record.h>
#include <libdmapsharing/dpap-record.h>

static gint dpap_record_init_count = 0;

static void
dpap_record_init (DPAPRecordIface * iface)
{
	static gboolean is_initialized = FALSE;

	dpap_record_init_count++;

	if (!is_initialized) {
		g_object_interface_install_property (iface,
						     g_param_spec_string
						     ("location",
						      "URI pointing to photo data",
						      "URI pointing to photo data",
						      NULL,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_pointer
						     ("hash",
						      "Hash of media file contents",
						      "Hash of media file contents",
						      G_PARAM_READWRITE));

		/* iTunes does not require to this to match the datatype for the image
		 * to be displayed (set to "JPEG" and served a PNG). I think this is
		 * for display to the user only.
		 */
		g_object_interface_install_property (iface,
						     g_param_spec_string
						     ("format",
						      "Photo data format",
						      "Photo data format",
						      NULL,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_string
						     ("aspect-ratio",
						      "Photo aspect ratio",
						      "Photo aspect ratio",
						      NULL,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_string
						     ("filename",
						      "Photo filename",
						      "Photo filename", NULL,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_string
						     ("comments",
						      "Photo comments",
						      "Photo comments", NULL,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_pointer
						     ("thumbnail",
						      "Photo thumbnail",
						      "Photo thumbnail",
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_int
						     ("rating",
						      "Photo rating",
						      "Photo rating", 0,
						      G_MAXINT, 0,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_int
						     ("creation-date",
						      "Photo creation date",
						      "Photo creation date",
						      0, G_MAXINT, 0,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_int
						     ("large-filesize",
						      "Photo large file size",
						      "Photo large file size",
						      0, G_MAXINT, 0,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_int
						     ("pixel-height",
						      "Photo pixel height",
						      "Photo pixel height", 0,
						      G_MAXINT, 0,
						      G_PARAM_READWRITE));

		g_object_interface_install_property (iface,
						     g_param_spec_int
						     ("pixel-width",
						      "Photo pixel width",
						      "Photo pixel width", 0,
						      G_MAXINT, 0,
						      G_PARAM_READWRITE));

		is_initialized = TRUE;
	}
}

static void
dpap_record_finalize (G_GNUC_UNUSED DPAPRecordIface * iface)
{
	dpap_record_init_count--;
}

/* FIXME: No G_DEFINE_INTERFACE available in GObject headers: */
GType
dpap_record_get_type (void)
{
	static GType object_type = 0;

	if (!object_type) {
		static const GTypeInfo object_info = {
			class_size:     sizeof (DPAPRecordIface),
			base_init:     (GBaseInitFunc) dpap_record_init,
			base_finalize: (GBaseFinalizeFunc) dpap_record_finalize
		};
		object_type =
			g_type_register_static (G_TYPE_INTERFACE,
						"DPAPRecord",
						&object_info, 0);
	}
	return object_type;
}

GInputStream *
dpap_record_read (DPAPRecord * record, GError ** err)
{
	return DPAP_RECORD_GET_INTERFACE (record)->read (record, err);
}
