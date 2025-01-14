/* dacplisten.c generated by valac 0.56.9, the Vala compiler
 * generated from dacplisten.vala, do not modify */

/*   FILE: dacplisten.vala -- Listen to DACP remotes
 * AUTHOR: W. Michael Petullo <mike@flyn.org>
 *   DATE: 06 January 2011 
 *
 * Copyright (c) 2011 W. Michael Petullo <new@flyn.org>
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <glib-object.h>
#include <libdmapsharing/dmap.h>
#include <glib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_VALA_DACP_PLAYER (vala_dacp_player_get_type ())
#define VALA_DACP_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DACP_PLAYER, ValaDacpPlayer))
#define VALA_DACP_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DACP_PLAYER, ValaDacpPlayerClass))
#define IS_VALA_DACP_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DACP_PLAYER))
#define IS_VALA_DACP_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DACP_PLAYER))
#define VALA_DACP_PLAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DACP_PLAYER, ValaDacpPlayerClass))

typedef struct _ValaDacpPlayer ValaDacpPlayer;
typedef struct _ValaDacpPlayerClass ValaDacpPlayerClass;
typedef struct _ValaDacpPlayerPrivate ValaDacpPlayerPrivate;
enum  {
	VALA_DACP_PLAYER_0_PROPERTY,
	VALA_DACP_PLAYER_PLAYING_TIME_PROPERTY,
	VALA_DACP_PLAYER_SHUFFLE_STATE_PROPERTY,
	VALA_DACP_PLAYER_REPEAT_STATE_PROPERTY,
	VALA_DACP_PLAYER_PLAY_STATE_PROPERTY,
	VALA_DACP_PLAYER_VOLUME_PROPERTY,
	VALA_DACP_PLAYER_NUM_PROPERTIES
};
static GParamSpec* vala_dacp_player_properties[VALA_DACP_PLAYER_NUM_PROPERTIES];

#define TYPE_DACP_LISTENER (dacp_listener_get_type ())
#define DACP_LISTENER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DACP_LISTENER, DacpListener))
#define DACP_LISTENER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DACP_LISTENER, DacpListenerClass))
#define IS_DACP_LISTENER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DACP_LISTENER))
#define IS_DACP_LISTENER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DACP_LISTENER))
#define DACP_LISTENER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DACP_LISTENER, DacpListenerClass))

typedef struct _DacpListener DacpListener;
typedef struct _DacpListenerClass DacpListenerClass;
typedef struct _DacpListenerPrivate DacpListenerPrivate;
enum  {
	DACP_LISTENER_0_PROPERTY,
	DACP_LISTENER_NUM_PROPERTIES
};
static GParamSpec* dacp_listener_properties[DACP_LISTENER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_VALA_DMAP_DB (vala_dmap_db_get_type ())
#define VALA_DMAP_DB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DMAP_DB, ValaDmapDb))
#define VALA_DMAP_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DMAP_DB, ValaDmapDbClass))
#define IS_VALA_DMAP_DB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DMAP_DB))
#define IS_VALA_DMAP_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DMAP_DB))
#define VALA_DMAP_DB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DMAP_DB, ValaDmapDbClass))

typedef struct _ValaDmapDb ValaDmapDb;
typedef struct _ValaDmapDbClass ValaDmapDbClass;

#define TYPE_VALA_DMAP_CONTAINER_DB (vala_dmap_container_db_get_type ())
#define VALA_DMAP_CONTAINER_DB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DMAP_CONTAINER_DB, ValaDmapContainerDb))
#define VALA_DMAP_CONTAINER_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DMAP_CONTAINER_DB, ValaDmapContainerDbClass))
#define IS_VALA_DMAP_CONTAINER_DB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DMAP_CONTAINER_DB))
#define IS_VALA_DMAP_CONTAINER_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DMAP_CONTAINER_DB))
#define VALA_DMAP_CONTAINER_DB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DMAP_CONTAINER_DB, ValaDmapContainerDbClass))

typedef struct _ValaDmapContainerDb ValaDmapContainerDb;
typedef struct _ValaDmapContainerDbClass ValaDmapContainerDbClass;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))

struct _ValaDacpPlayer {
	GObject parent_instance;
	ValaDacpPlayerPrivate * priv;
};

struct _ValaDacpPlayerClass {
	GObjectClass parent_class;
	gboolean (*get_shuffle_state) (ValaDacpPlayer* self);
	void (*set_shuffle_state) (ValaDacpPlayer* self, gboolean value);
	DmapControlRepeatState (*get_repeat_state) (ValaDacpPlayer* self);
	void (*set_repeat_state) (ValaDacpPlayer* self, DmapControlRepeatState value);
	DmapControlPlayState (*get_play_state) (ValaDacpPlayer* self);
	void (*set_play_state) (ValaDacpPlayer* self, DmapControlPlayState value);
	gulong (*get_volume) (ValaDacpPlayer* self);
	void (*set_volume) (ValaDacpPlayer* self, gulong value);
};

struct _ValaDacpPlayerPrivate {
	gulong _playing_time;
	gboolean _shuffle_state;
	DmapControlRepeatState _repeat_state;
	DmapControlPlayState _play_state;
	gulong _volume;
};

struct _DacpListener {
	GObject parent_instance;
	DacpListenerPrivate * priv;
};

struct _DacpListenerClass {
	GObjectClass parent_class;
};

struct _DacpListenerPrivate {
	DmapDb* db;
	DmapContainerDb* container_db;
	DmapControlPlayer* player;
	DmapControlShare* share;
};

static gint ValaDacpPlayer_private_offset;
static gpointer vala_dacp_player_parent_class = NULL;
static DmapControlPlayerInterface * vala_dacp_player_dmap_control_player_parent_iface = NULL;
static gint DacpListener_private_offset;
static gpointer dacp_listener_parent_class = NULL;

VALA_EXTERN GType vala_dacp_player_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaDacpPlayer, g_object_unref)
VALA_EXTERN gboolean vala_dacp_player_get_shuffle_state (ValaDacpPlayer* self);
VALA_EXTERN void vala_dacp_player_set_shuffle_state (ValaDacpPlayer* self,
                                         gboolean value);
VALA_EXTERN DmapControlRepeatState vala_dacp_player_get_repeat_state (ValaDacpPlayer* self);
VALA_EXTERN void vala_dacp_player_set_repeat_state (ValaDacpPlayer* self,
                                        DmapControlRepeatState value);
VALA_EXTERN DmapControlPlayState vala_dacp_player_get_play_state (ValaDacpPlayer* self);
VALA_EXTERN void vala_dacp_player_set_play_state (ValaDacpPlayer* self,
                                      DmapControlPlayState value);
VALA_EXTERN gulong vala_dacp_player_get_volume (ValaDacpPlayer* self);
VALA_EXTERN void vala_dacp_player_set_volume (ValaDacpPlayer* self,
                                  gulong value);
static DmapAvRecord* vala_dacp_player_real_now_playing_record (DmapControlPlayer* base);
static const gchar* vala_dacp_player_real_now_playing_artwork (DmapControlPlayer* base,
                                                        guint width,
                                                        guint height);
static void vala_dacp_player_real_play_pause (DmapControlPlayer* base);
static void vala_dacp_player_real_pause (DmapControlPlayer* base);
static void vala_dacp_player_real_next_item (DmapControlPlayer* base);
static void vala_dacp_player_real_prev_item (DmapControlPlayer* base);
static void vala_dacp_player_real_cue_clear (DmapControlPlayer* base);
static void vala_dacp_player_real_cue_play (DmapControlPlayer* base,
                                     GList* records,
                                     guint index);
VALA_EXTERN ValaDacpPlayer* vala_dacp_player_new (void);
VALA_EXTERN ValaDacpPlayer* vala_dacp_player_construct (GType object_type);
static void vala_dacp_player_finalize (GObject * obj);
static GType vala_dacp_player_get_type_once (void);
static void _vala_vala_dacp_player_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec);
static void _vala_vala_dacp_player_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec);
VALA_EXTERN GType dacp_listener_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DacpListener, g_object_unref)
VALA_EXTERN DacpListener* dacp_listener_new (void);
VALA_EXTERN DacpListener* dacp_listener_construct (GType object_type);
VALA_EXTERN ValaDmapDb* vala_dmap_db_new (void);
VALA_EXTERN ValaDmapDb* vala_dmap_db_construct (GType object_type);
VALA_EXTERN GType vala_dmap_db_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaDmapDb, g_object_unref)
VALA_EXTERN ValaDmapContainerDb* vala_dmap_container_db_new (void);
VALA_EXTERN ValaDmapContainerDb* vala_dmap_container_db_construct (GType object_type);
VALA_EXTERN GType vala_dmap_container_db_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaDmapContainerDb, g_object_unref)
static void __lambda4_ (DacpListener* self,
                 const gchar* service_name,
                 const gchar* display_name);
static void ___lambda4__dmap_control_share_remote_found (DmapControlShare* _sender,
                                                  const gchar* service_name,
                                                  const gchar* remote_name,
                                                  gpointer self);
static void __lambda5_ (DacpListener* self,
                 const gchar* guid);
static void ___lambda5__dmap_control_share_add_guid (DmapControlShare* _sender,
                                              const gchar* guid,
                                              gpointer self);
static void dacp_listener_finalize (GObject * obj);
static GType dacp_listener_get_type_once (void);
static gint _vala_main (gchar** args,
                 gint args_length1);

static inline gpointer
vala_dacp_player_get_instance_private (ValaDacpPlayer* self)
{
	return G_STRUCT_MEMBER_P (self, ValaDacpPlayer_private_offset);
}

static DmapAvRecord*
vala_dacp_player_real_now_playing_record (DmapControlPlayer* base)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	DmapAvRecord* result;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Now playing record request received\n");
	result = NULL;
	return result;
}

static const gchar*
vala_dacp_player_real_now_playing_artwork (DmapControlPlayer* base,
                                           guint width,
                                           guint height)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	const gchar* result;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Now playing artwork request received\n");
	result = NULL;
	return result;
}

static void
vala_dacp_player_real_play_pause (DmapControlPlayer* base)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Play/pause request received\n");
}

static void
vala_dacp_player_real_pause (DmapControlPlayer* base)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Pause request received\n");
}

static void
vala_dacp_player_real_next_item (DmapControlPlayer* base)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Next item request received\n");
}

static void
vala_dacp_player_real_prev_item (DmapControlPlayer* base)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Previous item request received\n");
}

static void
vala_dacp_player_real_cue_clear (DmapControlPlayer* base)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Cue clear request received\n");
}

static void
vala_dacp_player_real_cue_play (DmapControlPlayer* base,
                                GList* records,
                                guint index)
{
	ValaDacpPlayer * self;
	FILE* _tmp0_;
	self = (ValaDacpPlayer*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Cue play request received\n");
}

ValaDacpPlayer*
vala_dacp_player_construct (GType object_type)
{
	ValaDacpPlayer * self = NULL;
	self = (ValaDacpPlayer*) g_object_new (object_type, NULL);
	return self;
}

ValaDacpPlayer*
vala_dacp_player_new (void)
{
	return vala_dacp_player_construct (TYPE_VALA_DACP_PLAYER);
}

static gulong
vala_dacp_player_real_get_playing_time (DmapControlPlayer* base)
{
	gulong result;
	ValaDacpPlayer* self;
	self = (ValaDacpPlayer*) base;
	result = self->priv->_playing_time;
	return result;
}

static void
vala_dacp_player_real_set_playing_time (DmapControlPlayer* base,
                                        gulong value)
{
	ValaDacpPlayer* self;
	self = (ValaDacpPlayer*) base;
	self->priv->_playing_time = value;
	g_object_notify_by_pspec ((GObject *) self, vala_dacp_player_properties[VALA_DACP_PLAYER_PLAYING_TIME_PROPERTY]);
}

gboolean
vala_dacp_player_get_shuffle_state (ValaDacpPlayer* self)
{
	ValaDacpPlayerClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->get_shuffle_state) {
		return _klass_->get_shuffle_state (self);
	}
	return FALSE;
}

static gboolean
vala_dacp_player_real_get_shuffle_state (ValaDacpPlayer* base)
{
	gboolean result;
	ValaDacpPlayer* self;
	self = base;
	result = self->priv->_shuffle_state;
	return result;
}

void
vala_dacp_player_set_shuffle_state (ValaDacpPlayer* self,
                                    gboolean value)
{
	ValaDacpPlayerClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->set_shuffle_state) {
		_klass_->set_shuffle_state (self, value);
	}
}

static void
vala_dacp_player_real_set_shuffle_state (ValaDacpPlayer* base,
                                         gboolean value)
{
	ValaDacpPlayer* self;
	self = base;
	self->priv->_shuffle_state = value;
	g_object_notify_by_pspec ((GObject *) self, vala_dacp_player_properties[VALA_DACP_PLAYER_SHUFFLE_STATE_PROPERTY]);
}

DmapControlRepeatState
vala_dacp_player_get_repeat_state (ValaDacpPlayer* self)
{
	ValaDacpPlayerClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->get_repeat_state) {
		return _klass_->get_repeat_state (self);
	}
	return 0;
}

static DmapControlRepeatState
vala_dacp_player_real_get_repeat_state (ValaDacpPlayer* base)
{
	DmapControlRepeatState result;
	ValaDacpPlayer* self;
	self = base;
	result = self->priv->_repeat_state;
	return result;
}

void
vala_dacp_player_set_repeat_state (ValaDacpPlayer* self,
                                   DmapControlRepeatState value)
{
	ValaDacpPlayerClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->set_repeat_state) {
		_klass_->set_repeat_state (self, value);
	}
}

static void
vala_dacp_player_real_set_repeat_state (ValaDacpPlayer* base,
                                        DmapControlRepeatState value)
{
	ValaDacpPlayer* self;
	self = base;
	self->priv->_repeat_state = value;
	g_object_notify_by_pspec ((GObject *) self, vala_dacp_player_properties[VALA_DACP_PLAYER_REPEAT_STATE_PROPERTY]);
}

DmapControlPlayState
vala_dacp_player_get_play_state (ValaDacpPlayer* self)
{
	ValaDacpPlayerClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->get_play_state) {
		return _klass_->get_play_state (self);
	}
	return 0;
}

static DmapControlPlayState
vala_dacp_player_real_get_play_state (ValaDacpPlayer* base)
{
	DmapControlPlayState result;
	ValaDacpPlayer* self;
	self = base;
	result = self->priv->_play_state;
	return result;
}

void
vala_dacp_player_set_play_state (ValaDacpPlayer* self,
                                 DmapControlPlayState value)
{
	ValaDacpPlayerClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->set_play_state) {
		_klass_->set_play_state (self, value);
	}
}

static void
vala_dacp_player_real_set_play_state (ValaDacpPlayer* base,
                                      DmapControlPlayState value)
{
	ValaDacpPlayer* self;
	self = base;
	self->priv->_play_state = value;
	g_object_notify_by_pspec ((GObject *) self, vala_dacp_player_properties[VALA_DACP_PLAYER_PLAY_STATE_PROPERTY]);
}

gulong
vala_dacp_player_get_volume (ValaDacpPlayer* self)
{
	ValaDacpPlayerClass* _klass_;
	g_return_val_if_fail (self != NULL, 0UL);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->get_volume) {
		return _klass_->get_volume (self);
	}
	return 0UL;
}

static gulong
vala_dacp_player_real_get_volume (ValaDacpPlayer* base)
{
	gulong result;
	ValaDacpPlayer* self;
	self = base;
	result = self->priv->_volume;
	return result;
}

void
vala_dacp_player_set_volume (ValaDacpPlayer* self,
                             gulong value)
{
	ValaDacpPlayerClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = VALA_DACP_PLAYER_GET_CLASS (self);
	if (_klass_->set_volume) {
		_klass_->set_volume (self, value);
	}
}

static void
vala_dacp_player_real_set_volume (ValaDacpPlayer* base,
                                  gulong value)
{
	ValaDacpPlayer* self;
	self = base;
	self->priv->_volume = value;
	g_object_notify_by_pspec ((GObject *) self, vala_dacp_player_properties[VALA_DACP_PLAYER_VOLUME_PROPERTY]);
}

static void
vala_dacp_player_class_init (ValaDacpPlayerClass * klass,
                             gpointer klass_data)
{
	vala_dacp_player_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValaDacpPlayer_private_offset);
	VALA_DACP_PLAYER_CLASS (klass)->get_shuffle_state = (gboolean (*) (ValaDacpPlayer*)) vala_dacp_player_real_get_shuffle_state;
	VALA_DACP_PLAYER_CLASS (klass)->set_shuffle_state = (void (*) (ValaDacpPlayer*, gboolean)) vala_dacp_player_real_set_shuffle_state;
	VALA_DACP_PLAYER_CLASS (klass)->get_repeat_state = (DmapControlRepeatState (*) (ValaDacpPlayer*)) vala_dacp_player_real_get_repeat_state;
	VALA_DACP_PLAYER_CLASS (klass)->set_repeat_state = (void (*) (ValaDacpPlayer*, DmapControlRepeatState)) vala_dacp_player_real_set_repeat_state;
	VALA_DACP_PLAYER_CLASS (klass)->get_play_state = (DmapControlPlayState (*) (ValaDacpPlayer*)) vala_dacp_player_real_get_play_state;
	VALA_DACP_PLAYER_CLASS (klass)->set_play_state = (void (*) (ValaDacpPlayer*, DmapControlPlayState)) vala_dacp_player_real_set_play_state;
	VALA_DACP_PLAYER_CLASS (klass)->get_volume = (gulong (*) (ValaDacpPlayer*)) vala_dacp_player_real_get_volume;
	VALA_DACP_PLAYER_CLASS (klass)->set_volume = (void (*) (ValaDacpPlayer*, gulong)) vala_dacp_player_real_set_volume;
	G_OBJECT_CLASS (klass)->get_property = _vala_vala_dacp_player_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_vala_dacp_player_set_property;
	G_OBJECT_CLASS (klass)->finalize = vala_dacp_player_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DACP_PLAYER_PLAYING_TIME_PROPERTY, vala_dacp_player_properties[VALA_DACP_PLAYER_PLAYING_TIME_PROPERTY] = g_param_spec_ulong ("playing-time", "playing-time", "playing-time", 0, G_MAXULONG, 0UL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DACP_PLAYER_SHUFFLE_STATE_PROPERTY, vala_dacp_player_properties[VALA_DACP_PLAYER_SHUFFLE_STATE_PROPERTY] = g_param_spec_boolean ("shuffle-state", "shuffle-state", "shuffle-state", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DACP_PLAYER_REPEAT_STATE_PROPERTY, vala_dacp_player_properties[VALA_DACP_PLAYER_REPEAT_STATE_PROPERTY] = g_param_spec_enum ("repeat-state", "repeat-state", "repeat-state", dmap_control_repeat_state_get_type (), 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DACP_PLAYER_PLAY_STATE_PROPERTY, vala_dacp_player_properties[VALA_DACP_PLAYER_PLAY_STATE_PROPERTY] = g_param_spec_enum ("play-state", "play-state", "play-state", dmap_control_play_state_get_type (), 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DACP_PLAYER_VOLUME_PROPERTY, vala_dacp_player_properties[VALA_DACP_PLAYER_VOLUME_PROPERTY] = g_param_spec_ulong ("volume", "volume", "volume", 0, G_MAXULONG, 0UL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

static void
vala_dacp_player_dmap_control_player_interface_init (DmapControlPlayerInterface * iface,
                                                     gpointer iface_data)
{
	vala_dacp_player_dmap_control_player_parent_iface = g_type_interface_peek_parent (iface);
	iface->now_playing_record = (DmapAvRecord* (*) (DmapControlPlayer*)) vala_dacp_player_real_now_playing_record;
	iface->now_playing_artwork = (const gchar* (*) (DmapControlPlayer*, guint, guint)) vala_dacp_player_real_now_playing_artwork;
	iface->play_pause = (void (*) (DmapControlPlayer*)) vala_dacp_player_real_play_pause;
	iface->pause = (void (*) (DmapControlPlayer*)) vala_dacp_player_real_pause;
	iface->next_item = (void (*) (DmapControlPlayer*)) vala_dacp_player_real_next_item;
	iface->prev_item = (void (*) (DmapControlPlayer*)) vala_dacp_player_real_prev_item;
	iface->cue_clear = (void (*) (DmapControlPlayer*)) vala_dacp_player_real_cue_clear;
	iface->cue_play = (void (*) (DmapControlPlayer*, GList*, guint)) vala_dacp_player_real_cue_play;
}

static void
vala_dacp_player_instance_init (ValaDacpPlayer * self,
                                gpointer klass)
{
	self->priv = vala_dacp_player_get_instance_private (self);
}

static void
vala_dacp_player_finalize (GObject * obj)
{
	ValaDacpPlayer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_VALA_DACP_PLAYER, ValaDacpPlayer);
	G_OBJECT_CLASS (vala_dacp_player_parent_class)->finalize (obj);
}

static GType
vala_dacp_player_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaDacpPlayerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dacp_player_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDacpPlayer), 0, (GInstanceInitFunc) vala_dacp_player_instance_init, NULL };
	static const GInterfaceInfo dmap_control_player_info = { (GInterfaceInitFunc) vala_dacp_player_dmap_control_player_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType vala_dacp_player_type_id;
	vala_dacp_player_type_id = g_type_register_static (G_TYPE_OBJECT, "ValaDacpPlayer", &g_define_type_info, 0);
	g_type_add_interface_static (vala_dacp_player_type_id, dmap_control_player_get_type (), &dmap_control_player_info);
	ValaDacpPlayer_private_offset = g_type_add_instance_private (vala_dacp_player_type_id, sizeof (ValaDacpPlayerPrivate));
	return vala_dacp_player_type_id;
}

GType
vala_dacp_player_get_type (void)
{
	static volatile gsize vala_dacp_player_type_id__once = 0;
	if (g_once_init_enter (&vala_dacp_player_type_id__once)) {
		GType vala_dacp_player_type_id;
		vala_dacp_player_type_id = vala_dacp_player_get_type_once ();
		g_once_init_leave (&vala_dacp_player_type_id__once, vala_dacp_player_type_id);
	}
	return vala_dacp_player_type_id__once;
}

static void
_vala_vala_dacp_player_get_property (GObject * object,
                                     guint property_id,
                                     GValue * value,
                                     GParamSpec * pspec)
{
	ValaDacpPlayer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_VALA_DACP_PLAYER, ValaDacpPlayer);
	switch (property_id) {
		case VALA_DACP_PLAYER_PLAYING_TIME_PROPERTY:
		g_value_set_ulong (value, vala_dacp_player_real_get_playing_time ((DmapControlPlayer*) self));
		break;
		case VALA_DACP_PLAYER_SHUFFLE_STATE_PROPERTY:
		g_value_set_boolean (value, vala_dacp_player_get_shuffle_state (self));
		break;
		case VALA_DACP_PLAYER_REPEAT_STATE_PROPERTY:
		g_value_set_enum (value, vala_dacp_player_get_repeat_state (self));
		break;
		case VALA_DACP_PLAYER_PLAY_STATE_PROPERTY:
		g_value_set_enum (value, vala_dacp_player_get_play_state (self));
		break;
		case VALA_DACP_PLAYER_VOLUME_PROPERTY:
		g_value_set_ulong (value, vala_dacp_player_get_volume (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_vala_dacp_player_set_property (GObject * object,
                                     guint property_id,
                                     const GValue * value,
                                     GParamSpec * pspec)
{
	ValaDacpPlayer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_VALA_DACP_PLAYER, ValaDacpPlayer);
	switch (property_id) {
		case VALA_DACP_PLAYER_PLAYING_TIME_PROPERTY:
		vala_dacp_player_real_set_playing_time ((DmapControlPlayer*) self, g_value_get_ulong (value));
		break;
		case VALA_DACP_PLAYER_SHUFFLE_STATE_PROPERTY:
		vala_dacp_player_set_shuffle_state (self, g_value_get_boolean (value));
		break;
		case VALA_DACP_PLAYER_REPEAT_STATE_PROPERTY:
		vala_dacp_player_set_repeat_state (self, g_value_get_enum (value));
		break;
		case VALA_DACP_PLAYER_PLAY_STATE_PROPERTY:
		vala_dacp_player_set_play_state (self, g_value_get_enum (value));
		break;
		case VALA_DACP_PLAYER_VOLUME_PROPERTY:
		vala_dacp_player_set_volume (self, g_value_get_ulong (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static inline gpointer
dacp_listener_get_instance_private (DacpListener* self)
{
	return G_STRUCT_MEMBER_P (self, DacpListener_private_offset);
}

static void
__lambda4_ (DacpListener* self,
            const gchar* service_name,
            const gchar* display_name)
{
	FILE* _tmp0_;
	g_return_if_fail (service_name != NULL);
	g_return_if_fail (display_name != NULL);
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Found remote: %s, %s\n", service_name, display_name);
}

static void
___lambda4__dmap_control_share_remote_found (DmapControlShare* _sender,
                                             const gchar* service_name,
                                             const gchar* remote_name,
                                             gpointer self)
{
	__lambda4_ ((DacpListener*) self, service_name, remote_name);
}

static void
__lambda5_ (DacpListener* self,
            const gchar* guid)
{
	FILE* _tmp0_;
	g_return_if_fail (guid != NULL);
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Add GUID request received\n");
}

static void
___lambda5__dmap_control_share_add_guid (DmapControlShare* _sender,
                                         const gchar* guid,
                                         gpointer self)
{
	__lambda5_ ((DacpListener*) self, guid);
}

DacpListener*
dacp_listener_construct (GType object_type)
{
	DacpListener * self = NULL;
	ValaDmapDb* _tmp0_;
	ValaDmapContainerDb* _tmp1_;
	ValaDacpPlayer* _tmp2_;
	DmapControlPlayer* _tmp3_;
	DmapDb* _tmp4_;
	DmapContainerDb* _tmp5_;
	DmapControlShare* _tmp6_;
	DmapControlShare* _tmp7_;
	DmapControlShare* _tmp8_;
	DmapControlShare* _tmp9_;
	GError* _inner_error0_ = NULL;
	self = (DacpListener*) g_object_new (object_type, NULL);
	_tmp0_ = vala_dmap_db_new ();
	_g_object_unref0 (self->priv->db);
	self->priv->db = (DmapDb*) _tmp0_;
	_tmp1_ = vala_dmap_container_db_new ();
	_g_object_unref0 (self->priv->container_db);
	self->priv->container_db = (DmapContainerDb*) _tmp1_;
	_tmp2_ = vala_dacp_player_new ();
	_g_object_unref0 (self->priv->player);
	self->priv->player = (DmapControlPlayer*) _tmp2_;
	_tmp3_ = self->priv->player;
	_tmp4_ = self->priv->db;
	_tmp5_ = self->priv->container_db;
	_tmp6_ = dmap_control_share_new ("dacplisten", _tmp3_, _tmp4_, _tmp5_);
	_g_object_unref0 (self->priv->share);
	self->priv->share = _tmp6_;
	_tmp7_ = self->priv->share;
	g_signal_connect_object (_tmp7_, "remote-found", (GCallback) ___lambda4__dmap_control_share_remote_found, self, 0);
	_tmp8_ = self->priv->share;
	g_signal_connect_object (_tmp8_, "add-guid", (GCallback) ___lambda5__dmap_control_share_add_guid, self, 0);
	_tmp9_ = self->priv->share;
	dmap_control_share_start_lookup (_tmp9_, &_inner_error0_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return NULL;
	}
	return self;
}

DacpListener*
dacp_listener_new (void)
{
	return dacp_listener_construct (TYPE_DACP_LISTENER);
}

static void
dacp_listener_class_init (DacpListenerClass * klass,
                          gpointer klass_data)
{
	dacp_listener_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &DacpListener_private_offset);
	G_OBJECT_CLASS (klass)->finalize = dacp_listener_finalize;
}

static void
dacp_listener_instance_init (DacpListener * self,
                             gpointer klass)
{
	self->priv = dacp_listener_get_instance_private (self);
}

static void
dacp_listener_finalize (GObject * obj)
{
	DacpListener * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_DACP_LISTENER, DacpListener);
	_g_object_unref0 (self->priv->db);
	_g_object_unref0 (self->priv->container_db);
	_g_object_unref0 (self->priv->player);
	_g_object_unref0 (self->priv->share);
	G_OBJECT_CLASS (dacp_listener_parent_class)->finalize (obj);
}

static GType
dacp_listener_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DacpListenerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) dacp_listener_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DacpListener), 0, (GInstanceInitFunc) dacp_listener_instance_init, NULL };
	GType dacp_listener_type_id;
	dacp_listener_type_id = g_type_register_static (G_TYPE_OBJECT, "DacpListener", &g_define_type_info, 0);
	DacpListener_private_offset = g_type_add_instance_private (dacp_listener_type_id, sizeof (DacpListenerPrivate));
	return dacp_listener_type_id;
}

GType
dacp_listener_get_type (void)
{
	static volatile gsize dacp_listener_type_id__once = 0;
	if (g_once_init_enter (&dacp_listener_type_id__once)) {
		GType dacp_listener_type_id;
		dacp_listener_type_id = dacp_listener_get_type_once ();
		g_once_init_leave (&dacp_listener_type_id__once, dacp_listener_type_id);
	}
	return dacp_listener_type_id__once;
}

static gint
_vala_main (gchar** args,
            gint args_length1)
{
	GMainLoop* loop = NULL;
	GMainLoop* _tmp0_;
	DacpListener* dacplistener = NULL;
	DacpListener* _tmp1_;
	gint result;
	_tmp0_ = g_main_loop_new (NULL, FALSE);
	loop = _tmp0_;
	_tmp1_ = dacp_listener_new ();
	dacplistener = _tmp1_;
	g_main_loop_run (loop);
	result = 0;
	_g_object_unref0 (dacplistener);
	_g_main_loop_unref0 (loop);
	return result;
}

int
main (int argc,
      char ** argv)
{
	return _vala_main (argv, argc);
}

