/*
  Copyright (c) 2007-2010 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/

#ifndef _PROTOCOL_COMMON_H
#define _PROTOCOL_COMMON_H

enum gf_fop_procnum {
        GFS3_OP_NULL,    /* 0 */
        GFS3_OP_STAT,
        GFS3_OP_READLINK,
        GFS3_OP_MKNOD,
        GFS3_OP_MKDIR,
        GFS3_OP_UNLINK,
        GFS3_OP_RMDIR,
        GFS3_OP_SYMLINK,
        GFS3_OP_RENAME,
        GFS3_OP_LINK,
        GFS3_OP_TRUNCATE,
        GFS3_OP_OPEN,
        GFS3_OP_READ,
        GFS3_OP_WRITE,
        GFS3_OP_STATFS,
        GFS3_OP_FLUSH,
        GFS3_OP_FSYNC,
        GFS3_OP_SETXATTR,
        GFS3_OP_GETXATTR,
        GFS3_OP_REMOVEXATTR,
        GFS3_OP_OPENDIR,
        GFS3_OP_FSYNCDIR,
        GFS3_OP_ACCESS,
        GFS3_OP_CREATE,
        GFS3_OP_FTRUNCATE,
        GFS3_OP_FSTAT,
        GFS3_OP_LK,
        GFS3_OP_LOOKUP,
        GFS3_OP_READDIR,
        GFS3_OP_INODELK,
        GFS3_OP_FINODELK,
	GFS3_OP_ENTRYLK,
	GFS3_OP_FENTRYLK,
        GFS3_OP_XATTROP,
        GFS3_OP_FXATTROP,
        GFS3_OP_FGETXATTR,
        GFS3_OP_FSETXATTR,
        GFS3_OP_RCHECKSUM,
        GFS3_OP_SETATTR,
        GFS3_OP_FSETATTR,
        GFS3_OP_READDIRP,
        GFS3_OP_RELEASE,
        GFS3_OP_RELEASEDIR,
        GFS3_OP_MAXVALUE,
} ;

enum gf_handshake_procnum {
        GF_HNDSK_NULL,
        GF_HNDSK_SETVOLUME,
        GF_HNDSK_GETSPEC,
        GF_HNDSK_PING,
        GF_HNDSK_MAXVALUE,
};

enum gf_mgmt_procnum_ {
        GD_MGMT_NULL,    /* 0 */
        GD_MGMT_PROBE_QUERY,
        GD_MGMT_FRIEND_ADD,
        GD_MGMT_CLUSTER_LOCK,
        GD_MGMT_CLUSTER_UNLOCK,
        GD_MGMT_STAGE_OP,
        GD_MGMT_COMMIT_OP,
        GD_MGMT_FRIEND_REMOVE,
        GD_MGMT_FRIEND_UPDATE,
        GD_MGMT_CLI_PROBE,
        GD_MGMT_CLI_DEPROBE,
        GD_MGMT_CLI_LIST_FRIENDS,
        GD_MGMT_CLI_CREATE_VOLUME,
        GD_MGMT_CLI_GET_VOLUME,
        GD_MGMT_CLI_DELETE_VOLUME,
        GD_MGMT_CLI_START_VOLUME,
        GD_MGMT_CLI_STOP_VOLUME,
        GD_MGMT_CLI_RENAME_VOLUME,
        GD_MGMT_CLI_DEFRAG_VOLUME,
        GD_MGMT_CLI_SET_VOLUME,
        GD_MGMT_CLI_ADD_BRICK,
        GD_MGMT_CLI_REMOVE_BRICK,
        GD_MGMT_CLI_REPLACE_BRICK,
        GD_MGMT_MAXVALUE,
};

typedef enum gf_mgmt_procnum_ gf_mgmt_procnum;

enum gf_cli_procnum {
        GF1_CLI_NULL = GD_MGMT_MAXVALUE+1,    /* 0 */
        GF1_CLI_PROBE,
        GF1_CLI_DEPROBE,
        GF1_CLI_LIST_FRIENDS,
        GF1_CLI_CREATE_VOLUME,
        GF1_CLI_GET_VOLUME,
        GF1_CLI_DELETE_VOLUME,
        GF1_CLI_START_VOLUME,
        GF1_CLI_STOP_VOLUME,
        GF1_CLI_RENAME_VOLUME,
        GF1_CLI_DEFRAG_VOLUME,
        GF1_CLI_SET_VOLUME,
        GF1_CLI_ADD_BRICK,
        GF1_CLI_REMOVE_BRICK,
        GF1_CLI_REPLACE_BRICK,
        GF1_CLI_MAXVALUE,
};

#define GLUSTER3_1_FOP_PROGRAM   1298437 /* Completely random */
#define GLUSTER3_1_FOP_VERSION   310 /* 3.1.0 */
#define GLUSTER3_1_FOP_PROCCNT   GFS3_OP_MAXVALUE

#define GLUSTERD1_MGMT_PROGRAM   1298433 /* Completely random */
#define GLUSTERD1_MGMT_VERSION   1   /* 0.0.1 */
#define GLUSTERD1_MGMT_PROCCNT   GD_MGMT_MAXVALUE

#define GLUSTER3_1_CLI_PROGRAM   1298433 /* Completely random */
#define GLUSTER3_1_CLI_VERSION   1   /* 0.0.1 */
#define GLUSTER3_1_CLI_PROCCNT   GF1_CLI_MAXVALUE

#define GLUSTER_HNDSK_PROGRAM   14398633 /* Completely random */
#define GLUSTER_HNDSK_VERSION   1   /* 0.0.1 */

#endif /* !_PROTOCOL_COMMON_H */
