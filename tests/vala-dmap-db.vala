/*   FILE: vala-dmap-db.vala -- A DMAPDb implementation in Vala
 * AUTHOR: W. Michael Petullo <mike@flyn.org>
 *   DATE: 21 December 2010 
 *
 * Copyright (c) 2010 W. Michael Petullo <new@flyn.org>
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

private class ValaDMAPDb : GLib.Object, DMAP.Db {
	// A dumb database that stores everything in an array

	/* FIXME: What is with this unowned? */
	private Gee.ArrayList<unowned DMAP.Record> db = new Gee.ArrayList<unowned DMAP.Record> ();

	public uint add (DMAP.Record record) {
		db.add (((DMAP.Record) record));
		return db.size;
	}

	public uint add_path (string path) {
		GLib.error ("add_path not implemented");
	}

	public uint add_with_id (DMAP.Record record, uint id) {
		GLib.error ("add_with_id not implemented");
	}

	public int64 count () {
		return db.size;
	}

	public void @foreach (GLib.HFunc func) {
		int i;
		for (i = 0; i < db.size; i++) {
			// NOTE: iPhoto does not like a record ID of 0,
			// so we pretend to start with 1
			func ((i + 1).to_pointer (), db[i]);
		}
	}

	public unowned DMAP.Record lookup_by_id (uint id) {
		// NOTE: iPhoto does not like a record ID of 0,
		// so we pretend to start with 1
		return db.get ((int) id - 1);
	}


	public uint lookup_id_by_location (string location){
		GLib.error ("lookup_id_by_location not implemented");
	}
}
