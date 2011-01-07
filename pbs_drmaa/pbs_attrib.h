/* $Id: pbs_attrib.h 256 2010-08-10 16:31:35Z mamonski $ */
/*
 *  FedStage DRMAA for PBS Pro
 *  Copyright (C) 2006-2009  FedStage Systems
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PBS_DRMAA__PBS_ATTRIB_H
#define __PBS_DRMAA__PBS_ATTRIB_H

#ifdef HAVE_CONFIG_H
#	include <config.h>
#endif

#include <drmaa_utils/common.h>

fsd_template_t *pbsdrmaa_pbs_template_new(void);
int pbsdrmaa_pbs_attrib_by_name( const char *name );

#define PBSDRMAA_EXECUTION_TIME         "Execution_Time"
#define PBSDRMAA_CHECKPOINT             "Checkpoint"
#define PBSDRMAA_ERROR_PATH             "Error_Path"
#define PBSDRMAA_GROUPS                 "group_list"
#define PBSDRMAA_HOLD_TYPES             "Hold_Types"
#define PBSDRMAA_JOIN_FILES             "Join_Path"
#define PBSDRMAA_KEEP_FILES             "Keep_Files"
/* #define PBSDRMAA_RESOURCES              "Resource_List" */
#define PBSDRMAA_CPU_TIME_LIMIT         "Resource_List.cput"
#define PBSDRMAA_FILE_SIZE_LIMIT        "Resource_List.file"
#define PBSDRMAA_NICE                   "Resource_List.nice"
#define PBSDRMAA_VMEM_LIMIT             "Resource_List.vmem"
#define PBSDRMAA_SINGLE_CPU_TIME_LIMIT  "Resource_List.pcput"
#define PBSDRMAA_SINGLE_RSS_LIMIT       "Resource_List.pmem"
#define PBSDRMAA_SINGLE_VMEM_LIMIT      "Resource_List.pvmem"
#define PBSDRMAA_WALLTIME_LIMIT         "Resource_List.walltime"
#define PBSDRMAA_ARCHITECTURE           "Resource_List.arch"
#define PBSDRMAA_HOST                   "Resource_List.host"
#define PBSDRMAA_NODES                  "Resource_List.nodes"
#define PBSDRMAA_SOFTWARE               "Resource_List.software"
#define PBSDRMAA_MAIL_POINTS            "Mail_Points"
#define PBSDRMAA_OUTPUT_PATH            "Output_Path"
#define PBSDRMAA_PRIORITY               "Priority"
#define PBSDRMAA_DESITINATION           "destination"
#define PBSDRMAA_RERUNABLE              "Rerunable"
#define PBSDRMAA_BULK_REQ               "job_array_request"
#define PBSDRMAA_BULK_IDX               "job_array_id"
#define PBSDRMAA_USERS                  "User_List"
#define PBSDRMAA_JOB_ENVIRONMENT        "Variable_List"
#define PBSDRMAA_ACCOUNT_NAME           "Account_Name"
#define PBSDRMAA_EMAIL                  "Mail_Users"
#define PBSDRMAA_JOB_NAME               "Job_Name"
#define PBSDRMAA_SHELL                  "Shell_Path_List"
#define PBSDRMAA_DEPEND                 "depend"
#define PBSDRMAA_INTERACTIVE            "interactive"
#define PBSDRMAA_STAGEIN                "stagein"
#define PBSDRMAA_STAGEOUT               "stageout"
/* additional job and general attribute names */
#define PBSDRMAA_EXECUTION_HOST         "exec_host"
#define PBSDRMAA_JOB_OWNER              "Job_Owner"
#define PBSDRMAA_RESOURCES_USED         "resources_used"
#define PBSDRMAA_JOB_STATE              "job_state"
#define PBSDRMAA_QUEUE                  "queue"
#define PBSDRMAA_SERVER                 "server"
#define PBSDRMAA_COMMENT                "comment"
#define PBSDRMAA_EXIT_STATUS            "exit_status"
#define PBSDRMAA_START_TIME             "start_time"
#define PBSDRMAA_EXTENSION              "extension"
#define PBSDRMAA_SUBMIT_ARGS		"submit_args"


typedef enum {
	PBSDRMAA_ATTR_EXECUTION_TIME,
	PBSDRMAA_ATTR_CHECKPOINT,
	PBSDRMAA_ATTR_ERROR_PATH,
	PBSDRMAA_ATTR_GROUPS,
	PBSDRMAA_ATTR_HOLD_TYPES,
	PBSDRMAA_ATTR_JOIN_FILES,
	PBSDRMAA_ATTR_KEEP_FILES,
	/* PBSDRMAA_ATTR_RESOURCES, */
	PBSDRMAA_ATTR_CPU_TIME_LIMIT,
	PBSDRMAA_ATTR_FILE_SIZE_LIMIT,
	PBSDRMAA_ATTR_NICE,
	PBSDRMAA_ATTR_VMEM_LIMIT,
	PBSDRMAA_ATTR_SINGLE_CPU_TIME_LIMIT,
	PBSDRMAA_ATTR_SINGLE_RSS_LIMIT,
	PBSDRMAA_ATTR_SINGLE_VMEM_LIMIT,
	PBSDRMAA_ATTR_WALLTIME_LIMIT,
	PBSDRMAA_ATTR_ARCHITECTURE,
	PBSDRMAA_ATTR_HOST,
	PBSDRMAA_ATTR_NODES,
	PBSDRMAA_ATTR_SOFTWARE,
	PBSDRMAA_ATTR_MAIL_POINTS,
	PBSDRMAA_ATTR_OUTPUT_PATH,
	PBSDRMAA_ATTR_PRIORITY,
	PBSDRMAA_ATTR_DESITINATION,
	PBSDRMAA_ATTR_RERUNABLE,
	PBSDRMAA_ATTR_BULK_REQ,
	PBSDRMAA_ATTR_BULK_IDX,
	PBSDRMAA_ATTR_USERS,
	PBSDRMAA_ATTR_JOB_ENVIRONMENT,
	PBSDRMAA_ATTR_ACCOUNT_NAME,
	PBSDRMAA_ATTR_EMAIL,
	PBSDRMAA_ATTR_JOB_NAME,
	PBSDRMAA_ATTR_SHELL,
	PBSDRMAA_ATTR_DEPEND,
	PBSDRMAA_ATTR_INTERACTIVE,
	PBSDRMAA_ATTR_STAGEIN,
	PBSDRMAA_ATTR_STAGEOUT,
	/* additional job and general attribute names */
	PBSDRMAA_ATTR_EXECUTION_HOST,
	PBSDRMAA_ATTR_JOB_OWNER,
	PBSDRMAA_ATTR_RESOURCES_USED,
	PBSDRMAA_ATTR_JOB_STATE,
	PBSDRMAA_ATTR_QUEUE,
	PBSDRMAA_ATTR_SERVER,
	PBSDRMAA_ATTR_COMMENT,
	PBSDRMAA_ATTR_EXIT_STATUS,
	PBSDRMAA_ATTR_START_TIME,
	PBSDRMAA_ATTR_EXTENSION,
	PBSDRMAA_ATTR_SUBMIT_ARGS,
	PBSDRMAA_ATTR_MTIME,

#if 0
	/* Additional Torque/OpenPBS attribs (not in DRMAA specification): */
	/* Used by OpenPBS user commands: */
	PBSDRMAA_ATTR_CHECKPOINT = DRMAA_N_ATTRIBUTES, /* MAX_DRMAA_ATTR+1, */
	PBSDRMAA_ATTR_GROUP_LIST,
	PBSDRMAA_ATTR_HOLD_TYPES,
	PBSDRMAA_ATTR_KEEP_FILES,
	PBSDRMAA_ATTR_RESOURCES,
	PBSDRMAA_ATTR_MAIL_POINTS,
	PBSDRMAA_ATTR_PRIORITY,
	PBSDRMAA_ATTR_DESTINATION_QUEUE,
	PBSDRMAA_ATTR_RERUNABLE,
	PBSDRMAA_ATTR_USER_LIST,
	PBSDRMAA_ATTR_ACCOUNT_NAME,
	PBSDRMAA_ATTR_SHELL,
	PBSDRMAA_ATTR_DEPENDENCIES,
	PBSDRMAA_ATTR_INTERACTIVE,
	PBSDRMAA_ATTR_STAGEIN,
	PBSDRMAA_ATTR_STAGEOUT,

	/* Additional job and general attribute names: */
	PBSDRMAA_ATTR_JOB_STATE,
	PBSDRMAA_ATTR_CTIME,
	/* PBSDRMAA_ATTR_MTIME, moved to basic attributes - needed to determine job end time*/
	PBSDRMAA_ATTR_QTIME,
	PBSDRMAA_ATTR_ETIME,
	PBSDRMAA_ATTR_RESOURCES_USED,
	PBSDRMAA_ATTR_EXIT_STATUS,
	PBSDRMAA_ATTR_JOB_OWNER,
	PBSDRMAA_ATTR_EUSER,
	PBSDRMAA_ATTR_EGROUP,
	PBSDRMAA_ATTR_HOP_COUNT,
	PBSDRMAA_ATTR_SECURITY,
	PBSDRMAA_ATTR_SCHEDULER_HINT,
	PBSDRMAA_ATTR_SERVER,
	PBSDRMAA_ATTR_QUEUE,
	PBSDRMAA_ATTR_QUEUE_RANK,
	PBSDRMAA_ATTR_EXECUTION_HOST,
	PBSDRMAA_ATTR_TOTAL_JOBS,
	PBSDRMAA_ATTR_MAX_RUNNING,
	PBSDRMAA_ATTR_COMMENT,
	PBSDRMAA_ATTR_JOB_COOKIE,
	PBSDRMAA_ATTR_HASHNAME,
	PBSDRMAA_ATTR_SESSION_ID,
	PBSDRMAA_ATTR_ALT_ID,

	/* Reservation attributes */
	PBSDRMAA_ATTR_RESERVATION_START,
	PBSDRMAA_ATTR_RESERVATION_END,
	PBSDRMAA_ATTR_RESERVATION_DURATION,
	PBSDRMAA_ATTR_RESERVATION_STATE,
	PBSDRMAA_ATTR_RESERVATION_SUBSTATE,

	/* Pseudo PBS attributes */
	PBSDRMAA_ATTR_RESERVATION_ID,
#endif

	PBSDRMAA_N_PBS_ATTRIBUTES
} pbs_attribute_t;

#endif /* __PBS_DRMAA__PBS_ATTRIB_H */

